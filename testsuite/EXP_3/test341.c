#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 20804U;
uint64_t x16 = UINT64_MAX;
uint64_t x25 = UINT64_MAX;
static uint8_t x49 = 18U;
int64_t x57 = -1LL;
uint8_t x58 = 10U;
static volatile int32_t x63 = 149;
uint16_t x64 = UINT16_MAX;
static int16_t x68 = INT16_MIN;
static volatile uint32_t t8 = 42982185U;
uint32_t x70 = UINT32_MAX;
uint16_t x71 = 7406U;
uint32_t t9 = 22592585U;
static int16_t x81 = INT16_MAX;
int8_t x95 = 54;
volatile int8_t x115 = 0;
static int16_t x118 = INT16_MIN;
volatile uint64_t t18 = 24LLU;
int16_t x132 = INT16_MIN;
uint64_t x141 = 822394796877529LLU;
static int8_t x142 = INT8_MIN;
uint32_t x144 = 66174780U;
int16_t x148 = -1;
static int64_t x150 = 568089LL;
volatile int64_t t22 = 124349LL;
uint8_t x155 = UINT8_MAX;
uint32_t x159 = 70U;
uint32_t x163 = UINT32_MAX;
volatile int32_t t29 = 1;
int64_t x189 = -1LL;
int8_t x192 = INT8_MIN;
int8_t x197 = INT8_MAX;
int64_t t32 = 28474492873481658LL;
int64_t x230 = -190LL;
uint32_t x232 = UINT32_MAX;
int32_t x233 = INT32_MIN;
int64_t x234 = -1LL;
volatile int32_t x246 = INT32_MAX;
int8_t x247 = INT8_MIN;
int64_t x269 = INT64_MIN;
static volatile int64_t x270 = 0LL;
static volatile int64_t t40 = 2907907LL;
static int32_t t44 = 37;
static int8_t x294 = INT8_MIN;
int32_t x304 = INT32_MIN;
int8_t x310 = -1;
static int8_t x330 = 5;
uint16_t x354 = UINT16_MAX;
static uint32_t x358 = 1721970336U;
volatile int32_t x371 = INT32_MIN;
uint64_t x372 = UINT64_MAX;
int8_t x391 = INT8_MIN;
volatile uint64_t x393 = 153491621216570LLU;
uint64_t t60 = 124952LLU;
int32_t t62 = -1652;
int16_t x409 = -3943;
uint64_t x410 = UINT64_MAX;
volatile int16_t x416 = INT16_MIN;
uint16_t x432 = 103U;
volatile uint64_t t67 = 90216209LLU;
int16_t x437 = INT16_MIN;
static uint32_t x443 = 1819U;
int8_t x446 = INT8_MIN;
int64_t x454 = 6431310582LL;
int16_t x457 = INT16_MIN;
static int16_t x459 = 690;
uint8_t x497 = 26U;
int32_t x498 = -1;
int16_t x503 = -367;
int8_t x529 = -1;
static int32_t t79 = -2081546;
uint32_t x545 = 5358415U;
static uint32_t x550 = UINT32_MAX;
volatile uint32_t x555 = UINT32_MAX;
int8_t x556 = -1;
static uint32_t x567 = 430283U;
uint8_t x574 = 123U;
uint64_t x576 = 6052828078007175696LLU;
int8_t x577 = -1;
int64_t t88 = 88158LL;
uint16_t x597 = 1577U;
int64_t x599 = INT64_MAX;
uint8_t x600 = 0U;
int16_t x601 = INT16_MIN;
int32_t t90 = -317985012;
int8_t x608 = INT8_MIN;
int32_t t92 = -62017;
volatile int32_t t93 = -10;
uint8_t x634 = UINT8_MAX;
volatile uint64_t t96 = 131749028344LLU;
uint64_t x637 = 26934864502LLU;
uint8_t x652 = 82U;


void f0(void) {
	volatile uint8_t x5 = 0U;
	uint32_t x6 = UINT32_MAX;
	volatile int16_t x7 = -1;
	uint16_t x8 = 32U;

	t0 = ((x5+x6)*(x7*x8));

	if (t0 != 32U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = INT64_MAX;
	static int8_t x14 = -1;
	int64_t x15 = -1LL;
	static volatile uint64_t t1 = 24LLU;

	t1 = ((x13+x14)*(x15*x16));

	if (t1 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = INT32_MIN;
	uint32_t x22 = 2156U;
	uint8_t x23 = 111U;
	static volatile int16_t x24 = INT16_MIN;
	uint32_t t2 = 3U;

	t2 = ((x21+x22)*(x23*x24));

	if (t2 != 748027904U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x26 = 7;
	volatile int8_t x27 = -1;
	volatile int64_t x28 = -127265404LL;
	uint64_t t3 = 33LLU;

	t3 = ((x25+x26)*(x27*x28));

	if (t3 != 763592424LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x50 = -1LL;
	volatile uint16_t x51 = 20U;
	int32_t x52 = 5345382;
	int64_t t4 = 3408906249639LL;

	t4 = ((x49+x50)*(x51*x52));

	if (t4 != 1817429880LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x53 = 221743226;
	int64_t x54 = INT64_MIN;
	volatile uint64_t x55 = 106245LLU;
	volatile int64_t x56 = 521590447137LL;
	uint64_t t5 = 17747518LLU;

	t5 = ((x53+x54)*(x55*x56));

	if (t5 != 9114036257560278178LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x59 = UINT16_MAX;
	int8_t x60 = INT8_MIN;
	int64_t t6 = -132686318LL;

	t6 = ((x57+x58)*(x59*x60));

	if (t6 != -75496320LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x61 = 530698;
	static uint32_t x62 = UINT32_MAX;
	volatile uint32_t t7 = 24618573U;

	t7 = ((x61+x62)*(x63*x64));

	if (t7 != 2374397379U) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x65 = 13;
	volatile uint32_t x66 = UINT32_MAX;
	volatile int8_t x67 = INT8_MIN;

	t8 = ((x65+x66)*(x67*x68));

	if (t8 != 50331648U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x69 = UINT8_MAX;
	uint16_t x72 = 2506U;

	t9 = ((x69+x70)*(x71*x72));

	if (t9 != 419129448U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x73 = INT32_MAX;
	int64_t x74 = INT64_MIN;
	uint64_t x75 = 5LLU;
	int8_t x76 = -3;
	volatile uint64_t t10 = 734611128179713173LLU;

	t10 = ((x73+x74)*(x75*x76));

	if (t10 != 9223372004642521103LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x77 = 1U;
	int16_t x78 = INT16_MIN;
	volatile int64_t x79 = -251146971757LL;
	static volatile uint16_t x80 = 46U;
	int64_t t11 = -2984040379915412362LL;

	t11 = ((x77+x78)*(x79*x80));

	if (t11 != 378549309883834474LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x82 = 718436U;
	static int16_t x83 = 3959;
	static int16_t x84 = -11973;
	static uint32_t t12 = 0U;

	t12 = ((x81+x82)*(x83*x84));

	if (t12 != 1720069415U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x89 = UINT32_MAX;
	volatile int16_t x90 = INT16_MAX;
	int8_t x91 = 1;
	volatile int16_t x92 = -1;
	volatile uint32_t t13 = 1U;

	t13 = ((x89+x90)*(x91*x92));

	if (t13 != 4294934530U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x93 = -648494097LL;
	volatile uint16_t x94 = UINT16_MAX;
	volatile uint8_t x96 = 1U;
	static int64_t t14 = -42803777838325LL;

	t14 = ((x93+x94)*(x95*x96));

	if (t14 != -35015142348LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x97 = 15220209209LLU;
	volatile uint8_t x98 = UINT8_MAX;
	int32_t x99 = -1;
	int64_t x100 = INT64_MAX;
	volatile uint64_t t15 = 4126048945094454422LLU;

	t15 = ((x97+x98)*(x99*x100));

	if (t15 != 15220209464LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x105 = -1LL;
	int8_t x106 = 34;
	static volatile uint16_t x107 = 13054U;
	uint32_t x108 = 108U;
	int64_t t16 = -466950142503617536LL;

	t16 = ((x105+x106)*(x107*x108));

	if (t16 != 46524456LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x113 = INT8_MIN;
	static int64_t x114 = -89945474002992LL;
	int16_t x116 = INT16_MAX;
	volatile int64_t t17 = 186311672661679757LL;

	t17 = ((x113+x114)*(x115*x116));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x117 = 691LLU;
	uint64_t x119 = 1384174313LLU;
	int64_t x120 = INT64_MIN;

	t18 = ((x117+x118)*(x119*x120));

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x129 = 819082199U;
	int16_t x130 = INT16_MAX;
	volatile uint16_t x131 = UINT16_MAX;
	static volatile uint32_t t19 = 6665003U;

	t19 = ((x129+x130)*(x131*x132));

	if (t19 != 1508573184U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x143 = UINT64_MAX;
	volatile uint64_t t20 = 2144881190441933093LLU;

	t20 = ((x141+x142)*(x143*x144));

	if (t20 != 14547005010188672036LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x145 = 64U;
	uint16_t x146 = 7U;
	int16_t x147 = INT16_MIN;
	volatile int32_t t21 = 34414;

	t21 = ((x145+x146)*(x147*x148));

	if (t21 != 2326528) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x149 = -1;
	static int64_t x151 = -1LL;
	static int32_t x152 = 3478;

	t22 = ((x149+x150)*(x151*x152));

	if (t22 != -1975810064LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x153 = 742468U;
	int64_t x154 = -1LL;
	int8_t x156 = INT8_MIN;
	static int64_t t23 = -22LL;

	t23 = ((x153+x154)*(x155*x156));

	if (t23 != -24234122880LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x157 = 1U;
	static int16_t x158 = INT16_MIN;
	int32_t x160 = INT32_MAX;
	volatile uint32_t t24 = 2U;

	t24 = ((x157+x158)*(x159*x160));

	if (t24 != 2293690U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x161 = 2;
	uint8_t x162 = 0U;
	uint16_t x164 = UINT16_MAX;
	static uint32_t t25 = 9U;

	t25 = ((x161+x162)*(x163*x164));

	if (t25 != 4294836226U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x169 = -1LL;
	static volatile uint64_t x170 = 35749919490911989LLU;
	int8_t x171 = INT8_MIN;
	uint64_t x172 = 2130944885678016494LLU;
	volatile uint64_t t26 = 1LLU;

	t26 = ((x169+x170)*(x171*x172));

	if (t26 != 1624170689107235840LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x173 = INT16_MIN;
	uint64_t x174 = 2040919284676LLU;
	static volatile int8_t x175 = INT8_MIN;
	volatile uint16_t x176 = UINT16_MAX;
	volatile uint64_t t27 = 35580234900LLU;

	t27 = ((x173+x174)*(x175*x176));

	if (t27 != 1326533747464331776LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x177 = INT32_MIN;
	static int32_t x178 = INT32_MAX;
	int64_t x179 = -130076252LL;
	static int8_t x180 = INT8_MIN;
	volatile int64_t t28 = 2721641LL;

	t28 = ((x177+x178)*(x179*x180));

	if (t28 != -16649760256LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x185 = INT8_MIN;
	uint8_t x186 = 125U;
	static int8_t x187 = -1;
	int8_t x188 = INT8_MAX;

	t29 = ((x185+x186)*(x187*x188));

	if (t29 != 381) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x190 = UINT16_MAX;
	int8_t x191 = 18;
	volatile int64_t t30 = 31136398153961569LL;

	t30 = ((x189+x190)*(x191*x192));

	if (t30 != -150990336LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MAX;
	static int32_t x200 = -1;
	static int32_t t31 = INT32_MAX;

	t31 = ((x197+x198)*(x199*x200));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x213 = INT32_MIN;
	uint8_t x214 = 6U;
	int16_t x215 = 164;
	int64_t x216 = -1LL;

	t32 = ((x213+x214)*(x215*x216));

	if (t32 != 352187317288LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x217 = 6415601630526915609LLU;
	uint64_t x218 = 41028680LLU;
	uint32_t x219 = 71U;
	int8_t x220 = INT8_MIN;
	volatile uint64_t t33 = 125594568772LLU;

	t33 = ((x217+x218)*(x219*x220));

	if (t33 != 6497641287147752576LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x221 = 1;
	int32_t x222 = -1;
	uint16_t x223 = 21U;
	volatile uint64_t x224 = UINT64_MAX;
	uint64_t t34 = 615959LLU;

	t34 = ((x221+x222)*(x223*x224));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x229 = -441;
	uint32_t x231 = 377U;
	int64_t t35 = 7402405447LL;

	t35 = ((x229+x230)*(x231*x232));

	if (t35 != -2710124125889LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x235 = -29;
	volatile int16_t x236 = INT16_MIN;
	int64_t t36 = 2955496243LL;

	t36 = ((x233+x234)*(x235*x236));

	if (t36 != -2040693582102528LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x237 = -1;
	int16_t x238 = INT16_MIN;
	uint64_t x239 = UINT64_MAX;
	volatile int64_t x240 = 1LL;
	volatile uint64_t t37 = 1811905280243LLU;

	t37 = ((x237+x238)*(x239*x240));

	if (t37 != 32769LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x245 = INT32_MIN;
	static uint16_t x248 = 28324U;
	int32_t t38 = -641224;

	t38 = ((x245+x246)*(x247*x248));

	if (t38 != 3625472) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x257 = 18U;
	int64_t x258 = -35275LL;
	volatile uint8_t x259 = UINT8_MAX;
	static uint16_t x260 = 1541U;
	int64_t t39 = 4218584837121LL;

	t39 = ((x257+x258)*(x259*x260));

	if (t39 != -13854414435LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x271 = 0;
	int16_t x272 = INT16_MIN;

	t40 = ((x269+x270)*(x271*x272));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x273 = 13618U;
	static int16_t x274 = -118;
	uint64_t x275 = 15869042886555059LLU;
	int16_t x276 = INT16_MAX;
	volatile uint64_t t41 = 1099986836135096LLU;

	t41 = ((x273+x274)*(x275*x276));

	if (t41 != 95007113364911244LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x281 = UINT16_MAX;
	static uint64_t x282 = 69428121277328249LLU;
	int16_t x283 = INT16_MAX;
	volatile int8_t x284 = INT8_MIN;
	uint64_t t42 = 66383830613LLU;

	t42 = ((x281+x282)*(x283*x284));

	if (t42 != 6541960844630408192LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x285 = 15326LL;
	static int16_t x286 = INT16_MIN;
	static int8_t x287 = INT8_MIN;
	volatile uint32_t x288 = UINT32_MAX;
	static int64_t t43 = 119519402010LL;

	t43 = ((x285+x286)*(x287*x288));

	if (t43 != -2232576LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x289 = 38U;
	static int16_t x290 = INT16_MIN;
	int8_t x291 = -1;
	int8_t x292 = INT8_MIN;

	t44 = ((x289+x290)*(x291*x292));

	if (t44 != -4189440) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x293 = UINT64_MAX;
	volatile uint64_t x295 = 268728590880789LLU;
	int8_t x296 = INT8_MIN;
	static volatile uint64_t t45 = 92077LLU;

	t45 = ((x293+x294)*(x295*x296));

	if (t45 != 4437246492623587968LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x297 = INT16_MIN;
	volatile uint32_t x298 = UINT32_MAX;
	volatile int16_t x299 = INT16_MAX;
	int16_t x300 = INT16_MAX;
	volatile uint32_t t46 = 15873089U;

	t46 = ((x297+x298)*(x299*x300));

	if (t46 != 1073774591U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x301 = 7514255079LLU;
	static uint32_t x302 = UINT32_MAX;
	int64_t x303 = 350LL;
	static volatile uint64_t t47 = 2277244698121524LLU;

	t47 = ((x301+x302)*(x303*x304));

	if (t47 != 15291463211744755712LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x305 = -1LL;
	uint64_t x306 = 2096715445LLU;
	uint64_t x307 = 11254LLU;
	volatile int32_t x308 = -1;
	uint64_t t48 = 4692259792579LLU;

	t48 = ((x305+x306)*(x307*x308));

	if (t48 != 18446720477273944840LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x309 = INT8_MIN;
	int16_t x311 = 8;
	int16_t x312 = 0;
	volatile int32_t t49 = -1378;

	t49 = ((x309+x310)*(x311*x312));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x317 = 59182596U;
	int64_t x318 = -1879539054LL;
	static volatile uint32_t x319 = 2441U;
	uint32_t x320 = 2010319U;
	int64_t t50 = 239978969878LL;

	t50 = ((x317+x318)*(x319*x320));

	if (t50 != -1114461148269741414LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x329 = -12;
	volatile int8_t x331 = 1;
	uint32_t x332 = 100614U;
	volatile uint32_t t51 = 55U;

	t51 = ((x329+x330)*(x331*x332));

	if (t51 != 4294262998U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x337 = 3;
	int16_t x338 = INT16_MIN;
	uint64_t x339 = 2153240965135605264LLU;
	static int8_t x340 = 1;
	static volatile uint64_t t52 = 222602751236LLU;

	t52 = ((x337+x338)*(x339*x340));

	if (t52 != 7855859270928456240LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x349 = 3425957121LLU;
	int64_t x350 = INT64_MIN;
	int16_t x351 = INT16_MIN;
	static int16_t x352 = 0;
	static uint64_t t53 = 1407784662830237LLU;

	t53 = ((x349+x350)*(x351*x352));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x353 = UINT16_MAX;
	int64_t x355 = 9877618LL;
	int32_t x356 = -1;
	int64_t t54 = -1252343949710LL;

	t54 = ((x353+x354)*(x355*x356));

	if (t54 != -1294659391260LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x357 = INT16_MIN;
	volatile uint8_t x359 = UINT8_MAX;
	int32_t x360 = -7;
	volatile uint32_t t55 = 25U;

	t55 = ((x357+x358)*(x359*x360));

	if (t55 != 1538025056U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x369 = INT16_MAX;
	volatile int64_t x370 = 106611246539LL;
	static volatile uint64_t t56 = 231425419LLU;

	t56 = ((x369+x370)*(x371*x372));

	if (t56 != 7585050117481168896LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x373 = 58;
	int64_t x374 = -375LL;
	int16_t x375 = 1020;
	uint8_t x376 = 6U;
	volatile int64_t t57 = 4080452154217774LL;

	t57 = ((x373+x374)*(x375*x376));

	if (t57 != -1940040LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MIN;
	static uint32_t x387 = 3U;
	volatile int32_t x388 = INT32_MIN;
	uint32_t t58 = 29U;

	t58 = ((x385+x386)*(x387*x388));

	if (t58 != 2147483648U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x389 = -1;
	uint64_t x390 = UINT64_MAX;
	volatile uint64_t x392 = 5541LLU;
	uint64_t t59 = 50LLU;

	t59 = ((x389+x390)*(x391*x392));

	if (t59 != 1418496LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x394 = 93;
	uint64_t x395 = UINT64_MAX;
	int16_t x396 = 1;

	t60 = ((x393+x394)*(x395*x396));

	if (t60 != 18446590582088334953LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x397 = -3149LL;
	int32_t x398 = 23333633;
	uint32_t x399 = 40853047U;
	volatile int8_t x400 = INT8_MAX;
	static volatile int64_t t61 = 1825LL;

	t61 = ((x397+x398)*(x399*x400));

	if (t61 != 20842746862011732LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x405 = 22U;
	uint8_t x406 = UINT8_MAX;
	static int8_t x407 = INT8_MAX;
	int8_t x408 = -24;

	t62 = ((x405+x406)*(x407*x408));

	if (t62 != -844296) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x411 = -139;
	uint64_t x412 = 284540886111LLU;
	uint64_t t63 = 1LLU;

	t63 = ((x409+x410)*(x411*x412));

	if (t63 != 155989866420227976LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x413 = 0U;
	uint16_t x414 = UINT16_MAX;
	static volatile int8_t x415 = -1;
	volatile int32_t t64 = 195;

	t64 = ((x413+x414)*(x415*x416));

	if (t64 != 2147450880) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x417 = -1;
	int64_t x418 = -1LL;
	uint8_t x419 = 2U;
	int32_t x420 = -1;
	static volatile int64_t t65 = -3LL;

	t65 = ((x417+x418)*(x419*x420));

	if (t65 != 4LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x429 = -20;
	volatile uint64_t x430 = 49808034LLU;
	uint16_t x431 = 12U;
	uint64_t t66 = 3836654127LLU;

	t66 = ((x429+x430)*(x431*x432));

	if (t66 != 61562705304LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x433 = 6631U;
	static uint8_t x434 = 3U;
	uint64_t x435 = UINT64_MAX;
	int32_t x436 = INT32_MIN;

	t67 = ((x433+x434)*(x435*x436));

	if (t67 != 14246406520832LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x438 = 7;
	static volatile int16_t x439 = INT16_MIN;
	uint64_t x440 = UINT64_MAX;
	uint64_t t68 = 3LLU;

	t68 = ((x437+x438)*(x439*x440));

	if (t68 != 18446744072636039168LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x441 = -1;
	int8_t x442 = 7;
	uint8_t x444 = 24U;
	uint32_t t69 = 3830U;

	t69 = ((x441+x442)*(x443*x444));

	if (t69 != 261936U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x445 = 32443351480259041LL;
	uint8_t x447 = 112U;
	volatile uint8_t x448 = 0U;
	int64_t t70 = 102052568207LL;

	t70 = ((x445+x446)*(x447*x448));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x453 = INT16_MIN;
	static int8_t x455 = 0;
	static int16_t x456 = -788;
	int64_t t71 = -245672LL;

	t71 = ((x453+x454)*(x455*x456));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x458 = UINT64_MAX;
	volatile int16_t x460 = INT16_MIN;
	volatile uint64_t t72 = 451673281LLU;

	t72 = ((x457+x458)*(x459*x460));

	if (t72 != 740904468480LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x473 = 7950LLU;
	static int32_t x474 = -356964;
	volatile uint64_t x475 = 52148967090541559LLU;
	uint16_t x476 = 200U;
	volatile uint64_t t73 = 67LLU;

	t73 = ((x473+x474)*(x475*x476));

	if (t73 != 7428269672614474928LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x499 = UINT64_MAX;
	int8_t x500 = -1;
	uint64_t t74 = 7LLU;

	t74 = ((x497+x498)*(x499*x500));

	if (t74 != 25LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x501 = 1009LLU;
	int32_t x502 = INT32_MIN;
	volatile uint32_t x504 = 296969690U;
	volatile uint64_t t75 = 6343504972250313460LLU;

	t75 = ((x501+x502)*(x503*x504));

	if (t75 != 12688755855063194842LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x517 = -1;
	int64_t x518 = 522740904LL;
	static uint32_t x519 = UINT32_MAX;
	uint32_t x520 = 26868590U;
	static volatile int64_t t76 = 97820185374LL;

	t76 = ((x517+x518)*(x519*x520));

	if (t76 != 2231109771667571518LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x521 = -6;
	static volatile uint64_t x522 = UINT64_MAX;
	int16_t x523 = INT16_MIN;
	uint32_t x524 = UINT32_MAX;
	volatile uint64_t t77 = 4098058229882531LLU;

	t77 = ((x521+x522)*(x523*x524));

	if (t77 != 18446744073709322240LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x525 = -14;
	volatile uint8_t x526 = UINT8_MAX;
	int8_t x527 = -6;
	int16_t x528 = -1226;
	int32_t t78 = -7045;

	t78 = ((x525+x526)*(x527*x528));

	if (t78 != 1772796) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x530 = 5U;
	int8_t x531 = INT8_MIN;
	volatile uint8_t x532 = 14U;

	t79 = ((x529+x530)*(x531*x532));

	if (t79 != -7168) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x537 = UINT64_MAX;
	volatile int64_t x538 = INT64_MIN;
	int32_t x539 = -1867;
	uint64_t x540 = 243638206411LLU;
	static volatile uint64_t t80 = 4008704769541LLU;

	t80 = ((x537+x538)*(x539*x540));

	if (t80 != 9223826909386145145LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x546 = 2026U;
	static uint32_t x547 = UINT32_MAX;
	int16_t x548 = -1;
	static uint32_t t81 = 787376388U;

	t81 = ((x545+x546)*(x547*x548));

	if (t81 != 5360441U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x549 = INT16_MAX;
	int8_t x551 = INT8_MAX;
	volatile uint32_t x552 = 457543U;
	uint32_t t82 = 2U;

	t82 = ((x549+x550)*(x551*x552));

	if (t82 != 1294937998U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x553 = UINT32_MAX;
	static int64_t x554 = INT64_MIN;
	volatile int64_t t83 = 1884511320104355494LL;

	t83 = ((x553+x554)*(x555*x556));

	if (t83 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x561 = 439U;
	int32_t x562 = INT32_MIN;
	static uint32_t x563 = 24645U;
	volatile uint16_t x564 = UINT16_MAX;
	uint32_t t84 = 3749256U;

	t84 = ((x561+x562)*(x563*x564));

	if (t84 != 2511202733U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x565 = UINT16_MAX;
	volatile int8_t x566 = INT8_MAX;
	volatile int8_t x568 = INT8_MIN;
	uint32_t t85 = 646528U;

	t85 = ((x565+x566)*(x567*x568));

	if (t85 != 4242410240U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x573 = INT64_MIN;
	int16_t x575 = 1;
	static volatile uint64_t t86 = 478152920406543332LLU;

	t86 = ((x573+x574)*(x575*x576));

	if (t86 != 6628090646500545968LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x578 = -289LL;
	uint16_t x579 = 53U;
	int8_t x580 = 0;
	static int64_t t87 = 23031741443776879LL;

	t87 = ((x577+x578)*(x579*x580));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x589 = 28U;
	int16_t x590 = 1;
	static volatile int64_t x591 = -1LL;
	int32_t x592 = -28000;

	t88 = ((x589+x590)*(x591*x592));

	if (t88 != 812000LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x598 = -22;
	int64_t t89 = 66581LL;

	t89 = ((x597+x598)*(x599*x600));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x602 = -10;
	static volatile uint8_t x603 = UINT8_MAX;
	uint8_t x604 = 1U;

	t90 = ((x601+x602)*(x603*x604));

	if (t90 != -8358390) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x605 = -1LL;
	int8_t x606 = -1;
	volatile int64_t x607 = 0LL;
	int64_t t91 = -27291694999646382LL;

	t91 = ((x605+x606)*(x607*x608));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x609 = 10;
	int8_t x610 = INT8_MIN;
	volatile int8_t x611 = 8;
	int16_t x612 = 47;

	t92 = ((x609+x610)*(x611*x612));

	if (t92 != -44368) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x621 = INT8_MAX;
	uint8_t x622 = 1U;
	uint16_t x623 = 21U;
	int8_t x624 = INT8_MAX;

	t93 = ((x621+x622)*(x623*x624));

	if (t93 != 341376) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x625 = 11U;
	volatile int8_t x626 = -1;
	int8_t x627 = -1;
	volatile int64_t x628 = 708203LL;
	volatile int64_t t94 = 1LL;

	t94 = ((x625+x626)*(x627*x628));

	if (t94 != -7082030LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x629 = INT64_MIN;
	uint64_t x630 = 830341LLU;
	volatile uint32_t x631 = UINT32_MAX;
	int64_t x632 = 3651028LL;
	static volatile uint64_t t95 = 57LLU;

	t95 = ((x629+x630)*(x631*x632));

	if (t95 != 15660722767968988380LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x633 = INT64_MIN;
	volatile uint64_t x635 = 19008098LLU;
	int8_t x636 = -14;

	t96 = ((x633+x634)*(x635*x636));

	if (t96 != 18446744005850641756LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x638 = -1;
	int8_t x639 = INT8_MIN;
	volatile uint32_t x640 = UINT32_MAX;
	volatile uint64_t t97 = 120391078254LLU;

	t97 = ((x637+x638)*(x639*x640));

	if (t97 != 3447662656128LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x645 = 1789939985LLU;
	uint8_t x646 = 1U;
	static int32_t x647 = 3;
	int8_t x648 = -1;
	static volatile uint64_t t98 = 92722231515LLU;

	t98 = ((x645+x646)*(x647*x648));

	if (t98 != 18446744068339731658LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x649 = INT32_MIN;
	int64_t x650 = -1LL;
	uint8_t x651 = 99U;
	int64_t t99 = 392012LL;

	t99 = ((x649+x650)*(x651*x652));

	if (t99 != -17433272262582LL) { NG(); } else { ; }
	
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

