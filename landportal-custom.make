#
# Landportal drush make file
#
# Tihs file contains specific LP Drupal modules, versions etc...
#
# Author: Jules Clement <jules.clement@landportal.info>
#
core: 7.x
api: 2
# defaults:
#   projects:
#     subdir: "sites/all/modules"
projects:
  mailchimp:
    version: "2.12"
  mailchimp_user_lists:
    version: "1.0"
  # For Media and CKEditor patches, see: https://www.drupal.org/node/2455391
  media:
    patch:
      # This patch doesn't work anymore...
      #- "https://www.drupal.org/files/issues/remove-js-attach-functions-2454933-1.patch"
      # Try this one, from
      - "https://www.drupal.org/files/issues/Issue_2454933.patch"
      # https://www.drupal.org/node/2121253
      #- "https://www.drupal.org/files/attach-media-browser-javascript-settings-2121253-1.patch"
  ckeditor:
    version: ~
    patch:
      - "https://www.drupal.org/files/issues/media_browser_js-2455391-13.patch"
      #- "https://www.drupal.org/files/issues/Issue_2454933_0.patch"
  profile2:
    patch:
      - "https://www.drupal.org/files/issues/profile2--inherit-view_mode.patch"
  feeds:
    version: "2.0-beta1" #2.0-alpha8+85-dev"
  feeds_crawler:
    version: "2.x-dev"
  feeds_fetcher_directory:
    version: "2.0-beta5"
  feeds_tamper:
    patch:
      - "https://www.drupal.org/files/issues/multiple_replace-1525540-7.patch"
libraries:
  jsonpath:
    download:
      type: "file"
      url: "http://jsonpath.googlecode.com/svn/trunk/src/php/jsonpath.php"
  arc:
    subdir: "ARC2"
    download:
      type: "git"
      url: "https://github.com/semsol/arc2.git"
  mailchimp:
    download:
      # V1 API
      type: "file"
      url: "http://apidocs.mailchimp.com/api/downloads/mailchimp-api-class.zip"
      # V2 API
      # type: "git"
      # url: "https://bitbucket.org/mailchimp/mailchimp-api-php.git"
  hybridauth:
    download:
      type: "git"
      url: "https://github.com/hybridauth/hybridauth"
  ckeditor:
    download:
      type: "file"
      url: "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.5.4/ckeditor_4.5.4_full.zip"
