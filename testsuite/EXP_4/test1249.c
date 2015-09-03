#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = 104511597176722LLU;
uint64_t x31 = 14982LLU;
static volatile uint64_t t4 = 1736100276LLU;
uint32_t x41 = UINT32_MAX;
volatile int32_t t6 = -35322917;
uint16_t x53 = 33U;
uint16_t x54 = 1932U;
int64_t x55 = INT64_MIN;
uint16_t x58 = 0U;
static int64_t x60 = 140968490784395LL;
int16_t x67 = INT16_MIN;
volatile uint64_t t9 = 3LLU;
static int64_t t10 = 27861676619LL;
int8_t x73 = -10;
int64_t x75 = 138336884829LL;
volatile uint64_t x76 = UINT64_MAX;
int64_t x81 = 1440422LL;
volatile int8_t x84 = INT8_MAX;
int32_t x85 = INT32_MIN;
int32_t x89 = -1;
int32_t x91 = -7202;
int64_t x93 = -1LL;
uint64_t x95 = 7912592321LLU;
int16_t x112 = INT16_MIN;
uint32_t t17 = 16415U;
volatile uint64_t x121 = 30LLU;
static uint64_t x123 = 5468167678346378LLU;
uint16_t x124 = UINT16_MAX;
int64_t t20 = -15509625785603317LL;
int8_t x149 = INT8_MIN;
int16_t x165 = INT16_MAX;
int16_t x166 = INT16_MAX;
static int8_t x167 = INT8_MIN;
int32_t x177 = 3292;
static volatile int32_t t25 = -773;
static uint16_t x195 = 4339U;
int8_t x196 = INT8_MIN;
static volatile int32_t t26 = -1268075;
volatile uint64_t x207 = 31382948512062LLU;
volatile uint16_t x225 = 13611U;
int8_t x234 = INT8_MAX;
uint8_t x254 = UINT8_MAX;
int16_t x255 = -1;
volatile int32_t t33 = 63209923;
static int64_t x286 = INT64_MAX;
static volatile uint8_t x299 = UINT8_MAX;
int8_t x310 = 10;
static int16_t x326 = 33;
static int64_t x327 = INT64_MIN;
static volatile uint64_t x334 = UINT64_MAX;
int64_t x345 = 23076LL;
volatile int8_t x346 = 0;
int32_t x357 = -1;
int8_t x371 = -10;
int64_t x372 = -22LL;
int32_t t48 = 15;
int64_t x374 = 1108818074LL;
int64_t t49 = 30793344794351924LL;
volatile int64_t t51 = 713109976394472LL;
volatile int8_t x395 = -1;
static uint16_t x419 = 7U;
int64_t x420 = -1LL;
int32_t x425 = -1;
volatile uint64_t x438 = 2008932590839719LLU;
volatile int16_t x444 = 59;
uint16_t x446 = 2U;
uint32_t x447 = UINT32_MAX;
volatile uint64_t t62 = 414931076081995LLU;
uint16_t x470 = 3047U;
uint16_t x489 = UINT16_MAX;
volatile int64_t x491 = INT64_MAX;
int8_t x492 = 27;
int8_t x495 = INT8_MIN;
static int32_t x505 = INT32_MAX;
static uint32_t x509 = 4865U;
int32_t x511 = -216;
volatile uint64_t t69 = 27004338753LLU;
static volatile int8_t x524 = -1;
static uint64_t t71 = 61479LLU;
uint32_t x526 = 60256550U;
static volatile int64_t t72 = -209LL;
int8_t x553 = 3;
volatile int32_t t75 = -9938184;
int16_t x575 = -1;
volatile uint32_t t76 = 11U;
int8_t x591 = -5;
static uint16_t x604 = UINT16_MAX;
uint64_t t81 = 170182030659230090LLU;
int16_t x623 = -1;
uint16_t x625 = 12U;
int16_t x648 = 6;
volatile int16_t x669 = -1;
volatile int8_t x672 = -1;
uint64_t x682 = UINT64_MAX;
static int32_t x688 = -851716000;
int32_t x701 = -2019;
int16_t x702 = INT16_MAX;
static int64_t x704 = 8519425846LL;
int32_t t96 = 1427041;
uint64_t x707 = 62172297627454963LLU;
int16_t x725 = INT16_MAX;


void f0(void) {
	static uint64_t x1 = 562614850982715181LLU;
	volatile uint16_t x3 = 6U;
	int8_t x4 = 0;
	uint64_t t0 = 345125133960LLU;

	t0 = (x1+(x2<<(x3==x4)));

	if (t0 != 562719362579891903LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = -14479427LL;
	volatile uint8_t x18 = UINT8_MAX;
	volatile uint16_t x19 = UINT16_MAX;
	int16_t x20 = INT16_MIN;
	volatile int64_t t1 = 17103694061910401LL;

	t1 = (x17+(x18<<(x19==x20)));

	if (t1 != -14479172LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x25 = 95729577217339559LL;
	uint64_t x26 = 2956LLU;
	volatile uint8_t x27 = UINT8_MAX;
	int16_t x28 = INT16_MAX;
	volatile uint64_t t2 = 52368525554LLU;

	t2 = (x25+(x26<<(x27==x28)));

	if (t2 != 95729577217342515LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x29 = UINT32_MAX;
	int64_t x30 = 5281622057LL;
	volatile int32_t x32 = INT32_MIN;
	volatile int64_t t3 = -4082899766LL;

	t3 = (x29+(x30<<(x31==x32)));

	if (t3 != 9576589352LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = 0LL;
	static uint64_t x34 = 138LLU;
	static int64_t x35 = 754105992078027LL;
	uint64_t x36 = UINT64_MAX;

	t4 = (x33+(x34<<(x35==x36)));

	if (t4 != 138LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x42 = INT32_MAX;
	uint8_t x43 = 3U;
	uint32_t x44 = UINT32_MAX;
	static volatile uint32_t t5 = 7562U;

	t5 = (x41+(x42<<(x43==x44)));

	if (t5 != 2147483646U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = 15;
	int8_t x51 = INT8_MIN;
	static int8_t x52 = 17;

	t6 = (x49+(x50<<(x51==x52)));

	if (t6 != -113) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x56 = 8U;
	int32_t t7 = 16019522;

	t7 = (x53+(x54<<(x55==x56)));

	if (t7 != 1965) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x57 = -1LL;
	static uint32_t x59 = 202870U;
	int64_t t8 = -2035419LL;

	t8 = (x57+(x58<<(x59==x60)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x65 = 77LLU;
	int64_t x66 = 0LL;
	int8_t x68 = -1;

	t9 = (x65+(x66<<(x67==x68)));

	if (t9 != 77LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x69 = 3809U;
	int64_t x70 = 496268303065481538LL;
	static uint16_t x71 = 3U;
	volatile uint8_t x72 = UINT8_MAX;

	t10 = (x69+(x70<<(x71==x72)));

	if (t10 != 496268303065485347LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x74 = 0U;
	static volatile int32_t t11 = 0;

	t11 = (x73+(x74<<(x75==x76)));

	if (t11 != -10) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x77 = INT8_MAX;
	uint64_t x78 = 98916310657LLU;
	static int8_t x79 = -6;
	int64_t x80 = -7748566308098LL;
	volatile uint64_t t12 = 341LLU;

	t12 = (x77+(x78<<(x79==x80)));

	if (t12 != 98916310784LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x82 = UINT8_MAX;
	int16_t x83 = -1;
	volatile int64_t t13 = -9LL;

	t13 = (x81+(x82<<(x83==x84)));

	if (t13 != 1440677LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x86 = 66467477588LLU;
	volatile int8_t x87 = -24;
	static volatile int64_t x88 = -1LL;
	static volatile uint64_t t14 = 11LLU;

	t14 = (x85+(x86<<(x87==x88)));

	if (t14 != 64319993940LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x90 = INT8_MAX;
	int64_t x92 = -1LL;
	static int32_t t15 = 119637;

	t15 = (x89+(x90<<(x91==x92)));

	if (t15 != 126) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x94 = 1102779140U;
	static int8_t x96 = INT8_MIN;
	int64_t t16 = 100966485LL;

	t16 = (x93+(x94<<(x95==x96)));

	if (t16 != 1102779139LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x109 = 18595332U;
	uint16_t x110 = 226U;
	volatile int8_t x111 = INT8_MIN;

	t17 = (x109+(x110<<(x111==x112)));

	if (t17 != 18595558U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x113 = 0;
	uint8_t x114 = 3U;
	int16_t x115 = -1;
	int32_t x116 = -1;
	static int32_t t18 = 0;

	t18 = (x113+(x114<<(x115==x116)));

	if (t18 != 6) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x122 = 0U;
	volatile uint64_t t19 = 53LLU;

	t19 = (x121+(x122<<(x123==x124)));

	if (t19 != 30LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x141 = INT16_MIN;
	static int64_t x142 = 996943387413457LL;
	static uint16_t x143 = 248U;
	uint8_t x144 = 3U;

	t20 = (x141+(x142<<(x143==x144)));

	if (t20 != 996943387380689LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x150 = 0LL;
	int16_t x151 = -1;
	uint32_t x152 = 46316U;
	int64_t t21 = 1756016263886091082LL;

	t21 = (x149+(x150<<(x151==x152)));

	if (t21 != -128LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = INT32_MAX;
	int8_t x155 = INT8_MIN;
	static uint8_t x156 = 103U;
	int64_t t22 = -2575297941671LL;

	t22 = (x153+(x154<<(x155==x156)));

	if (t22 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x168 = 27U;
	static int32_t t23 = -2447;

	t23 = (x165+(x166<<(x167==x168)));

	if (t23 != 65534) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x178 = 0U;
	int64_t x179 = INT64_MAX;
	int64_t x180 = INT64_MIN;
	int32_t t24 = 15264519;

	t24 = (x177+(x178<<(x179==x180)));

	if (t24 != 3292) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MAX;
	volatile uint16_t x183 = UINT16_MAX;
	static int8_t x184 = INT8_MAX;

	t25 = (x181+(x182<<(x183==x184)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x193 = -1;
	int32_t x194 = 222112;

	t26 = (x193+(x194<<(x195==x196)));

	if (t26 != 222111) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x205 = INT16_MAX;
	volatile uint16_t x206 = UINT16_MAX;
	static int16_t x208 = INT16_MIN;
	static int32_t t27 = 104;

	t27 = (x205+(x206<<(x207==x208)));

	if (t27 != 98302) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x221 = INT64_MIN;
	uint16_t x222 = 4921U;
	static int32_t x223 = INT32_MIN;
	uint32_t x224 = 4U;
	static int64_t t28 = 71722200919LL;

	t28 = (x221+(x222<<(x223==x224)));

	if (t28 != -9223372036854770887LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x226 = UINT8_MAX;
	int16_t x227 = -1;
	static int64_t x228 = -1LL;
	volatile int32_t t29 = -303;

	t29 = (x225+(x226<<(x227==x228)));

	if (t29 != 14121) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x233 = UINT16_MAX;
	int64_t x235 = -1LL;
	volatile int16_t x236 = 3606;
	volatile int32_t t30 = -48142085;

	t30 = (x233+(x234<<(x235==x236)));

	if (t30 != 65662) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x245 = UINT32_MAX;
	uint64_t x246 = UINT64_MAX;
	uint64_t x247 = 13820LLU;
	int8_t x248 = -1;
	static volatile uint64_t t31 = 8185466983899LLU;

	t31 = (x245+(x246<<(x247==x248)));

	if (t31 != 4294967294LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x253 = 6U;
	int16_t x256 = -12075;
	int32_t t32 = -26307672;

	t32 = (x253+(x254<<(x255==x256)));

	if (t32 != 261) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = 3393;
	uint8_t x263 = 3U;
	int32_t x264 = INT32_MIN;

	t33 = (x261+(x262<<(x263==x264)));

	if (t33 != -2147480255) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x269 = -1032936166;
	volatile int16_t x270 = 409;
	volatile int32_t x271 = INT32_MIN;
	volatile uint64_t x272 = 66583014LLU;
	volatile int32_t t34 = -3673715;

	t34 = (x269+(x270<<(x271==x272)));

	if (t34 != -1032935757) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x273 = -1;
	uint32_t x274 = 252660211U;
	uint16_t x275 = 2629U;
	int8_t x276 = -1;
	uint32_t t35 = 52790U;

	t35 = (x273+(x274<<(x275==x276)));

	if (t35 != 252660210U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x285 = -1;
	static int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MIN;
	static int64_t t36 = 2789628224LL;

	t36 = (x285+(x286<<(x287==x288)));

	if (t36 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x293 = -1;
	int8_t x294 = 7;
	uint64_t x295 = UINT64_MAX;
	int32_t x296 = -202;
	int32_t t37 = -2571517;

	t37 = (x293+(x294<<(x295==x296)));

	if (t37 != 6) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x297 = -482;
	static volatile int32_t x298 = INT32_MAX;
	int32_t x300 = INT32_MIN;
	int32_t t38 = 527;

	t38 = (x297+(x298<<(x299==x300)));

	if (t38 != 2147483165) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x305 = 743472LLU;
	volatile int8_t x306 = INT8_MAX;
	static uint16_t x307 = UINT16_MAX;
	uint64_t x308 = 20968747015LLU;
	volatile uint64_t t39 = 116LLU;

	t39 = (x305+(x306<<(x307==x308)));

	if (t39 != 743599LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x309 = 892974686073783945LLU;
	int64_t x311 = INT64_MIN;
	volatile int32_t x312 = INT32_MIN;
	uint64_t t40 = 191275967LLU;

	t40 = (x309+(x310<<(x311==x312)));

	if (t40 != 892974686073783955LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MAX;
	int8_t x315 = INT8_MIN;
	uint8_t x316 = 40U;
	volatile int32_t t41 = -30;

	t41 = (x313+(x314<<(x315==x316)));

	if (t41 != -2147483521) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x325 = 2U;
	int32_t x328 = 7423462;
	int32_t t42 = 184;

	t42 = (x325+(x326<<(x327==x328)));

	if (t42 != 35) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x333 = INT8_MAX;
	int8_t x335 = INT8_MIN;
	int8_t x336 = -1;
	uint64_t t43 = 233531422425103449LLU;

	t43 = (x333+(x334<<(x335==x336)));

	if (t43 != 126LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x337 = -27;
	uint16_t x338 = 3553U;
	static volatile uint16_t x339 = 24U;
	int64_t x340 = -1LL;
	int32_t t44 = -1765983;

	t44 = (x337+(x338<<(x339==x340)));

	if (t44 != 3526) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x347 = INT8_MIN;
	uint32_t x348 = 6U;
	volatile int64_t t45 = 38261026740LL;

	t45 = (x345+(x346<<(x347==x348)));

	if (t45 != 23076LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x358 = 9420812871105871LL;
	volatile int16_t x359 = -40;
	uint64_t x360 = 65892900585641LLU;
	volatile int64_t t46 = 1693458285121789LL;

	t46 = (x357+(x358<<(x359==x360)));

	if (t46 != 9420812871105870LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x365 = INT16_MIN;
	uint8_t x366 = 45U;
	int64_t x367 = INT64_MAX;
	static uint16_t x368 = 80U;
	int32_t t47 = -252416174;

	t47 = (x365+(x366<<(x367==x368)));

	if (t47 != -32723) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x369 = -1;
	uint16_t x370 = 1682U;

	t48 = (x369+(x370<<(x371==x372)));

	if (t48 != 1681) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x373 = INT8_MIN;
	static volatile uint16_t x375 = 835U;
	int8_t x376 = -26;

	t49 = (x373+(x374<<(x375==x376)));

	if (t49 != 1108817946LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x381 = 10326876U;
	int8_t x382 = 1;
	int32_t x383 = -929549;
	volatile int64_t x384 = -99093067LL;
	uint32_t t50 = 33748594U;

	t50 = (x381+(x382<<(x383==x384)));

	if (t50 != 10326877U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x385 = -1LL;
	volatile int32_t x386 = INT32_MAX;
	uint8_t x387 = 36U;
	int64_t x388 = -2365264994909570606LL;

	t51 = (x385+(x386<<(x387==x388)));

	if (t51 != 2147483646LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x393 = -1;
	uint16_t x394 = 18906U;
	uint32_t x396 = UINT32_MAX;
	int32_t t52 = -4453582;

	t52 = (x393+(x394<<(x395==x396)));

	if (t52 != 37811) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x409 = 8U;
	uint8_t x410 = 11U;
	int32_t x411 = INT32_MIN;
	int32_t x412 = -1;
	volatile uint32_t t53 = 5305936U;

	t53 = (x409+(x410<<(x411==x412)));

	if (t53 != 19U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x417 = INT64_MIN;
	static int32_t x418 = INT32_MAX;
	volatile int64_t t54 = -249LL;

	t54 = (x417+(x418<<(x419==x420)));

	if (t54 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x421 = 1;
	static uint64_t x422 = UINT64_MAX;
	uint64_t x423 = 561027187479202LLU;
	int32_t x424 = -200;
	volatile uint64_t t55 = 719102216LLU;

	t55 = (x421+(x422<<(x423==x424)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x426 = 95177064749LLU;
	volatile int16_t x427 = INT16_MAX;
	int8_t x428 = -1;
	uint64_t t56 = 55894918777672424LLU;

	t56 = (x425+(x426<<(x427==x428)));

	if (t56 != 95177064748LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x433 = UINT32_MAX;
	int64_t x434 = 37125572208LL;
	int64_t x435 = 0LL;
	uint32_t x436 = 950426946U;
	volatile int64_t t57 = -135163685653LL;

	t57 = (x433+(x434<<(x435==x436)));

	if (t57 != 41420539503LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x437 = INT8_MAX;
	static int8_t x439 = 6;
	uint8_t x440 = 16U;
	volatile uint64_t t58 = 5142048LLU;

	t58 = (x437+(x438<<(x439==x440)));

	if (t58 != 2008932590839846LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x441 = 901;
	int64_t x442 = 8826054501445826LL;
	int64_t x443 = -16LL;
	int64_t t59 = -50273906344LL;

	t59 = (x441+(x442<<(x443==x444)));

	if (t59 != 8826054501446727LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x445 = INT16_MAX;
	static uint8_t x448 = 18U;
	int32_t t60 = -5;

	t60 = (x445+(x446<<(x447==x448)));

	if (t60 != 32769) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x449 = -1;
	uint8_t x450 = UINT8_MAX;
	volatile uint32_t x451 = 23U;
	int64_t x452 = -14860094142569448LL;
	static int32_t t61 = 21;

	t61 = (x449+(x450<<(x451==x452)));

	if (t61 != 254) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x461 = -378;
	uint64_t x462 = UINT64_MAX;
	volatile uint32_t x463 = 3302U;
	static int8_t x464 = -1;

	t62 = (x461+(x462<<(x463==x464)));

	if (t62 != 18446744073709551237LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x469 = INT16_MIN;
	static uint64_t x471 = 34LLU;
	int8_t x472 = -18;
	int32_t t63 = -59465354;

	t63 = (x469+(x470<<(x471==x472)));

	if (t63 != -29721) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x477 = -50;
	int32_t x478 = 3265;
	int64_t x479 = INT64_MIN;
	volatile int8_t x480 = -3;
	static volatile int32_t t64 = 4315;

	t64 = (x477+(x478<<(x479==x480)));

	if (t64 != 3215) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x490 = 10306LL;
	int64_t t65 = 1LL;

	t65 = (x489+(x490<<(x491==x492)));

	if (t65 != 75841LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x493 = INT64_MIN;
	int32_t x494 = 612;
	static uint32_t x496 = 4429761U;
	volatile int64_t t66 = -41LL;

	t66 = (x493+(x494<<(x495==x496)));

	if (t66 != -9223372036854775196LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x497 = -1;
	static uint32_t x498 = 1545538743U;
	uint32_t x499 = 122756U;
	int64_t x500 = -1LL;
	static uint32_t t67 = 901359U;

	t67 = (x497+(x498<<(x499==x500)));

	if (t67 != 1545538742U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x506 = 102LL;
	static int8_t x507 = INT8_MIN;
	int16_t x508 = INT16_MIN;
	static volatile int64_t t68 = 168873085532LL;

	t68 = (x505+(x506<<(x507==x508)));

	if (t68 != 2147483749LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x510 = 1930532982172584LLU;
	int8_t x512 = INT8_MIN;

	t69 = (x509+(x510<<(x511==x512)));

	if (t69 != 1930532982177449LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x513 = -72;
	uint16_t x514 = UINT16_MAX;
	static int8_t x515 = INT8_MAX;
	int64_t x516 = INT64_MAX;
	volatile int32_t t70 = -74;

	t70 = (x513+(x514<<(x515==x516)));

	if (t70 != 65463) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x521 = -26;
	uint64_t x522 = 45LLU;
	static int64_t x523 = INT64_MIN;

	t71 = (x521+(x522<<(x523==x524)));

	if (t71 != 19LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x525 = INT64_MIN;
	int8_t x527 = 51;
	static int64_t x528 = -8867697LL;

	t72 = (x525+(x526<<(x527==x528)));

	if (t72 != -9223372036794519258LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x549 = INT16_MIN;
	static int64_t x550 = 17295487530539LL;
	uint16_t x551 = UINT16_MAX;
	static uint8_t x552 = UINT8_MAX;
	int64_t t73 = -31701350088091LL;

	t73 = (x549+(x550<<(x551==x552)));

	if (t73 != 17295487497771LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x554 = INT8_MAX;
	uint8_t x555 = UINT8_MAX;
	volatile int16_t x556 = -11;
	static volatile int32_t t74 = -85112;

	t74 = (x553+(x554<<(x555==x556)));

	if (t74 != 130) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x561 = -50;
	static uint16_t x562 = 17952U;
	volatile int32_t x563 = INT32_MIN;
	int8_t x564 = -1;

	t75 = (x561+(x562<<(x563==x564)));

	if (t75 != 17902) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x573 = INT8_MIN;
	uint32_t x574 = 6316U;
	static int32_t x576 = -1;

	t76 = (x573+(x574<<(x575==x576)));

	if (t76 != 12504U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x585 = 1328;
	static volatile int32_t x586 = 185921713;
	static int64_t x587 = 706919268LL;
	volatile uint32_t x588 = 1U;
	volatile int32_t t77 = 1721;

	t77 = (x585+(x586<<(x587==x588)));

	if (t77 != 185923041) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x589 = INT16_MIN;
	uint16_t x590 = 12530U;
	int64_t x592 = INT64_MIN;
	static volatile int32_t t78 = 2506338;

	t78 = (x589+(x590<<(x591==x592)));

	if (t78 != -20238) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x601 = 89U;
	volatile uint16_t x602 = 6958U;
	static uint64_t x603 = UINT64_MAX;
	int32_t t79 = 5332314;

	t79 = (x601+(x602<<(x603==x604)));

	if (t79 != 7047) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x609 = INT8_MAX;
	uint32_t x610 = 425U;
	uint16_t x611 = UINT16_MAX;
	int16_t x612 = INT16_MIN;
	uint32_t t80 = 749U;

	t80 = (x609+(x610<<(x611==x612)));

	if (t80 != 552U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x617 = 111LLU;
	static int64_t x618 = INT64_MAX;
	uint64_t x619 = 181271393398845290LLU;
	uint64_t x620 = 6656031LLU;

	t81 = (x617+(x618<<(x619==x620)));

	if (t81 != 9223372036854775918LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x621 = 6492U;
	static volatile uint16_t x622 = 694U;
	int32_t x624 = -439;
	volatile int32_t t82 = 125199861;

	t82 = (x621+(x622<<(x623==x624)));

	if (t82 != 7186) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x626 = 10LL;
	uint8_t x627 = 0U;
	int16_t x628 = 0;
	int64_t t83 = 261391307720783514LL;

	t83 = (x625+(x626<<(x627==x628)));

	if (t83 != 32LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x629 = 236;
	uint16_t x630 = 3U;
	volatile int64_t x631 = -108070609LL;
	volatile uint64_t x632 = UINT64_MAX;
	static int32_t t84 = -480560329;

	t84 = (x629+(x630<<(x631==x632)));

	if (t84 != 239) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x645 = UINT16_MAX;
	static uint64_t x646 = 29896707232LLU;
	uint64_t x647 = 172765165578275LLU;
	volatile uint64_t t85 = 78343LLU;

	t85 = (x645+(x646<<(x647==x648)));

	if (t85 != 29896772767LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x649 = INT8_MIN;
	volatile int32_t x650 = INT32_MAX;
	int32_t x651 = -1;
	volatile int32_t x652 = -44094619;
	int32_t t86 = 48360;

	t86 = (x649+(x650<<(x651==x652)));

	if (t86 != 2147483519) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x661 = -51;
	int64_t x662 = INT64_MAX;
	int32_t x663 = 1636211;
	static uint16_t x664 = 7U;
	static int64_t t87 = 4743825917LL;

	t87 = (x661+(x662<<(x663==x664)));

	if (t87 != 9223372036854775756LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x665 = 158845496LLU;
	uint64_t x666 = 412362855LLU;
	int8_t x667 = -1;
	int16_t x668 = -2;
	volatile uint64_t t88 = 5913320LLU;

	t88 = (x665+(x666<<(x667==x668)));

	if (t88 != 571208351LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x670 = 7141U;
	volatile uint64_t x671 = UINT64_MAX;
	static uint32_t t89 = 19648360U;

	t89 = (x669+(x670<<(x671==x672)));

	if (t89 != 14281U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x673 = UINT32_MAX;
	volatile int32_t x674 = 11563;
	int32_t x675 = -444799;
	uint8_t x676 = 2U;
	uint32_t t90 = 104175300U;

	t90 = (x673+(x674<<(x675==x676)));

	if (t90 != 11562U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x677 = INT32_MIN;
	uint16_t x678 = 15U;
	static uint64_t x679 = 15444LLU;
	int32_t x680 = 2613;
	int32_t t91 = -76682908;

	t91 = (x677+(x678<<(x679==x680)));

	if (t91 != -2147483633) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x681 = UINT64_MAX;
	int32_t x683 = INT32_MIN;
	int8_t x684 = 1;
	volatile uint64_t t92 = 1046686LLU;

	t92 = (x681+(x682<<(x683==x684)));

	if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x685 = UINT8_MAX;
	int8_t x686 = INT8_MAX;
	int16_t x687 = -1;
	volatile int32_t t93 = 470752098;

	t93 = (x685+(x686<<(x687==x688)));

	if (t93 != 382) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x689 = 17299067U;
	volatile uint8_t x690 = UINT8_MAX;
	static int64_t x691 = 483066152LL;
	int32_t x692 = INT32_MAX;
	uint32_t t94 = 9U;

	t94 = (x689+(x690<<(x691==x692)));

	if (t94 != 17299322U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x697 = 3;
	uint64_t x698 = UINT64_MAX;
	volatile int16_t x699 = -906;
	static volatile int32_t x700 = 266419785;
	static volatile uint64_t t95 = 0LLU;

	t95 = (x697+(x698<<(x699==x700)));

	if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x703 = UINT64_MAX;

	t96 = (x701+(x702<<(x703==x704)));

	if (t96 != 30748) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x705 = UINT64_MAX;
	volatile int8_t x706 = INT8_MAX;
	int16_t x708 = -1;
	volatile uint64_t t97 = 10228722945696174LLU;

	t97 = (x705+(x706<<(x707==x708)));

	if (t97 != 126LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x726 = 181423506633LLU;
	static uint32_t x727 = 1U;
	volatile uint64_t x728 = UINT64_MAX;
	uint64_t t98 = 884LLU;

	t98 = (x725+(x726<<(x727==x728)));

	if (t98 != 181423539400LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x729 = INT16_MAX;
	static volatile int64_t x730 = 366399880LL;
	int8_t x731 = INT8_MIN;
	uint32_t x732 = 4173U;
	int64_t t99 = -1043849674146973LL;

	t99 = (x729+(x730<<(x731==x732)));

	if (t99 != 366432647LL) { NG(); } else { ; }
	
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

