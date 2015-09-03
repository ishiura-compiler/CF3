#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = UINT32_MAX;
int64_t x11 = 1670933621LL;
volatile int32_t t3 = -39650726;
int16_t x46 = INT16_MAX;
static uint64_t x47 = UINT64_MAX;
uint64_t t8 = 14767567230LLU;
static volatile uint16_t x74 = 120U;
static volatile int16_t x75 = -1;
static volatile uint64_t x77 = UINT64_MAX;
int8_t x80 = -1;
volatile int64_t x82 = 94488459331LL;
static int16_t x83 = -435;
int64_t x84 = -1LL;
int16_t x91 = INT16_MIN;
volatile uint64_t t14 = 479723148656LLU;
int16_t x95 = -1;
int64_t x96 = -1LL;
int8_t x102 = 14;
uint8_t x141 = 9U;
int64_t x142 = -237913LL;
int64_t t22 = -551707987086937LL;
volatile int64_t t23 = 187LL;
static int16_t x152 = 7952;
static int16_t x163 = 0;
volatile int8_t x176 = -1;
int32_t x183 = INT32_MIN;
int16_t x187 = INT16_MIN;
volatile int32_t t29 = -384593525;
uint32_t x189 = 64725619U;
uint64_t x192 = 0LLU;
int16_t x197 = INT16_MIN;
int64_t x200 = -1LL;
uint8_t x204 = UINT8_MAX;
static volatile int32_t x228 = -1;
static uint64_t x242 = 3584890882392199LLU;
int64_t t40 = 51210LL;
int16_t x253 = -7;
static uint64_t t44 = 610385LLU;
uint64_t x296 = UINT64_MAX;
volatile uint64_t t48 = 610752LLU;
int8_t x297 = -1;
volatile int64_t x300 = -3666LL;
uint64_t t49 = 26330731LLU;
int16_t x301 = INT16_MIN;
int64_t x304 = -488479611519LL;
static uint64_t x308 = UINT64_MAX;
static int64_t x310 = -87884LL;
uint8_t x325 = 5U;
uint32_t x327 = 307284666U;
int64_t x342 = 4204LL;
int64_t x345 = -1683LL;
int8_t x357 = -30;
int8_t x362 = INT8_MIN;
int64_t x365 = INT64_MAX;
int8_t x366 = INT8_MAX;
static volatile uint32_t x369 = 1031002541U;
uint32_t x371 = 3U;
volatile uint32_t t64 = 25U;
static int16_t x373 = INT16_MIN;
volatile int8_t x375 = 0;
int16_t x378 = 8;
static uint8_t x380 = UINT8_MAX;
uint32_t x387 = 16334U;
int32_t x401 = -1;
int8_t x404 = INT8_MAX;
static uint8_t x408 = 57U;
volatile uint64_t t71 = 1213186974529LLU;
static int16_t x419 = 5;
static int8_t x421 = -1;
static int64_t x435 = -1LL;
volatile int64_t x439 = 4LL;
int8_t x444 = INT8_MIN;
static uint64_t t77 = 488495049735079LLU;
int16_t x445 = -1;
uint64_t x446 = 95220LLU;
static uint64_t x460 = UINT64_MAX;
static volatile uint64_t t79 = 854826LLU;
volatile int8_t x461 = -3;
static int32_t x462 = INT32_MAX;
static int16_t x463 = -1;
uint16_t x475 = 26U;
uint32_t t82 = 1U;
volatile uint16_t x502 = 6135U;
int64_t t86 = 12058560093856086LL;
static volatile int64_t t87 = 8478048881LL;
int8_t x514 = INT8_MIN;
int8_t x515 = -15;
int16_t x525 = 1;
static int16_t x527 = -1;
static uint64_t x528 = 4937297564LLU;
int8_t x529 = INT8_MIN;
static uint16_t x530 = UINT16_MAX;
int8_t x536 = INT8_MAX;
uint8_t x551 = UINT8_MAX;
static uint32_t t95 = 129175536U;
uint32_t x575 = 15835U;


void f0(void) {
	int64_t x1 = -178LL;
	static int16_t x2 = INT16_MAX;
	int8_t x3 = 46;
	int16_t x4 = -1;
	static volatile int64_t t0 = -7114698610855LL;

	t0 = (x1-(x2*(x3-x4)));

	if (t0 != -1540227LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int32_t x7 = -1;
	static uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5-(x6*(x7-x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -38;
	int32_t x10 = INT32_MAX;
	uint8_t x12 = 7U;
	int64_t t2 = 241581186400LL;

	t2 = (x9-(x10*(x11-x12)));

	if (t2 != -3588302611287610296LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = UINT8_MAX;
	static int32_t x16 = -1;

	t3 = (x13-(x14*(x15-x16)));

	if (t3 != 8355840) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x33 = INT8_MAX;
	uint16_t x34 = 7656U;
	static uint16_t x35 = UINT16_MAX;
	uint64_t x36 = 82887463804LLU;
	volatile uint64_t t4 = 2746655LLU;

	t4 = (x33-(x34*(x35-x36)));

	if (t4 != 634585921147591LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = INT8_MAX;
	uint8_t x42 = 53U;
	volatile int64_t x43 = 29561217733LL;
	uint64_t x44 = 6183784LLU;
	uint64_t t5 = 1200915790352460053LLU;

	t5 = (x41-(x42*(x43-x44)));

	if (t5 != 18446742507292752446LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = -1;
	int8_t x48 = INT8_MAX;
	uint64_t t6 = 2LLU;

	t6 = (x45-(x46*(x47-x48)));

	if (t6 != 4194175LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x53 = INT64_MAX;
	uint8_t x54 = UINT8_MAX;
	uint64_t x55 = 125050581LLU;
	int32_t x56 = 279640;
	static uint64_t t7 = 329061408552637581LLU;

	t7 = (x53-(x54*(x55-x56)));

	if (t7 != 9223372005038185852LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x61 = 0;
	int32_t x62 = 1015;
	uint64_t x63 = UINT64_MAX;
	static uint64_t x64 = 94113571791768LLU;

	t8 = (x61-(x62*(x63-x64)));

	if (t8 != 95525275368645535LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x65 = INT64_MIN;
	int8_t x66 = INT8_MIN;
	uint64_t x67 = UINT64_MAX;
	static uint64_t x68 = 2748441359145943LLU;
	volatile uint64_t t9 = 2149915051655304864LLU;

	t9 = (x65-(x66*(x67-x68)));

	if (t9 != 8871571542884094976LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x69 = 28012120730LL;
	volatile uint16_t x70 = 2U;
	static volatile uint32_t x71 = 170888U;
	int8_t x72 = 7;
	volatile int64_t t10 = 7640390100909301LL;

	t10 = (x69-(x70*(x71-x72)));

	if (t10 != 28011778968LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x73 = -1;
	int8_t x76 = -1;
	int32_t t11 = 23705;

	t11 = (x73-(x74*(x75-x76)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x78 = INT8_MIN;
	uint16_t x79 = 2U;
	volatile uint64_t t12 = 9579845LLU;

	t12 = (x77-(x78*(x79-x80)));

	if (t12 != 383LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x81 = 54948153U;
	volatile int64_t t13 = 3834717138110143LL;

	t13 = (x81-(x82*(x83-x84)));

	if (t13 != 41008046297807LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x89 = 378272475;
	uint8_t x90 = UINT8_MAX;
	uint64_t x92 = 121490491161999LLU;

	t14 = (x89-(x90*(x91-x92)));

	if (t14 != 30980075632938060LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x93 = INT32_MAX;
	static int64_t x94 = INT64_MAX;
	volatile int64_t t15 = 45520LL;

	t15 = (x93-(x94*(x95-x96)));

	if (t15 != 2147483647LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x101 = 478U;
	int32_t x103 = -1;
	static int8_t x104 = 0;
	int32_t t16 = 1;

	t16 = (x101-(x102*(x103-x104)));

	if (t16 != 492) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x113 = -1;
	int16_t x114 = INT16_MAX;
	uint16_t x115 = 41U;
	uint64_t x116 = UINT64_MAX;
	static uint64_t t17 = 436357LLU;

	t17 = (x113-(x114*(x115-x116)));

	if (t17 != 18446744073708175401LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x117 = INT32_MAX;
	uint16_t x118 = 1U;
	int64_t x119 = -397560513LL;
	int16_t x120 = INT16_MIN;
	int64_t t18 = -2571510460924LL;

	t18 = (x117-(x118*(x119-x120)));

	if (t18 != 2545011392LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x129 = 9720524194988LLU;
	int8_t x130 = 62;
	static uint32_t x131 = 969680045U;
	static uint64_t x132 = 69232390LLU;
	uint64_t t19 = 2298344629361368169LLU;

	t19 = (x129-(x130*(x131-x132)));

	if (t19 != 9664696440378LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x133 = INT32_MAX;
	uint32_t x134 = UINT32_MAX;
	uint16_t x135 = UINT16_MAX;
	int64_t x136 = -1LL;
	volatile int64_t t20 = 1475399378519812165LL;

	t20 = (x133-(x134*(x135-x136)));

	if (t20 != -281472829161473LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x137 = INT8_MAX;
	uint8_t x138 = 106U;
	int8_t x139 = INT8_MIN;
	volatile uint8_t x140 = 0U;
	volatile int32_t t21 = -1834508;

	t21 = (x137-(x138*(x139-x140)));

	if (t21 != 13695) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x143 = 6U;
	uint8_t x144 = 5U;

	t22 = (x141-(x142*(x143-x144)));

	if (t22 != 237922LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x145 = -1;
	volatile int64_t x146 = -24LL;
	int32_t x147 = -1;
	uint32_t x148 = 864U;

	t23 = (x145-(x146*(x147-x148)));

	if (t23 != 103079194343LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x149 = 5290;
	int32_t x150 = 3005;
	uint64_t x151 = 7371282803744915821LLU;
	volatile uint64_t t24 = 3043LLU;

	t24 = (x149-(x150*(x151-x152)));

	if (t24 != 3834807271723349761LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x161 = 21856U;
	int8_t x162 = -1;
	int32_t x164 = -1;
	int32_t t25 = 158195619;

	t25 = (x161-(x162*(x163-x164)));

	if (t25 != 21857) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x169 = -3240;
	uint64_t x170 = UINT64_MAX;
	volatile uint32_t x171 = 827U;
	int8_t x172 = -54;
	uint64_t t26 = 21237173LLU;

	t26 = (x169-(x170*(x171-x172)));

	if (t26 != 18446744073709549257LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x173 = -1;
	static uint32_t x174 = UINT32_MAX;
	int32_t x175 = INT32_MIN;
	uint32_t t27 = 68182U;

	t27 = (x173-(x174*(x175-x176)));

	if (t27 != 2147483648U) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x181 = 5695;
	static int32_t x182 = INT32_MIN;
	uint64_t x184 = 8045588650888169LLU;
	volatile uint64_t t28 = 1LLU;

	t28 = (x181-(x182*(x183-x184)));

	if (t28 != 17670499909008102975LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x185 = 0;
	uint8_t x186 = 25U;
	int8_t x188 = INT8_MIN;

	t29 = (x185-(x186*(x187-x188)));

	if (t29 != 816000) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x190 = -1;
	int64_t x191 = INT64_MAX;
	static volatile uint64_t t30 = 461LLU;

	t30 = (x189-(x190*(x191-x192)));

	if (t30 != 9223372036919501426LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x198 = INT8_MIN;
	int32_t x199 = 1896;
	int64_t t31 = 49482861764334LL;

	t31 = (x197-(x198*(x199-x200)));

	if (t31 != 210048LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x201 = -2;
	int8_t x202 = INT8_MAX;
	uint64_t x203 = 47845285921123LLU;
	volatile uint64_t t32 = 108363509743084876LLU;

	t32 = (x201-(x202*(x203-x204)));

	if (t32 != 18440667722397601378LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x205 = 4U;
	uint8_t x206 = 0U;
	int32_t x207 = -1;
	int64_t x208 = INT64_MIN;
	volatile int64_t t33 = -2839LL;

	t33 = (x205-(x206*(x207-x208)));

	if (t33 != 4LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x213 = INT8_MIN;
	uint16_t x214 = 3U;
	static int32_t x215 = -1;
	int64_t x216 = -2859410LL;
	volatile int64_t t34 = 12594212392623LL;

	t34 = (x213-(x214*(x215-x216)));

	if (t34 != -8578355LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x217 = 4;
	int32_t x218 = -12178;
	int64_t x219 = INT64_MIN;
	uint64_t x220 = 123278388896658259LLU;
	uint64_t t35 = 1958611265LLU;

	t35 = (x217-(x218*(x219-x220)));

	if (t35 != 11348794060678954414LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x225 = 21028782U;
	int8_t x226 = -54;
	volatile uint8_t x227 = UINT8_MAX;
	volatile uint32_t t36 = 6U;

	t36 = (x225-(x226*(x227-x228)));

	if (t36 != 21042606U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x233 = -24;
	int8_t x234 = 1;
	uint8_t x235 = 5U;
	int8_t x236 = 1;
	static int32_t t37 = 934;

	t37 = (x233-(x234*(x235-x236)));

	if (t37 != -28) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x237 = INT8_MIN;
	volatile uint8_t x238 = UINT8_MAX;
	int32_t x239 = -1;
	int16_t x240 = -4;
	volatile int32_t t38 = 419640;

	t38 = (x237-(x238*(x239-x240)));

	if (t38 != -893) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x241 = -1;
	volatile uint8_t x243 = 0U;
	int64_t x244 = INT64_MAX;
	volatile uint64_t t39 = 872787890329222240LLU;

	t39 = (x241-(x242*(x243-x244)));

	if (t39 != 9219787145972383608LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x245 = 1832803576024LL;
	uint8_t x246 = 27U;
	volatile int16_t x247 = INT16_MIN;
	int64_t x248 = -1LL;

	t40 = (x245-(x246*(x247-x248)));

	if (t40 != 1832804460733LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x254 = 797;
	volatile int32_t x255 = -1;
	uint64_t x256 = 1356762512175852373LLU;
	static volatile uint64_t t41 = 4717812313057035536LLU;

	t41 = (x253-(x254*(x255-x256)));

	if (t41 != 11428565929000348343LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x257 = 27U;
	int32_t x258 = INT32_MIN;
	static int32_t x259 = INT32_MAX;
	uint32_t x260 = UINT32_MAX;
	uint32_t t42 = 38U;

	t42 = (x257-(x258*(x259-x260)));

	if (t42 != 27U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x265 = INT64_MIN;
	static int16_t x266 = INT16_MIN;
	uint64_t x267 = UINT64_MAX;
	static uint64_t x268 = 7846LLU;
	volatile uint64_t t43 = 4368LLU;

	t43 = (x265-(x266*(x267-x268)));

	if (t43 != 9223372036597645312LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x273 = UINT8_MAX;
	static volatile int32_t x274 = 58;
	volatile uint64_t x275 = UINT64_MAX;
	volatile uint64_t x276 = UINT64_MAX;

	t44 = (x273-(x274*(x275-x276)));

	if (t44 != 255LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x281 = INT16_MIN;
	static volatile int32_t x282 = -1;
	static uint32_t x283 = 2403946U;
	int8_t x284 = INT8_MIN;
	static uint32_t t45 = 859U;

	t45 = (x281-(x282*(x283-x284)));

	if (t45 != 2371306U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x285 = INT16_MIN;
	uint32_t x286 = 590U;
	int64_t x287 = INT64_MIN;
	int64_t x288 = INT64_MIN;
	static volatile int64_t t46 = -12299071930797LL;

	t46 = (x285-(x286*(x287-x288)));

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x289 = UINT64_MAX;
	int64_t x290 = INT64_MIN;
	uint64_t x291 = UINT64_MAX;
	static int8_t x292 = INT8_MAX;
	uint64_t t47 = UINT64_MAX;

	t47 = (x289-(x290*(x291-x292)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x293 = 1031849LLU;
	volatile uint32_t x294 = UINT32_MAX;
	int8_t x295 = -1;

	t48 = (x293-(x294*(x295-x296)));

	if (t48 != 1031849LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x298 = INT32_MIN;
	uint64_t x299 = UINT64_MAX;

	t49 = (x297-(x298*(x299-x300)));

	if (t49 != 7870527569919LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x302 = INT8_MAX;
	int32_t x303 = 6;
	volatile int64_t t50 = 1744271536LL;

	t50 = (x301-(x302*(x303-x304)));

	if (t50 != -62036910696443LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x305 = 25U;
	uint64_t x306 = UINT64_MAX;
	uint32_t x307 = 2145U;
	static volatile uint64_t t51 = 1058145710894127274LLU;

	t51 = (x305-(x306*(x307-x308)));

	if (t51 != 2171LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x309 = -31065648;
	int32_t x311 = INT32_MIN;
	volatile int16_t x312 = -1;
	int64_t t52 = -541096236LL;

	t52 = (x309-(x310*(x311-x312)));

	if (t52 != -188729483898596LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x313 = -1LL;
	static uint8_t x314 = UINT8_MAX;
	uint64_t x315 = 100314622053LLU;
	uint8_t x316 = 0U;
	static uint64_t t53 = 235247508481877532LLU;

	t53 = (x313-(x314*(x315-x316)));

	if (t53 != 18446718493480928100LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x317 = -32LL;
	uint8_t x318 = 1U;
	int16_t x319 = -93;
	volatile int8_t x320 = -56;
	int64_t t54 = -468LL;

	t54 = (x317-(x318*(x319-x320)));

	if (t54 != 5LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x321 = -1;
	int8_t x322 = -1;
	static int8_t x323 = INT8_MAX;
	int64_t x324 = INT64_MAX;
	int64_t t55 = -224LL;

	t55 = (x321-(x322*(x323-x324)));

	if (t55 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x326 = INT16_MIN;
	uint16_t x328 = 547U;
	uint32_t t56 = 133437486U;

	t56 = (x325-(x326*(x327-x328)));

	if (t56 != 1682669573U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x337 = -1;
	int8_t x338 = INT8_MIN;
	volatile uint64_t x339 = 404531253075LLU;
	static volatile int64_t x340 = -238975965387LL;
	volatile uint64_t t57 = 70295903898780644LLU;

	t57 = (x337-(x338*(x339-x340)));

	if (t57 != 82368923963135LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x341 = -909;
	int16_t x343 = INT16_MIN;
	static volatile uint8_t x344 = 0U;
	int64_t t58 = -65225268392LL;

	t58 = (x341-(x342*(x343-x344)));

	if (t58 != 137755763LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x346 = INT16_MIN;
	static volatile uint32_t x347 = UINT32_MAX;
	static int32_t x348 = -6991808;
	static int64_t t59 = 1590495410577359LL;

	t59 = (x345-(x346*(x347-x348)));

	if (t59 != -2820703891LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x349 = UINT64_MAX;
	int8_t x350 = INT8_MIN;
	static volatile int64_t x351 = -44019088911812673LL;
	uint16_t x352 = 24632U;
	static volatile uint64_t t60 = 3633346451LLU;

	t60 = (x349-(x350*(x351-x352)));

	if (t60 != 12812300692994376575LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x358 = -3295669550LL;
	static volatile int64_t x359 = -727LL;
	int32_t x360 = INT32_MIN;
	int64_t t61 = -4300000069749858626LL;

	t61 = (x357-(x358*(x359-x360)));

	if (t61 != 7077394071884755520LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x361 = 2869LLU;
	volatile int8_t x363 = -1;
	static uint64_t x364 = UINT64_MAX;
	volatile uint64_t t62 = 21LLU;

	t62 = (x361-(x362*(x363-x364)));

	if (t62 != 2869LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x367 = UINT8_MAX;
	int8_t x368 = -1;
	int64_t t63 = 46678LL;

	t63 = (x365-(x366*(x367-x368)));

	if (t63 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x370 = -1;
	uint8_t x372 = 0U;

	t64 = (x369-(x370*(x371-x372)));

	if (t64 != 1031002544U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x374 = 4075647U;
	int8_t x376 = -1;
	uint32_t t65 = 21U;

	t65 = (x373-(x374*(x375-x376)));

	if (t65 != 4290858881U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x377 = 1867U;
	static int16_t x379 = INT16_MIN;
	static int32_t t66 = -307587120;

	t66 = (x377-(x378*(x379-x380)));

	if (t66 != 266051) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = 3398U;
	int64_t x384 = -1LL;
	int64_t t67 = -138024080727940LL;

	t67 = (x381-(x382*(x383-x384)));

	if (t67 != 111345664LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x385 = -1;
	static uint16_t x386 = 0U;
	volatile int16_t x388 = -2;
	static volatile uint32_t t68 = UINT32_MAX;

	t68 = (x385-(x386*(x387-x388)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x389 = 6;
	static int64_t x390 = -1089LL;
	int16_t x391 = INT16_MIN;
	static volatile int64_t x392 = 20348274338LL;
	int64_t t69 = -2859865LL;

	t69 = (x389-(x390*(x391-x392)));

	if (t69 != -22159306438428LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x402 = -1;
	static int8_t x403 = -15;
	volatile int32_t t70 = 4430;

	t70 = (x401-(x402*(x403-x404)));

	if (t70 != -143) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x405 = UINT16_MAX;
	uint64_t x406 = 1323227189LLU;
	static uint64_t x407 = 537183255324LLU;

	t71 = (x405-(x406*(x407-x408)));

	if (t71 != 8607530029850724096LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x413 = INT32_MIN;
	volatile int64_t x414 = INT64_MIN;
	volatile int8_t x415 = -5;
	uint64_t x416 = 323184199220954LLU;
	volatile uint64_t t72 = 435694LLU;

	t72 = (x413-(x414*(x415-x416)));

	if (t72 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x417 = UINT16_MAX;
	int16_t x418 = INT16_MAX;
	static uint64_t x420 = UINT64_MAX;
	uint64_t t73 = 12950446075269702LLU;

	t73 = (x417-(x418*(x419-x420)));

	if (t73 != 18446744073709420549LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x422 = 10U;
	uint64_t x423 = 439580406950721566LLU;
	static uint8_t x424 = UINT8_MAX;
	uint64_t t74 = 509820LLU;

	t74 = (x421-(x422*(x423-x424)));

	if (t74 != 14050940004202338505LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x433 = INT8_MAX;
	static int64_t x434 = -1847715680781LL;
	static int64_t x436 = 27477LL;
	int64_t t75 = 94769834LL;

	t75 = (x433-(x434*(x435-x436)));

	if (t75 != -50771531476500191LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x437 = 18034212LLU;
	static volatile int8_t x438 = -1;
	int16_t x440 = -1;
	uint64_t t76 = 13751560750847LLU;

	t76 = (x437-(x438*(x439-x440)));

	if (t76 != 18034217LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x441 = INT8_MAX;
	uint64_t x442 = 848690LLU;
	int32_t x443 = -104490948;

	t77 = (x441-(x442*(x443-x444)));

	if (t77 != 88680314025927LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x447 = -1;
	int16_t x448 = INT16_MIN;
	volatile uint64_t t78 = 2LLU;

	t78 = (x445-(x446*(x447-x448)));

	if (t78 != 18446744070589477875LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x457 = INT64_MAX;
	uint16_t x458 = 7U;
	int32_t x459 = 40966985;

	t79 = (x457-(x458*(x459-x460)));

	if (t79 != 9223372036568006905LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x464 = -1;
	volatile int32_t t80 = 549571;

	t80 = (x461-(x462*(x463-x464)));

	if (t80 != -3) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x469 = INT16_MIN;
	int8_t x470 = -15;
	int8_t x471 = INT8_MIN;
	int32_t x472 = -1;
	volatile int32_t t81 = 317414;

	t81 = (x469-(x470*(x471-x472)));

	if (t81 != -34673) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x473 = 1830348U;
	static int8_t x474 = INT8_MIN;
	int16_t x476 = INT16_MIN;

	t82 = (x473-(x474*(x475-x476)));

	if (t82 != 6027980U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x481 = INT16_MAX;
	int16_t x482 = -1;
	uint16_t x483 = UINT16_MAX;
	static int8_t x484 = INT8_MIN;
	int32_t t83 = -2836382;

	t83 = (x481-(x482*(x483-x484)));

	if (t83 != 98430) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x489 = 1;
	uint64_t x490 = 1167LLU;
	static uint32_t x491 = UINT32_MAX;
	volatile int32_t x492 = -1;
	static volatile uint64_t t84 = 740041724583LLU;

	t84 = (x489-(x490*(x491-x492)));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x497 = INT16_MAX;
	static int16_t x498 = INT16_MIN;
	uint32_t x499 = UINT32_MAX;
	int8_t x500 = INT8_MAX;
	uint32_t t85 = 15660U;

	t85 = (x497-(x498*(x499-x500)));

	if (t85 != 4290805759U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x501 = -1LL;
	int8_t x503 = INT8_MAX;
	uint8_t x504 = UINT8_MAX;

	t86 = (x501-(x502*(x503-x504)));

	if (t86 != 785279LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x505 = 214340500539LL;
	volatile int8_t x506 = INT8_MIN;
	volatile int8_t x507 = INT8_MIN;
	volatile uint16_t x508 = UINT16_MAX;

	t87 = (x505-(x506*(x507-x508)));

	if (t87 != 214332095675LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x509 = 105U;
	int16_t x510 = INT16_MAX;
	int32_t x511 = -1;
	uint64_t x512 = 47691693290LLU;
	uint64_t t88 = 337156808530714633LLU;

	t88 = (x509-(x510*(x511-x512)));

	if (t88 != 1562713714066302LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x513 = 1U;
	volatile uint64_t x516 = 708746704LLU;
	volatile uint64_t t89 = 166842870141006LLU;

	t89 = (x513-(x514*(x515-x516)));

	if (t89 != 18446743982989971585LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x521 = UINT32_MAX;
	int8_t x522 = INT8_MIN;
	int16_t x523 = 2192;
	static int8_t x524 = INT8_MAX;
	volatile uint32_t t90 = 14U;

	t90 = (x521-(x522*(x523-x524)));

	if (t90 != 264319U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x526 = INT8_MIN;
	static uint64_t t91 = 1LLU;

	t91 = (x525-(x526*(x527-x528)));

	if (t91 != 18446743441735463297LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x531 = 9416463U;
	int32_t x532 = -122;
	volatile uint32_t t92 = 2U;

	t92 = (x529-(x530*(x531-x532)));

	if (t92 != 1359392521U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x533 = INT64_MIN;
	volatile uint8_t x534 = UINT8_MAX;
	static uint64_t x535 = 536786LLU;
	uint64_t t93 = 1680521109LLU;

	t93 = (x533-(x534*(x535-x536)));

	if (t93 != 9223372036717927763LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x545 = INT8_MIN;
	int8_t x546 = 23;
	int16_t x547 = INT16_MIN;
	static int16_t x548 = 56;
	int32_t t94 = -2373;

	t94 = (x545-(x546*(x547-x548)));

	if (t94 != 754824) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x549 = INT32_MAX;
	static uint32_t x550 = UINT32_MAX;
	int32_t x552 = -1;

	t95 = (x549-(x550*(x551-x552)));

	if (t95 != 2147483903U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x557 = INT64_MIN;
	int8_t x558 = -1;
	static volatile int32_t x559 = 71605894;
	int8_t x560 = INT8_MIN;
	int64_t t96 = -2481433395652523571LL;

	t96 = (x557-(x558*(x559-x560)));

	if (t96 != -9223372036783169786LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x565 = 26U;
	int8_t x566 = 5;
	static uint16_t x567 = 122U;
	uint16_t x568 = UINT16_MAX;
	int32_t t97 = 12;

	t97 = (x565-(x566*(x567-x568)));

	if (t97 != 327091) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x569 = 488LLU;
	volatile uint32_t x570 = UINT32_MAX;
	uint8_t x571 = UINT8_MAX;
	uint8_t x572 = UINT8_MAX;
	static uint64_t t98 = 51LLU;

	t98 = (x569-(x570*(x571-x572)));

	if (t98 != 488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x573 = UINT64_MAX;
	int8_t x574 = INT8_MIN;
	int16_t x576 = -1;
	volatile uint64_t t99 = 320317754805886LLU;

	t99 = (x573-(x574*(x575-x576)));

	if (t99 != 18446744069416611327LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

