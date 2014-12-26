<?php
// Show [...]/sites/all/themes/book/views/regions.mustache
?>
<input type="hidden" id="api-url" value="http://landportal.info/sites/miniplenty/modules/landbook/ajax" />
<input type="hidden" id="entity-id" value="" />

<div class="col-sm-9 graph-section">
  <h2 class="section section-name"><span class="indicator-name"></span></h2>
  <div id="map" class="map"></div>

  <h2 class="section section-name indicator-name">{{#labels}}{{for_countries}}{{/labels}}</h2>
  <div id="chart-region-bar-comparison" class="graph-medium"></div>

  <h2 class="section section-name indicator-name">{{#labels}}{{across_time}}{{/labels}}</h2>
  <div class="row compare-bar">
    <div class="col-xs-4">{{#labels}}{{compare_with}}{{/labels}}:</div>
    <div class="col-xs-8">
      <select id="region-comparing-select" class="form-control">
<?php foreach ($data['selectors']['regions'] as $r): ?>
        <option value="<?php echo $r['un_code']; ?>"><?php echo $r['name']; ?></option>
<?php endforeach; ?>
      </select>
    </div>
  </div>
  <div class="row compare-legend">
    <div class="col-xs-6">
      <div id="compare-legend-circle-1" class="circle"></div>
      <span id="compare-legend-text-1"></span>
    </div>
    <div class="col-xs-6">
      <div id="compare-legend-circle-2" class="circle"></div>
      <span id="compare-legend-text-2"></span>
    </div>
  </div>
  <div id="chart-timeline-comparison" class="graph-large"></div>
</div>

<div class="col-sm-3">
  <h2 class="section"><span>{{#labels}}{{world_region}}{{/labels}}</span></h2>
  <select id="region-select" multiple="multiple" class="form-control data-sources">
<?php foreach ($data['selectors']['regions'] as $r): ?>
    <option value="<?php echo $r['un_code']; ?>"><?php echo $r['name']; ?></option>
<?php endforeach; ?>
  </select>

  <h2 class="section"><span>{{#labels}}{{sources}}{{/labels}}</span></h2>
  <select id="source-select" multiple="multiple" class="form-control data-sources">
<?php foreach ($data['selectors']['data-sources'] as $d): ?>
    <option value="<?php echo $d['id']; ?>" title="<?php echo $d['name']; ?>"><?php echo $d['name']; ?></option>
<?php endforeach; ?>
  </select>

  <h2 class="section"><span>{{#labels}}{{indicators}}{{/labels}}</span></h2>

<!-- all indicator selects -->
<div>
<?php foreach ($data['selectors']['data-sources'] as $d): ?>
  <select data-source="<?php echo $d['id']; ?>" class="form-control topic-indicator-select data-sources hidden" multiple="multiple">
<?php foreach ($d['indicators'] as $i): ?>
    <option value="<?php echo $i['id']; ?>"><?php echo $i['name']; ?></option>
<?php endforeach; ?>
  </select>
<?php endforeach; ?>
</div>



<select id="indicator-select" multiple="multiple" class="form-control data-sources"></select>
<a href="/book/indicators" class="more-info">{{#labels}}{{more_about_the_indicators}}{{/labels}}</a>
<h2 class="section"><span>{{#labels}}{{specific_country}}{{/labels}}</span></h2>
<select id="country-select" class="form-control">
  <option disabled="disabled" selected="true">{{#labels}}{{select_a_country}}{{/labels}}</option>
<?php foreach ($data['selectors']['countries'] as $i): ?>
  <option value="<?php echo $i['iso3']; ?>"><?php echo $i['name']; ?></option>
<?php endforeach; ?>
</select>
  <a href="/book/countries" class="more-info">{{#labels}}{{more_about_areas_and_countries}}{{/labels}}</a>
  </div>
</div>
