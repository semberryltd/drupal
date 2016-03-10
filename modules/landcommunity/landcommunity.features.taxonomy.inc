<?php
/**
 * @file
 * landcommunity.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function landcommunity_taxonomy_default_vocabularies() {
  return array(
    'interests' => array(
      'name' => 'Interests DEPREC?',
      'machine_name' => 'interests',
      'description' => 'User interests',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 5,
      'language' => 'und',
      'i18n_mode' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'regions' => array(
      'name' => 'Regions DEPREC',
      'machine_name' => 'regions',
      'description' => 'Regions (DEPRECATED) - this taxonomy is wrong',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 7,
      'language' => 'und',
      'i18n_mode' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
