#
# Landportal drush make file
#
# Tihs file contains specific LP Drupal modules, versions etc...
#
# Author: Jules Clement <jules.clement@landportal.info>
#
core: 7.x
# defaults:
#   projects:
#   subdir: "sites/drupal.ker/modules"
projects:
  mailchimp:
    version: "2.12"
  mailchimp_user_lists:
    version: "1.0"
  ckeditor:
    version: "1.16+14-dev"
  profile2:
    patch:
      - "https://www.drupal.org/files/issues/profile2--inherit-view_mode.patch"
  feeds:
    version: "2.0-alpha9" #2.0-alpha8+85-dev"
  feeds_crawler:
    version: "2.x-dev"
  feeds_fetcher_directory:
    version: "2.0-beta5"
  feeds_tamper:
    patch:
      # See: https://www.drupal.org/node/1525540
      - "https://www.drupal.org/files/issues/multiple_replace-1525540-7.patch"
