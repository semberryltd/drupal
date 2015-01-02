
<input type="hidden" id="entity-id" value="{{entity-id}}" />
<input type="hidden" id="path" value="{{path}}" />

<div class="content main-content container">

	<div class="row">
	  <div class="col-sm-9 graph-section">
		  <h1 class="country-name"><span class="indicator-name"></span></h1>
			<p class="indicator-description" id="indicator-description"></p>

      <div id="map" class="map"></div>

		  <h2 class="section"><span><?php echo t("Evolution of"); ?></span><span> </span><span class="indicator-name"></span></h2>
		  <div class="row compare-container">
			<div class="col-xs-4">
				<?php echo t("Compare with"); ?>:
			</div>
			<div class="col-xs-8">
			  <select id="indicator-comparing-select" class="form-control">
<?php foreach ($data['selectors']['topics'] as $t): ?>
				  		<optgroup label="<?php echo $t['translation_name']; ?>">
<?php foreach ($t['indicators'] as $i): ?>
                                <option value="<?php echo $i['id']; ?>"><?php echo $i['name']; ?></option>
<?php endforeach; ?>
				  		</optgroup>
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

		  <div class="row compare-container">
			<div class="col-xs-4">
				<?php echo t("Correlate with"); ?>:
			</div>
			<div class="col-xs-8">
			  <select id="indicator-relating-select" class="form-control">
<?php foreach ($data['selectors']['topics'] as $t): ?>
				  		<optgroup label="<?php echo $t['translation_name']; ?>">
<?php foreach ($t['indicators'] as $i): ?>
                                <option value="<?php echo $i['id']; ?>"><?php echo $i['name']; ?></option>
<?php endforeach; ?>
				  		</optgroup>
<?php endforeach; ?>
			  </select>
			</div>
		  </div>

		  <div id="chart-correlation-comparison" class="graph-large"></div>
		  <h2 class="section"><span class="indicator-name"></span><span> </span><span><?php echo t("at the different countries"); ?></span></h2>
		  <div id="loading" class="loading-circles"></div>
			<div class="table-responsive">
			  <table id="country-values" class="table table-striped sortable">
				  <thead>
				  		<tr>
					  		<th data-sort-type="text"><?php echo t("Country"); ?></th>
					  		<th data-sort-type="number"><?php echo t("Time"); ?></th>
								<th data-sort-type="number"><?php echo t("Value"); ?></th>
					  		<th data-sort-type="number"><?php echo t("Last updated"); ?></th>
					  		<th data-sort-type="text"><?php echo t("Tendency"); ?></th>
				  		</tr>
				  </thead>
				  <tbody>

				  </tbody>
			  </table>
		  </div>
	  </div>
	  <div class="col-sm-3">
		  <h2 class="section"><span><?php echo t("Topic"); ?></span></h2>
		  <select id="topic-select" multiple="multiple" class="form-control data-sources">
<?php foreach ($data['selectors']['topics'] as $t): ?>
			  		<option value="<?php echo $t['id']; ?>" title="<?php echo $t['translation_name']; ?>"><?php echo $t['translation_name']; ?></option>
<?php endforeach; ?>

		  </select>
		  <h2 class="section"><span><?php echo t("Indicator"); ?></span></h2>
		  <!-- all indicator selects -->
		  <div>
<?php foreach ($data['selectors']['topics'] as $t): ?>
			  		<select class="form-control topic-indicator-select data-sources hidden" multiple="multiple">
<?php foreach ($t['indicators'] as $i): ?>
                                <option value="<?php echo $i['id']; ?>" title="<?php echo $i['name']; ?>"><?php echo $i['name']; ?></option>
<?php endforeach; ?>
				  		</select>
<?php endforeach; ?>
		  </div>
				<select id="indicator-select" multiple="multiple" class="form-control data-sources">
				</select>
		   </select>
		   <h2 class="section"><span><?php echo t("All indicators"); ?></span></h2>
		   <select id="all-indicator-select" class="form-control">
<?php foreach ($data['selectors']['topics'] as $t): ?>
				  		<optgroup label="<?php echo $t['translation_name']; ?>">
<?php foreach ($t['indicators'] as $i): ?>
                                <option value="<?php echo $i['id']; ?>"><?php echo $i['name']; ?></option>
<?php endforeach; ?>
				  		</optgroup>
<?php endforeach; ?>
		   </select>
                   <a href="/book/indicators" class="more-info"><?php echo t("More about the indicators"); ?></a>

		  <button class="btn data-button-coming">
                          <?php echo t("Socio-economic Land Library"); ?>
		  </button>
			<a id="debate-link">
		  	<button class="btn data-button-dark"><?php echo t("Debate with others"); ?></button>
			</a>

			{{>share}}
	  </div>
	</div>
</div>

