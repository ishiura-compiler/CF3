#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x20 = INT32_MAX;
uint64_t x31 = 546LLU;
uint64_t x46 = 1564671983LLU;
static uint32_t x48 = UINT32_MAX;
static volatile int32_t t7 = -13;
static volatile int16_t x65 = 104;
static int64_t x69 = INT64_MIN;
int32_t x71 = 900;
volatile uint64_t t11 = 1971LLU;
int8_t x87 = 37;
int32_t x88 = INT32_MAX;
static volatile uint64_t t13 = 1279250641LLU;
uint16_t x90 = UINT16_MAX;
volatile int32_t x92 = INT32_MIN;
volatile int16_t x103 = 23;
volatile uint16_t x105 = UINT16_MAX;
int32_t x107 = INT32_MAX;
volatile int8_t x118 = INT8_MIN;
int64_t x119 = INT64_MIN;
int16_t x125 = -1;
int32_t t20 = 15418;
int16_t x130 = INT16_MIN;
int8_t x132 = -12;
volatile int32_t x138 = INT32_MIN;
int16_t x140 = 24;
static int16_t x159 = -2;
uint32_t x162 = 5U;
int32_t x168 = -10607928;
uint8_t x170 = 11U;
volatile int32_t x178 = -1;
int32_t x183 = -1;
int8_t x189 = 4;
static int8_t x190 = INT8_MIN;
volatile uint8_t x195 = UINT8_MAX;
uint8_t x201 = 0U;
uint8_t x217 = 50U;
static uint64_t x218 = 2158709739621LLU;
uint64_t t36 = 66107641LLU;
static uint16_t x237 = 3063U;
uint64_t t40 = 1582036900LLU;
volatile uint16_t x249 = 1181U;
int64_t x261 = -1LL;
volatile int16_t x262 = 15275;
int32_t x264 = -1;
int16_t x278 = 0;
volatile uint32_t x279 = 28704567U;
int8_t x280 = INT8_MIN;
volatile uint32_t t45 = 1312726U;
uint64_t x306 = 5153428577LLU;
static uint64_t t50 = 504LLU;
int16_t x312 = INT16_MIN;
static int32_t x315 = 6515450;
int32_t x324 = -716;
int64_t x332 = 230687LL;
volatile int64_t t55 = 18LL;
uint64_t t58 = 30111973401LLU;
volatile int64_t t60 = -16193271789613506LL;
int16_t x389 = INT16_MAX;
static int8_t x395 = 9;
volatile int64_t x396 = INT64_MIN;
int8_t x398 = INT8_MIN;
int64_t t68 = -5778172219445LL;
volatile int64_t x410 = INT64_MIN;
int32_t x430 = INT32_MIN;
uint32_t x431 = 220993U;
volatile int64_t x432 = 14508LL;
uint64_t t74 = 98569604184954LLU;
int8_t x450 = -3;
static volatile uint8_t x458 = UINT8_MAX;
int16_t x462 = INT16_MAX;
int64_t x465 = 5916716761498293LL;
static int64_t x468 = INT64_MAX;
volatile int8_t x470 = -1;
int64_t x477 = -10822083148082824LL;
int64_t x491 = INT64_MIN;
int32_t x494 = INT32_MIN;
int16_t x505 = -2;
int32_t t86 = -3;
uint32_t x533 = UINT32_MAX;
uint8_t x542 = 11U;
int32_t x544 = INT32_MAX;
uint16_t x549 = 498U;
uint64_t t90 = 19661122056356038LLU;
int8_t x563 = 50;
static int64_t x564 = -58487024LL;
int32_t x577 = INT32_MIN;
volatile int64_t x578 = 1379161358LL;
volatile int64_t x580 = -5LL;
int64_t t94 = 23647176120022LL;
static uint16_t x586 = 97U;
volatile uint64_t x587 = UINT64_MAX;
static uint64_t t98 = 326242901962963LLU;
volatile int8_t x602 = INT8_MIN;


void f0(void) {
	int8_t x17 = 1;
	uint16_t x18 = 0U;
	uint32_t x19 = 1381U;
	uint32_t t0 = 1120495648U;

	t0 = ((x17+x18)%(x19%x20));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x25 = INT16_MAX;
	int16_t x26 = INT16_MIN;
	uint32_t x27 = 14U;
	int8_t x28 = 3;
	volatile uint32_t t1 = 1U;

	t1 = ((x25+x26)%(x27%x28));

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x29 = INT16_MAX;
	volatile uint64_t x30 = 8317915638131088LLU;
	volatile int32_t x32 = -1;
	uint64_t t2 = 497650340LLU;

	t2 = ((x29+x30)%(x31%x32));

	if (t2 != 451LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x33 = UINT64_MAX;
	int16_t x34 = INT16_MIN;
	int8_t x35 = -1;
	static uint16_t x36 = UINT16_MAX;
	static volatile uint64_t t3 = 55484617677559197LLU;

	t3 = ((x33+x34)%(x35%x36));

	if (t3 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x37 = UINT32_MAX;
	uint64_t x38 = 1318150LLU;
	volatile uint8_t x39 = 26U;
	static volatile int32_t x40 = 103030720;
	uint64_t t4 = 3061654LLU;

	t4 = ((x37+x38)%(x39%x40));

	if (t4 != 23LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x45 = INT8_MIN;
	uint32_t x47 = 2U;
	volatile uint64_t t5 = 1195431LLU;

	t5 = ((x45+x46)%(x47%x48));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x53 = 1U;
	int32_t x54 = -988944151;
	static volatile int64_t x55 = INT64_MAX;
	uint16_t x56 = 19873U;
	int64_t t6 = 249469LL;

	t6 = ((x53+x54)%(x55%x56));

	if (t6 != -873LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x57 = 16368U;
	volatile int16_t x58 = INT16_MIN;
	int8_t x59 = -6;
	uint16_t x60 = 31161U;

	t7 = ((x57+x58)%(x59%x60));

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x61 = 23286U;
	uint64_t x62 = UINT64_MAX;
	volatile int8_t x63 = 15;
	int8_t x64 = -18;
	uint64_t t8 = 111551860642940728LLU;

	t8 = ((x61+x62)%(x63%x64));

	if (t8 != 5LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x66 = 1779;
	static uint8_t x67 = UINT8_MAX;
	uint32_t x68 = 65U;
	volatile uint32_t t9 = 5561086U;

	t9 = ((x65+x66)%(x67%x68));

	if (t9 != 23U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x70 = 17369LLU;
	int64_t x72 = INT64_MIN;
	uint64_t t10 = 170297LLU;

	t10 = ((x69+x70)%(x71%x72));

	if (t10 != 277LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x73 = INT16_MAX;
	uint64_t x74 = 2410LLU;
	int64_t x75 = INT64_MIN;
	int8_t x76 = 38;

	t11 = ((x73+x74)%(x75%x76));

	if (t11 != 35177LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x81 = -1;
	int8_t x82 = -29;
	int32_t x83 = INT32_MAX;
	uint64_t x84 = 52713587956428LLU;
	static volatile uint64_t t12 = 197591034962LLU;

	t12 = ((x81+x82)%(x83%x84));

	if (t12 != 2147483621LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x85 = INT32_MIN;
	volatile uint64_t x86 = UINT64_MAX;

	t13 = ((x85+x86)%(x87%x88));

	if (t13 != 26LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x89 = INT8_MIN;
	static int16_t x91 = -1;
	int32_t t14 = -75;

	t14 = ((x89+x90)%(x91%x92));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x101 = -1;
	volatile int8_t x102 = INT8_MIN;
	int16_t x104 = 1990;
	int32_t t15 = 507;

	t15 = ((x101+x102)%(x103%x104));

	if (t15 != -14) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x106 = 0;
	volatile uint64_t x108 = UINT64_MAX;
	volatile uint64_t t16 = 14350880453257LLU;

	t16 = ((x105+x106)%(x107%x108));

	if (t16 != 65535LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = 325170670269522LL;
	int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MAX;
	uint64_t t17 = 5412186154020515893LLU;

	t17 = ((x109+x110)%(x111%x112));

	if (t17 != 325170670269521LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x113 = INT32_MIN;
	static uint64_t x114 = 3354858961513604014LLU;
	volatile uint64_t x115 = 3070574195343558466LLU;
	int8_t x116 = INT8_MIN;
	volatile uint64_t t18 = 403510377743LLU;

	t18 = ((x113+x114)%(x115%x116));

	if (t18 != 284284764022561900LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x117 = -1181;
	volatile uint32_t x120 = 10232157U;
	int64_t t19 = 246LL;

	t19 = ((x117+x118)%(x119%x120));

	if (t19 != -1309LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x126 = -1;
	static int32_t x127 = -1;
	volatile int32_t x128 = INT32_MIN;

	t20 = ((x125+x126)%(x127%x128));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x129 = 805272029;
	int64_t x131 = INT64_MIN;
	int64_t t21 = -17565670361320LL;

	t21 = ((x129+x130)%(x131%x132));

	if (t21 != 5LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x137 = 11754U;
	int8_t x139 = 2;
	int32_t t22 = -772375351;

	t22 = ((x137+x138)%(x139%x140));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x141 = 4;
	volatile int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MAX;
	uint32_t x144 = UINT32_MAX;
	static volatile uint32_t t23 = 3785137U;

	t23 = ((x141+x142)%(x143%x144));

	if (t23 != 19U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MIN;
	int16_t x155 = -1;
	static uint64_t x156 = 1272462LLU;
	static uint64_t t24 = 70547204371425250LLU;

	t24 = ((x153+x154)%(x155%x156));

	if (t24 != 391305LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x157 = 2652LLU;
	int32_t x158 = INT32_MAX;
	int32_t x160 = INT32_MAX;
	uint64_t t25 = 676893781LLU;

	t25 = ((x157+x158)%(x159%x160));

	if (t25 != 2147486299LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x161 = UINT64_MAX;
	int8_t x163 = INT8_MIN;
	int64_t x164 = INT64_MIN;
	volatile uint64_t t26 = 195654458455957LLU;

	t26 = ((x161+x162)%(x163%x164));

	if (t26 != 4LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x165 = UINT32_MAX;
	uint64_t x166 = 556961704LLU;
	int16_t x167 = -1;
	static uint64_t t27 = 2548058LLU;

	t27 = ((x165+x166)%(x167%x168));

	if (t27 != 4851928999LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x169 = 60LL;
	int32_t x171 = 37;
	static volatile uint8_t x172 = 42U;
	static int64_t t28 = 9269LL;

	t28 = ((x169+x170)%(x171%x172));

	if (t28 != 34LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x177 = -1;
	int16_t x179 = 4;
	static int64_t x180 = -624022LL;
	int64_t t29 = 232929080020LL;

	t29 = ((x177+x178)%(x179%x180));

	if (t29 != -2LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x181 = INT16_MIN;
	static uint32_t x182 = 254212149U;
	int16_t x184 = INT16_MAX;
	volatile uint32_t t30 = 165U;

	t30 = ((x181+x182)%(x183%x184));

	if (t30 != 254179381U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x185 = UINT64_MAX;
	int16_t x186 = -33;
	int16_t x187 = INT16_MAX;
	static volatile int8_t x188 = INT8_MIN;
	uint64_t t31 = 111LLU;

	t31 = ((x185+x186)%(x187%x188));

	if (t31 != 95LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x191 = 1U;
	int32_t x192 = INT32_MIN;
	static volatile int32_t t32 = 103412;

	t32 = ((x189+x190)%(x191%x192));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x193 = -1;
	uint8_t x194 = 98U;
	volatile uint32_t x196 = 416111343U;
	volatile uint32_t t33 = 75U;

	t33 = ((x193+x194)%(x195%x196));

	if (t33 != 97U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x202 = 3U;
	static int16_t x203 = INT16_MAX;
	uint16_t x204 = UINT16_MAX;
	int32_t t34 = -137;

	t34 = ((x201+x202)%(x203%x204));

	if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x205 = -12062;
	static int16_t x206 = 18;
	static int64_t x207 = INT64_MAX;
	int16_t x208 = 529;
	volatile int64_t t35 = -1919411LL;

	t35 = ((x205+x206)%(x207%x208));

	if (t35 != -90LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x219 = -1;
	int8_t x220 = -4;

	t36 = ((x217+x218)%(x219%x220));

	if (t36 != 2158709739671LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x229 = -5;
	uint8_t x230 = UINT8_MAX;
	static volatile uint32_t x231 = UINT32_MAX;
	uint16_t x232 = 9U;
	volatile uint32_t t37 = 4807U;

	t37 = ((x229+x230)%(x231%x232));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x238 = INT16_MIN;
	volatile uint8_t x239 = UINT8_MAX;
	int16_t x240 = -691;
	static volatile int32_t t38 = 53;

	t38 = ((x237+x238)%(x239%x240));

	if (t38 != -125) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x241 = -1;
	uint16_t x242 = 794U;
	static int16_t x243 = -11;
	volatile uint32_t x244 = 1659U;
	volatile uint32_t t39 = 18733773U;

	t39 = ((x241+x242)%(x243%x244));

	if (t39 != 359U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x245 = INT8_MIN;
	uint16_t x246 = UINT16_MAX;
	uint8_t x247 = 10U;
	uint64_t x248 = 9782LLU;

	t40 = ((x245+x246)%(x247%x248));

	if (t40 != 7LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x250 = 14054930469LL;
	volatile int16_t x251 = 11166;
	static int32_t x252 = INT32_MIN;
	int64_t t41 = -6914924LL;

	t41 = ((x249+x250)%(x251%x252));

	if (t41 != 8300LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x253 = 20;
	static int32_t x254 = INT32_MIN;
	int16_t x255 = -23;
	int64_t x256 = 107916482156728370LL;
	static int64_t t42 = 389762597244LL;

	t42 = ((x253+x254)%(x255%x256));

	if (t42 != -9LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x257 = INT8_MAX;
	uint8_t x258 = 122U;
	static int64_t x259 = INT64_MAX;
	int16_t x260 = -1096;
	int64_t t43 = 3013420LL;

	t43 = ((x257+x258)%(x259%x260));

	if (t43 != 249LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x263 = 29661038377LLU;
	volatile uint64_t t44 = 964141360474LLU;

	t44 = ((x261+x262)%(x263%x264));

	if (t44 != 15274LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x277 = -27;

	t45 = ((x277+x278)%(x279%x280));

	if (t45 != 17986786U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x281 = INT32_MIN;
	int32_t x282 = 87561;
	volatile uint32_t x283 = UINT32_MAX;
	volatile int64_t x284 = INT64_MAX;
	static volatile int64_t t46 = -976LL;

	t46 = ((x281+x282)%(x283%x284));

	if (t46 != -2147396087LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x293 = -77289;
	volatile uint32_t x294 = 2535U;
	volatile int32_t x295 = INT32_MAX;
	int32_t x296 = INT32_MIN;
	volatile uint32_t t47 = 6931193U;

	t47 = ((x293+x294)%(x295%x296));

	if (t47 != 2147408895U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x297 = -10150LL;
	uint16_t x298 = 5168U;
	uint16_t x299 = 15575U;
	static uint32_t x300 = 75247211U;
	volatile int64_t t48 = -16458767LL;

	t48 = ((x297+x298)%(x299%x300));

	if (t48 != -4982LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x301 = INT64_MIN;
	static uint64_t x302 = 26749LLU;
	uint32_t x303 = UINT32_MAX;
	int64_t x304 = 129323700LL;
	volatile uint64_t t49 = 27LLU;

	t49 = ((x301+x302)%(x303%x304));

	if (t49 != 13229772LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x305 = UINT16_MAX;
	static uint16_t x307 = UINT16_MAX;
	volatile uint64_t x308 = UINT64_MAX;

	t50 = ((x305+x306)%(x307%x308));

	if (t50 != 18317LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x309 = INT8_MIN;
	volatile uint64_t x310 = 599LLU;
	uint64_t x311 = 15613079262962LLU;
	static volatile uint64_t t51 = 1345861944LLU;

	t51 = ((x309+x310)%(x311%x312));

	if (t51 != 471LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x313 = INT16_MAX;
	int32_t x314 = -1;
	static volatile uint32_t x316 = UINT32_MAX;
	static volatile uint32_t t52 = 31U;

	t52 = ((x313+x314)%(x315%x316));

	if (t52 != 32766U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x321 = 22752U;
	uint32_t x322 = UINT32_MAX;
	static int64_t x323 = INT64_MIN;
	int64_t t53 = -15412359412340264LL;

	t53 = ((x321+x322)%(x323%x324));

	if (t53 != 71LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x325 = -1;
	int32_t x326 = 3;
	int64_t x327 = INT64_MIN;
	int16_t x328 = INT16_MAX;
	volatile int64_t t54 = -3LL;

	t54 = ((x325+x326)%(x327%x328));

	if (t54 != 2LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x329 = 7955U;
	static uint16_t x330 = 227U;
	int32_t x331 = INT32_MIN;

	t55 = ((x329+x330)%(x331%x332));

	if (t55 != 8182LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x337 = INT32_MIN;
	volatile int8_t x338 = INT8_MAX;
	static int16_t x339 = -1;
	static uint8_t x340 = UINT8_MAX;
	int32_t t56 = 34;

	t56 = ((x337+x338)%(x339%x340));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x345 = 23233960;
	uint8_t x346 = 13U;
	static uint8_t x347 = 23U;
	int8_t x348 = INT8_MIN;
	volatile int32_t t57 = -63;

	t57 = ((x345+x346)%(x347%x348));

	if (t57 != 17) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x349 = 3923LLU;
	int16_t x350 = -689;
	int8_t x351 = -1;
	int32_t x352 = INT32_MIN;

	t58 = ((x349+x350)%(x351%x352));

	if (t58 != 3234LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x357 = INT32_MIN;
	static int32_t x358 = 22547664;
	static uint16_t x359 = 17U;
	int8_t x360 = INT8_MIN;
	int32_t t59 = -5723;

	t59 = ((x357+x358)%(x359%x360));

	if (t59 != -6) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x361 = -1;
	int64_t x362 = 2LL;
	int32_t x363 = INT32_MAX;
	uint8_t x364 = 4U;

	t60 = ((x361+x362)%(x363%x364));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x373 = -2;
	int64_t x374 = -101289584490873380LL;
	uint8_t x375 = 39U;
	static int64_t x376 = -13506307038539LL;
	volatile int64_t t61 = -145800985068796686LL;

	t61 = ((x373+x374)%(x375%x376));

	if (t61 != -19LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x381 = 1720;
	static uint16_t x382 = UINT16_MAX;
	int32_t x383 = INT32_MIN;
	int32_t x384 = -97;
	static volatile int32_t t62 = -943445494;

	t62 = ((x381+x382)%(x383%x384));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x385 = 143209U;
	uint8_t x386 = UINT8_MAX;
	int64_t x387 = -1LL;
	int64_t x388 = INT64_MIN;
	volatile int64_t t63 = 35240564024037639LL;

	t63 = ((x385+x386)%(x387%x388));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x390 = 12687339130LLU;
	volatile uint16_t x391 = 356U;
	int64_t x392 = 477654589504400103LL;
	uint64_t t64 = 4065965121465LLU;

	t64 = ((x389+x390)%(x391%x392));

	if (t64 != 37LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x393 = 3106LLU;
	volatile int8_t x394 = INT8_MIN;
	uint64_t t65 = 1357684200821LLU;

	t65 = ((x393+x394)%(x395%x396));

	if (t65 != 8LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x397 = -1;
	uint16_t x399 = 346U;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t66 = 6852;

	t66 = ((x397+x398)%(x399%x400));

	if (t66 != -129) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x401 = 662U;
	int32_t x402 = -31890739;
	int64_t x403 = 438436LL;
	uint32_t x404 = 111233U;
	static int64_t t67 = 340308703786LL;

	t67 = ((x401+x402)%(x403%x404));

	if (t67 != -50029LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x405 = -1;
	int32_t x406 = 1;
	static volatile uint8_t x407 = 28U;
	int64_t x408 = 3741LL;

	t68 = ((x405+x406)%(x407%x408));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x409 = UINT8_MAX;
	int64_t x411 = -1LL;
	int32_t x412 = 411;
	volatile int64_t t69 = 3836580455730360175LL;

	t69 = ((x409+x410)%(x411%x412));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x421 = 1U;
	int8_t x422 = INT8_MIN;
	uint8_t x423 = 2U;
	static int16_t x424 = INT16_MIN;
	volatile int32_t t70 = 91772008;

	t70 = ((x421+x422)%(x423%x424));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x425 = UINT64_MAX;
	volatile int64_t x426 = 137354045874LL;
	int16_t x427 = -1;
	static int8_t x428 = -32;
	uint64_t t71 = 15465392LLU;

	t71 = ((x425+x426)%(x427%x428));

	if (t71 != 137354045873LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x429 = 1906987766519478LL;
	volatile int64_t t72 = 7315983LL;

	t72 = ((x429+x430)%(x431%x432));

	if (t72 != 652LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x433 = 7121639;
	volatile int64_t x434 = -1LL;
	volatile int8_t x435 = INT8_MAX;
	int64_t x436 = 6152069468LL;
	static int64_t t73 = 740277169018189781LL;

	t73 = ((x433+x434)%(x435%x436));

	if (t73 != 113LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x441 = -1;
	uint64_t x442 = 1LLU;
	volatile int32_t x443 = -1;
	int16_t x444 = INT16_MIN;

	t74 = ((x441+x442)%(x443%x444));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x449 = -19LL;
	int64_t x451 = 1516152686LL;
	int32_t x452 = INT32_MIN;
	int64_t t75 = 38LL;

	t75 = ((x449+x450)%(x451%x452));

	if (t75 != -22LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x453 = INT16_MIN;
	volatile int8_t x454 = INT8_MIN;
	static volatile int16_t x455 = INT16_MIN;
	uint32_t x456 = 702019933U;
	volatile uint32_t t76 = 10U;

	t76 = ((x453+x454)%(x455%x456));

	if (t76 != 71372970U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x457 = -286253LL;
	volatile uint16_t x459 = 898U;
	uint64_t x460 = 264163070233114705LLU;
	volatile uint64_t t77 = 3706986433367LLU;

	t77 = ((x457+x458)%(x459%x460));

	if (t77 != 374LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x461 = INT32_MIN;
	int8_t x463 = 12;
	int32_t x464 = 51747;
	static int32_t t78 = 2;

	t78 = ((x461+x462)%(x463%x464));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x466 = 59U;
	int8_t x467 = INT8_MIN;
	static volatile int64_t t79 = 1046408573LL;

	t79 = ((x465+x466)%(x467%x468));

	if (t79 != 112LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x469 = UINT16_MAX;
	int8_t x471 = 5;
	volatile uint64_t x472 = 5337667416LLU;
	volatile uint64_t t80 = 7516302745888922880LLU;

	t80 = ((x469+x470)%(x471%x472));

	if (t80 != 4LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x478 = -1;
	uint16_t x479 = UINT16_MAX;
	static int8_t x480 = INT8_MIN;
	static int64_t t81 = 1016725297450405348LL;

	t81 = ((x477+x478)%(x479%x480));

	if (t81 != -55LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x489 = INT64_MIN;
	static volatile int16_t x490 = 1;
	int32_t x492 = -15;
	int64_t t82 = 43434035959669LL;

	t82 = ((x489+x490)%(x491%x492));

	if (t82 != -7LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x493 = 86302LLU;
	static volatile uint64_t x495 = 4701LLU;
	int64_t x496 = 1788LL;
	uint64_t t83 = 799LLU;

	t83 = ((x493+x494)%(x495%x496));

	if (t83 != 645LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x497 = 10528U;
	static uint8_t x498 = 79U;
	static int32_t x499 = -1;
	int64_t x500 = 1292LL;
	static int64_t t84 = -15005LL;

	t84 = ((x497+x498)%(x499%x500));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x501 = INT32_MAX;
	int64_t x502 = INT64_MIN;
	volatile uint8_t x503 = UINT8_MAX;
	int16_t x504 = 264;
	volatile int64_t t85 = -7353550092LL;

	t85 = ((x501+x502)%(x503%x504));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x506 = UINT8_MAX;
	static int8_t x507 = -4;
	int16_t x508 = -495;

	t86 = ((x505+x506)%(x507%x508));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x517 = 3;
	uint16_t x518 = 24U;
	int64_t x519 = -533806LL;
	int16_t x520 = -2047;
	static int64_t t87 = -2869LL;

	t87 = ((x517+x518)%(x519%x520));

	if (t87 != 27LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x534 = INT32_MIN;
	static volatile int8_t x535 = -29;
	int8_t x536 = INT8_MIN;
	uint32_t t88 = 1769194142U;

	t88 = ((x533+x534)%(x535%x536));

	if (t88 != 2147483647U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x541 = 53427LLU;
	int16_t x543 = INT16_MIN;
	volatile uint64_t t89 = 54LLU;

	t89 = ((x541+x542)%(x543%x544));

	if (t89 != 53438LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x550 = INT16_MAX;
	int8_t x551 = INT8_MIN;
	uint64_t x552 = 372LLU;

	t90 = ((x549+x550)%(x551%x552));

	if (t90 != 245LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x553 = INT8_MAX;
	static int16_t x554 = 0;
	volatile int32_t x555 = 1;
	volatile uint64_t x556 = 1849152LLU;
	uint64_t t91 = 10458285382773LLU;

	t91 = ((x553+x554)%(x555%x556));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x561 = -1;
	int8_t x562 = INT8_MIN;
	int64_t t92 = -238228804491LL;

	t92 = ((x561+x562)%(x563%x564));

	if (t92 != -29LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x569 = 6U;
	uint64_t x570 = UINT64_MAX;
	int16_t x571 = -102;
	int8_t x572 = INT8_MIN;
	volatile uint64_t t93 = 481LLU;

	t93 = ((x569+x570)%(x571%x572));

	if (t93 != 5LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x579 = INT32_MIN;

	t94 = ((x577+x578)%(x579%x580));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x585 = -1LL;
	int64_t x588 = INT64_MIN;
	uint64_t t95 = 1LLU;

	t95 = ((x585+x586)%(x587%x588));

	if (t95 != 96LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x589 = INT64_MIN;
	uint32_t x590 = UINT32_MAX;
	volatile int32_t x591 = INT32_MAX;
	int8_t x592 = INT8_MIN;
	int64_t t96 = -2056184310LL;

	t96 = ((x589+x590)%(x591%x592));

	if (t96 != -113LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x593 = UINT8_MAX;
	uint64_t x594 = 2667833LLU;
	uint32_t x595 = 46733698U;
	static int64_t x596 = 489169LL;
	uint64_t t97 = 138944103829053LLU;

	t97 = ((x593+x594)%(x595%x596));

	if (t97 != 41658LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x597 = INT64_MIN;
	static uint16_t x598 = 1762U;
	static int64_t x599 = INT64_MIN;
	uint64_t x600 = 19176623LLU;

	t98 = ((x597+x598)%(x599%x600));

	if (t98 != 11117072LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x601 = INT8_MAX;
	int8_t x603 = INT8_MAX;
	volatile uint8_t x604 = 9U;
	int32_t t99 = -250;

	t99 = ((x601+x602)%(x603%x604));

	if (t99 != 0) { NG(); } else { ; }
	
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

