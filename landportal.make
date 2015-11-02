##
# Landportal drush make file
#
# Author: Jules Clement <jules.clement@landportal.info>
#
core: 7.x
api: 2
# defaults:
#   projects:
#     subdir: "sites/all/modules"
projects:
  drupal:
    version: ~
  admin_menu:
    version: ~
  admin_menu_toolbar:
    version: ~
  admin_views:
    version: ~
  module_filter:
    version: ~
  calendar:
    version: ~
  ctools:
    version: ~
  ckeditor:
    version: ~
  date:
    version: ~
  date_api:
    version: ~
  date_views:
    version: ~
  ds:
    version: ~
  ds_extras:
    version: ~
  entityconnect:
    version: ~
  features:
    version: ~
  computed_field:
    version: ~
  email:
    version: ~
  entityreference:
    version: ~
  field_group:
    version: ~
  field_tools:
    version: ~
  field_tools_taxonomy:
    version: ~
  link:
    version: ~
  # location_cck:
  #   version: ~
  references:
    version: ~
  title:
    version: ~
  hybridauth:
    version: ~
  location:
    version: ~
  location_entity:
    version: ~
  location_node:
    version: ~
  location_user:
    version: ~
  mailchimp:
    version: "7.x-2.12"
  mailchimp_campaign:
    version: "7.x-2.12"
  mailchimp_lists:
    version: "7.x-2.12"
  mailchimp_user_list:
    version: "7.x-1.0"
  file_entity:
    version: ~
  media:
    version: ~
  media_wysiwyg:
    version: ~
  language_switcher:
    version: ~
  entity_translation:
    version: ~
  entity_translation_i18n_menu:
    version: ~
  entity_translation_upgrade:
    version: ~
  i18n_block:
    version: ~
  i18n:
    version: ~
  i18n_menu:
    version: ~
  i18n_node:
    version: ~
  rules_i18n:
    version: ~
  i18n_string:
    version: ~
  i18n_sync:
    version: ~
  i18n_taxonomy:
    version: ~
  i18n_variable:
    version: ~
  oauth_common:
    version: ~
  elysia_cron:
    version: ~
  entity:
    version: ~
  entity_token: # a performance killer...
    version: ~
  libraries:
    version: ~
  logintoboggan:
    version: ~
  masquerade:
    version: ~
  pathauto:
    version: ~
  restws:
    version: ~
  session_cache:
    version: ~
  strongarm:
    version: ~
  token:
    version: ~
  search_api:
    version: ~
  search_api_solr:
    version: ~
  term_search:
    version: ~
  apachesolr:
    version: ~
  apachesolr_search:
    version: ~
  apachesolr_views:
    version: ~
  facetapi:
    version: ~
  facetapi_collapsible:
    version: ~
  services:
    version: ~
  services_oauth:
    version: ~
  xmlrpc_server:
    version: ~
  captcha:
    version: ~
  honeypot:
    version: ~
  recaptcha:
    version: ~
  googleanalytics:
    version: ~
  synonyms:
    version: ~
  term_merge:
    version: ~
  ckeditor:
    version: "7.x-1.16+14-dev"
  jquery_update:
    version: ~
  uuid:
    version: ~
  variable:
    version: ~
  variable_realm:
    version: ~
  variable_store:
    version: ~
  views:
    version: ~
  views_bulk_operations:
    version: ~
  views_distinct:
    version: ~
  global_filter:
    version: ~
  views_php:
    version: ~
  views_tree:
    version: ~
  views_ui:
    version: ~

# Community    
projects:
  profile2:
    version: ~
    patch:
      rfc-fixes:
        url: "https://www.drupal.org/files/issues/profile2--inherit-view_mode.patch"
        md5: "81f2f6696d27938e97924b15a90b6085"

# Library
projects:
  feeds:
    version: "7.x-2.0-alpha8+85-dev"
  feeds_crawler:
    version: "7.x-2.x-dev"
  feeds_fetcher_directory:
    version: "7.x-2.0-beta5"
  feeds_tamper:
    version: ~
    patch:
      # See: https://www.drupal.org/node/1525540
      rfc-fixes: "https://www.drupal.org/files/issues/multiple_replace-1525540-7.patch"
      md5: "4e5352b32bec408b17eba47c5ca1eb84"
  feeds_tamper_conditional:
    version: ~
  feeds_tamper_string2id:
    version: ~
  feeds_xpathparser:
    version: ~
  # feeds_et:
  #   version: ~
  # feeds_youtube:
  #   version: ~
  feeds_jsonpath_parser:
    version: ~
  rdfui:
    version: ~
  rdfx:
    version: ~
  sparql:
    version: ~
  rules:
    version: ~
  rules_autotag:
    version: ~
  rules_scheduler:
    version: ~
  rules_admin:
    version: ~

# Custom LP modules (deployable via drush make?)
projects:
  landportal:
    type: "theme"
    #directory_name: "landportal"
  landcommunity:
    version: ~
  landdebate:
    version: ~
  landbook:
    version: ~
  landlibrary:
    version: ~
  apachesolr_descr:
    version: ~
    #directory_name: "landlibrary/modules/apachesolr_descr"
  rdf_indexer:
    version: ~
    #directory_name: "landlibrary/modules/rdf_indexer"
  rdfext:
    version: ~
    #directory_name: "landlibrary/modules/rdfext/"

# # Libraries
# libraries:
#   ARC2:
#     #
#   ckeditor:
#     #destination: "sites/all/modules/ckeditor/ckeditor/"
#   easyrdf:
#     # XXXX
#   jsonpath:
#   hybridauth:
#   mailchimp:
  