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
  - drupal
  - admin_menu
  - admin_views
  - module_filter
  - calendar
  - ctools
  - ckeditor
  - date
  - ds
  - entityconnect
  - features
  - computed_field
  - email
  - entityreference
  - field_group
  - field_tools
  - link
  - references
  - title
  - hybridauth
  - location
  - file_entity
  - media
  - language_switcher
  - entity_translation
  - i18n
  - oauth
  - elysia_cron
  - entity
  - libraries
  - logintoboggan
  - masquerade
  - pathauto
  - restws
  - session_cache
  - strongarm
  - token
  - search_api
  - search_api_solr
  - term_search
  - apachesolr
  - apachesolr_views
  - facetapi
  - facetapi_collapsible
  - services
  - captcha
  - honeypot
  - recaptcha
  - google_analytics
  - synonyms
  - term_merge
  - jquery_update
  - uuid
  - variable
  - views
  - views_bulk_operations
  - views_distinct
  - global_filter
  - views_php
  - views_tree
  - feeds_tamper_conditional
  - feeds_tamper_string2id
  - feeds_xpathparser
  - feeds_jsonpath_parser
  - rdfx
  - sparql
  - rules
  - rules_autotag
includes:
  - "landportal-custom.make"
#  - "landportal-codebase.make"
