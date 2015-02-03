#!/bin/bash
#
# For this script to work you need:
# - drupal7 to be installed in /usr/share/drupal7
# - to be able to run drush . Drush needs to be configured to hit
#    the site you target "by default" (aka without the -l or --uri options)
#

DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
cd /usr/share/drupal7 || exit 1

# Disable all WESO modules
echo "Disable Landportal 2.0 theme & modules"
drush -y dis ckan_integration_endpoint druser_resource landbook_nodes_access landportal_api_auth landportal_uris session_resource taxonomy_dictionary unit_testing facebook_login landbook_nodes_importers landdebate_permissions twitter_login landbook_nodes landdebate_content_types landdebate_views book
# also disable 'standard' Drupal modules
drush -y dis feeds context group_fields

# Reset view, delete useless ones
drush vr community latest_news latest_debates debate_facilitators
drush vdis latest_news latest_debates debate_facilitators
# Remove some configuration variable
drush --yes vdel site_403
drush --yes vdel site_404
drush --yes vdel theme_book_settings


# Re-set basic theme_settings (tobogan, favicon, logo...)
drush php-eval "variable_set('theme_settings', array('toggle_logo' => 1, 'toggle_name' => 1, 'toggle_slogan' => 1, 'toggle_node_user_picture' => 1, 'toggle_comment_user_picture' => 1, 'toggle_comment_user_verification' => 1, 'toggle_favicon' => 1, 'toggle_main_menu' => 1, 'toggle_secondary_menu' => 1, 'default_logo' => 1, 'logo_path' => '', 'logo_upload' => '', 'default_favicon' => 1, 'favicon_path' => '', 'favicon_upload' => ''))"

echo "Update db and clean all cache"
drush -y updatedb
drush cc all

echo "Enable landportal 2.1 theme & modules"
drush -y en landportal
drush vset theme_default landportal

drush -y en landportal_extra
drush -y fr landportal_extra
drush -y en landportal_homepage
drush -y en landbook
drush -y en landdebate

drush -y vset pathauto_update_action 1

echo "Add base pages (mainly for home/landing page)"
drush -y vset node_export_reset_path_page 0
drush -y en node_export
nei=$(drush ne-import --file=$DIR/pages-home-export.php)
# Grab the first created nid
nid=$(echo $nei | sed -E "s/^Imported node ([C0-9]+):.*/\1/" -)
drush -y vset site_frontpage node/$nid

echo "Remember to set home page in /admin/config/system/site-information (doesn't work by setting the site_frontpage variable unless you know have the nid)."
drush cc all

exit 0
