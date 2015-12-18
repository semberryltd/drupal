<?php
/**
 * @file
 * user_profile_sync.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function user_profile_sync_default_rules_configuration() {
  $items = array();
  $items['rules_create_profile'] = entity_import('rules_config', '{ "rules_create_profile" : {
      "LABEL" : "Create Profile",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "data_is_empty" : { "data" : [ "account:profile-main" ] } },
        { "data_is_empty" : { "data" : [ "account:profile-main:field-firstname" ] } },
        { "data_is_empty" : { "data" : [ "account:profile-main:field-lastname" ] } },
        { "data_is_empty" : { "data" : [ "account:profile-main:field-description" ] } },
        { "data_is_empty" : { "data" : [ "account:profile-main:field-geographical-focus" ] } },
        { "data_is_empty" : { "data" : [ "account:profile-main:field-title" ] } },
        { "data_is_empty" : { "data" : [ "account:profile-main:field-interests" ] } },
        { "data_is_empty" : { "data" : [ "account:profile-main:field-image" ] } },
        { "data_is_empty" : { "data" : [ "account:profile-main:field-location" ] } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "profile2",
              "param_type" : "main",
              "param_user" : [ "account" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-description:value" ], "value" : " " } },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } }
      ]
    }
  }');
  return $items;
}
