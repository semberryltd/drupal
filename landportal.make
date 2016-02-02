#
# Landportal drush make file
#
# This file list contrib modules that are at their latest version
#
# Author: Jules Clement <jules.clement@landportal.info>
#
core: 7.x
api: 2
# defaults:
#   projects:
#     subdir: "sites/all/modules"
projects:
  - admin_menu
  - admin_views
  - apachesolr
  - apachesolr_views
  - better_formats
  - block_class
  - calendar
  - captcha
  - chosen
  - computed_field
  - context
  - ctools
  - date
  - draggableviews
  - drupal
  - ds
  - elysia_cron
  - email
  - entity
  - entity_translation
  - entityconnect
  - entityreference
  - entityreference_feeds
  - entityreference_filter
  - facetapi
  - facetapi_collapsible
  - features
  - features_extra
  - feeds_jsonpath_parser
  - feeds_tamper_conditional
  - feeds_tamper_php
  - feeds_tamper_string2id
  - feeds_xpathparser
  - field_group
  - field_tools
  - field_validation
  - file_entity
  - global_filter
  - google_analytics
  - honeypot
  - hybridauth
  - i18n
  - job_scheduler
  - language_switcher
  - libraries
  - link
  - location
  - login_one_time
  - logintoboggan
  - mailchimp_user_lists
  - masquerade
  - media
  - module_filter
  - nice_menus
  - node_edit_protection
  - oauth
  - pathauto
  - rdfx
  - recaptcha
  - references
  - restws
  - rules
  - rules_autotag
  - save_draft
  - search_api
  - search_api_solr
  - services
  - session_cache
  - shs
  - xmlsitemap
  - sparql
  - strongarm
  - synonyms
  - taxonomy_edge
  - term_merge
  - term_search
  - title
  - token
  - uuid
  - uuid_features
  - variable
  - vertical_tabs_responsive
  - views
  - views_bulk_operations
  - views_distinct
  - views_php
  - views_tree
  - webform
  - disable_messages

includes:
  - "landportal-custom.make"
