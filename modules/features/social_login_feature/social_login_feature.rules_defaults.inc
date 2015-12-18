<?php
/**
 * @file
 * social_login_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function social_login_feature_default_rules_configuration() {
  $items = array();
  $items['rules_populate_user_profile_fields'] = entity_import('rules_config', '{ "rules_populate_user_profile_fields" : {
      "LABEL" : "Populate User Profile Fields",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "hybridauth", "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "hybridauth_user_created_hybridauth" : { "account" : [ "account" ] } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "profile2",
              "param_type" : "main",
              "param_user" : [ "account" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created Profile entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-firstname" ],
            "value" : "[account:hybridauth:firstName]"
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-lastname" ],
            "value" : "[account:hybridauth:lastName] "
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } }
      ]
    }
  }');
  return $items;
}
