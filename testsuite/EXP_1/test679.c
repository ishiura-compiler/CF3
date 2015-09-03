#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = -1;
int64_t x15 = 988760672LL;
int16_t x18 = INT16_MAX;
uint16_t x20 = 3335U;
volatile uint64_t t5 = 685911375588LLU;
int64_t x35 = INT64_MIN;
int32_t x45 = INT32_MIN;
int16_t x49 = -1;
uint8_t x50 = 32U;
uint8_t x51 = UINT8_MAX;
static uint64_t t10 = 25LLU;
int16_t x53 = INT16_MIN;
static int64_t t11 = -13010595212LL;
int64_t x60 = INT64_MIN;
int64_t x65 = -1LL;
static int64_t x67 = -1LL;
volatile int32_t x77 = -14875491;
uint8_t x79 = 6U;
static int8_t x92 = INT8_MAX;
uint32_t t19 = 0U;
int64_t t20 = 1489808082LL;
int64_t x105 = -12901957096LL;
uint64_t x108 = UINT64_MAX;
uint64_t t22 = 2LLU;
int8_t x114 = INT8_MAX;
volatile uint64_t t23 = 9LLU;
static int16_t x130 = 35;
uint64_t x157 = 4803790LLU;
int64_t x162 = INT64_MIN;
int32_t x166 = INT32_MIN;
uint16_t x167 = 14757U;
volatile int8_t x176 = INT8_MIN;
int64_t t33 = -17135842409022LL;
uint16_t x177 = 576U;
int64_t x178 = 37264125936555893LL;
uint32_t x179 = 157U;
volatile int32_t x180 = 7464353;
static uint64_t t35 = 1LLU;
int32_t x191 = INT32_MAX;
int16_t x199 = -1;
static int64_t t41 = -114310487LL;
int64_t x217 = 5888LL;
volatile int16_t x218 = INT16_MIN;
int32_t x219 = 0;
int64_t x221 = INT64_MIN;
int64_t x222 = INT64_MIN;
uint16_t x229 = 4U;
int32_t x242 = INT32_MAX;
volatile int64_t x244 = -1LL;
volatile int64_t t46 = -51221923269LL;
volatile uint16_t x245 = UINT16_MAX;
volatile uint16_t x254 = 993U;
volatile uint64_t t48 = 3519185665357LLU;
int32_t x259 = -1;
int64_t x263 = -1LL;
static int64_t t50 = -64574069781LL;
volatile int8_t x269 = 7;
uint8_t x284 = UINT8_MAX;
int32_t t54 = -3;
uint64_t x286 = 1195141247890LLU;
int32_t x298 = INT32_MIN;
uint8_t x305 = 49U;
int16_t x307 = INT16_MAX;
volatile uint8_t x308 = UINT8_MAX;
int64_t x309 = INT64_MIN;
uint64_t x311 = UINT64_MAX;
volatile int64_t t64 = -12485935110080LL;
volatile int64_t x330 = INT64_MIN;
uint64_t x332 = 175206958592053559LLU;
int32_t x333 = INT32_MAX;
int64_t x334 = -460558901LL;
static int64_t x342 = INT64_MIN;
volatile int32_t x346 = INT32_MIN;
static int32_t x359 = -1;
volatile uint64_t t72 = 1038376LLU;
static int8_t x384 = -1;
uint64_t t76 = 6755841970795910LLU;
uint64_t x391 = 36956122LLU;
uint64_t x396 = UINT64_MAX;
uint16_t x402 = UINT16_MAX;
volatile uint8_t x409 = UINT8_MAX;
int8_t x410 = -1;
volatile int32_t x430 = -1;
int8_t x431 = INT8_MIN;
uint64_t x436 = 296921LLU;
volatile int64_t t87 = 298320LL;
static volatile int8_t x461 = INT8_MIN;
int64_t x462 = 5459106LL;
int16_t x463 = -1;
uint8_t x467 = UINT8_MAX;
uint8_t x469 = 58U;
static int32_t x477 = INT32_MIN;
volatile int64_t x490 = 3377987717860962LL;
uint8_t x492 = UINT8_MAX;
static int8_t x493 = INT8_MAX;
volatile int32_t t98 = -6;
int16_t x500 = -7119;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int8_t x2 = INT8_MAX;
	int32_t x3 = 17219;
	volatile int32_t x4 = -1;
	volatile int32_t t0 = 8759879;

	t0 = (((x1%x2)+x3)*x4);

	if (t0 != -17211) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 15U;
	static int32_t x6 = 2555;
	uint32_t x7 = 920687500U;
	volatile uint32_t t1 = 2572374U;

	t1 = (((x5%x6)+x7)*x8);

	if (t1 != 3374279781U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = 309992LL;
	static int32_t x11 = -1;
	int32_t x12 = 52064;
	int64_t t2 = 134506934376160537LL;

	t2 = (((x9%x10)+x11)*x12);

	if (t2 != -6716256LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 876U;
	int32_t x14 = INT32_MAX;
	int32_t x16 = 6;
	volatile int64_t t3 = -547LL;

	t3 = (((x13%x14)+x15)*x16);

	if (t3 != 5932569288LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	uint8_t x19 = 33U;
	volatile int64_t t4 = -357LL;

	t4 = (((x17%x18)+x19)*x20);

	if (t4 != 133400LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = UINT64_MAX;
	int8_t x30 = 1;
	int32_t x31 = INT32_MIN;
	int64_t x32 = INT64_MAX;

	t5 = (((x29%x30)+x31)*x32);

	if (t5 != 2147483648LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x33 = INT8_MIN;
	uint64_t x34 = 27917LLU;
	static int64_t x36 = INT64_MIN;
	uint64_t t6 = 695274469477014269LLU;

	t6 = (((x33%x34)+x35)*x36);

	if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 3U;
	int32_t x38 = 383;
	uint16_t x39 = 1829U;
	int32_t x40 = 7358;
	static uint32_t t7 = 1851188U;

	t7 = (((x37%x38)+x39)*x40);

	if (t7 != 13479856U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 2U;
	volatile int8_t x42 = INT8_MIN;
	uint64_t x43 = 369910763LLU;
	volatile uint8_t x44 = 0U;
	static uint64_t t8 = 170772548LLU;

	t8 = (((x41%x42)+x43)*x44);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MAX;
	uint64_t x48 = 1636LLU;
	uint64_t t9 = 258477032478984852LLU;

	t9 = (((x45%x46)+x47)*x48);

	if (t9 != 3513283246492LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x52 = 3615225158819625739LLU;

	t10 = (((x49%x50)+x51)*x52);

	if (t10 != 14376730728416908522LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x54 = INT64_MAX;
	volatile int64_t x55 = -1LL;
	static int64_t x56 = 8LL;

	t11 = (((x53%x54)+x55)*x56);

	if (t11 != -262152LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -58147507LL;
	uint64_t x58 = 12708874532LLU;
	int16_t x59 = -1;
	static uint64_t t12 = 2278441470144603743LLU;

	t12 = (((x57%x58)+x59)*x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x66 = INT32_MAX;
	static int32_t x68 = -20;
	int64_t t13 = 9160723915921883LL;

	t13 = (((x65%x66)+x67)*x68);

	if (t13 != 40LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x73 = 19;
	static uint8_t x74 = 3U;
	uint32_t x75 = 840U;
	static uint16_t x76 = UINT16_MAX;
	uint32_t t14 = 10370548U;

	t14 = (((x73%x74)+x75)*x76);

	if (t14 != 55114935U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x78 = INT8_MIN;
	int64_t x80 = -1LL;
	int64_t t15 = -291498375118669757LL;

	t15 = (((x77%x78)+x79)*x80);

	if (t15 != 93LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = -1LL;
	int8_t x82 = INT8_MAX;
	int8_t x83 = -9;
	static int8_t x84 = INT8_MIN;
	volatile int64_t t16 = -88181283LL;

	t16 = (((x81%x82)+x83)*x84);

	if (t16 != 1280LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = -1LL;
	int8_t x86 = INT8_MIN;
	int8_t x87 = -5;
	uint16_t x88 = 402U;
	volatile int64_t t17 = -122550313604LL;

	t17 = (((x85%x86)+x87)*x88);

	if (t17 != -2412LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = INT32_MAX;
	static volatile int32_t x90 = -1;
	static volatile int32_t x91 = 164879;
	int32_t t18 = -224911176;

	t18 = (((x89%x90)+x91)*x92);

	if (t18 != 20939633) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x97 = UINT32_MAX;
	int16_t x98 = -6;
	int8_t x99 = INT8_MAX;
	int8_t x100 = -5;

	t19 = (((x97%x98)+x99)*x100);

	if (t19 != 4294966636U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MAX;
	volatile int64_t x102 = -249183LL;
	int32_t x103 = INT32_MIN;
	volatile uint32_t x104 = 3184507U;

	t20 = (((x101%x102)+x103)*x104);

	if (t20 != -6838572362700667LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x106 = 24U;
	uint64_t x107 = 7678481316LLU;
	volatile uint64_t t21 = 42LLU;

	t21 = (((x105%x106)+x107)*x108);

	if (t21 != 18446744066031070316LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x109 = INT8_MAX;
	uint64_t x110 = 104330765825530087LLU;
	int64_t x111 = INT64_MIN;
	uint64_t x112 = 3145LLU;

	t22 = (((x109%x110)+x111)*x112);

	if (t22 != 9223372036855175223LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = INT32_MIN;
	int8_t x115 = INT8_MIN;
	static uint64_t x116 = UINT64_MAX;

	t23 = (((x113%x114)+x115)*x116);

	if (t23 != 136LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x117 = 2023LL;
	volatile int16_t x118 = INT16_MIN;
	int16_t x119 = -64;
	int32_t x120 = 13038450;
	volatile int64_t t24 = -1465133081131707532LL;

	t24 = (((x117%x118)+x119)*x120);

	if (t24 != 25542323550LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = 6493130176LLU;
	int64_t x122 = 17830625769LL;
	int64_t x123 = -1LL;
	int32_t x124 = INT32_MIN;
	volatile uint64_t t25 = 1665400848131008023LLU;

	t25 = (((x121%x122)+x123)*x124);

	if (t25 != 4502853198561673216LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = INT64_MIN;
	static volatile int8_t x131 = INT8_MAX;
	int64_t x132 = -2487520051LL;
	volatile int64_t t26 = 259878870255562423LL;

	t26 = (((x129%x130)+x131)*x132);

	if (t26 != -296014886069LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x133 = 26400U;
	int64_t x134 = -5LL;
	static int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MAX;
	static volatile int64_t t27 = -10424731166LL;

	t27 = (((x133%x134)+x135)*x136);

	if (t27 != -70368744144896LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = -77625114190488LL;
	uint64_t x142 = UINT64_MAX;
	uint8_t x143 = 32U;
	volatile uint32_t x144 = 23025591U;
	uint64_t t28 = 14487335483820027LLU;

	t28 = (((x141%x142)+x143)*x144);

	if (t28 != 1970044472090547256LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x145 = 1416575U;
	int16_t x146 = 7696;
	static volatile uint64_t x147 = 2492662300LLU;
	static uint8_t x148 = 4U;
	uint64_t t29 = 22937LLU;

	t29 = (((x145%x146)+x147)*x148);

	if (t29 != 9970651244LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x158 = UINT16_MAX;
	int64_t x159 = INT64_MIN;
	static uint16_t x160 = UINT16_MAX;
	static uint64_t t30 = 19LLU;

	t30 = (((x157%x158)+x159)*x160);

	if (t30 != 9223372038148109033LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = -2573;
	static uint16_t x163 = 2929U;
	uint16_t x164 = 2342U;
	static volatile int64_t t31 = -621475068775LL;

	t31 = (((x161%x162)+x163)*x164);

	if (t31 != 833752LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x165 = UINT8_MAX;
	static uint32_t x168 = UINT32_MAX;
	volatile uint32_t t32 = 101U;

	t32 = (((x165%x166)+x167)*x168);

	if (t32 != 4294952284U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x173 = -46993723205900LL;
	int64_t x174 = INT64_MIN;
	int32_t x175 = -1;

	t33 = (((x173%x174)+x175)*x176);

	if (t33 != 6015196570355328LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t t34 = -354LL;

	t34 = (((x177%x178)+x179)*x180);

	if (t34 != 5471370749LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x185 = 998U;
	int64_t x186 = -760343513468LL;
	static int64_t x187 = -1LL;
	volatile uint64_t x188 = 54LLU;

	t35 = (((x185%x186)+x187)*x188);

	if (t35 != 53838LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = INT16_MIN;
	uint64_t x192 = 25796107056409787LLU;
	static volatile uint64_t t36 = 160198019LLU;

	t36 = (((x189%x190)+x191)*x192);

	if (t36 != 17065975571067872906LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x197 = -340917;
	int16_t x198 = -83;
	uint16_t x200 = UINT16_MAX;
	static int32_t t37 = 339;

	t37 = (((x197%x198)+x199)*x200);

	if (t37 != -2424795) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x201 = 1U;
	uint32_t x202 = 181U;
	uint8_t x203 = 26U;
	int8_t x204 = INT8_MAX;
	volatile uint32_t t38 = 1029056U;

	t38 = (((x201%x202)+x203)*x204);

	if (t38 != 3429U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x205 = INT16_MAX;
	static int16_t x206 = -1;
	uint8_t x207 = UINT8_MAX;
	uint16_t x208 = UINT16_MAX;
	static volatile int32_t t39 = 12543403;

	t39 = (((x205%x206)+x207)*x208);

	if (t39 != 16711425) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x209 = UINT64_MAX;
	volatile int64_t x210 = -1LL;
	int64_t x211 = INT64_MIN;
	static int64_t x212 = -1LL;
	volatile uint64_t t40 = 439165288951LLU;

	t40 = (((x209%x210)+x211)*x212);

	if (t40 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x213 = 6227;
	int64_t x214 = INT64_MAX;
	uint8_t x215 = 59U;
	static uint8_t x216 = 31U;

	t41 = (((x213%x214)+x215)*x216);

	if (t41 != 194866LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x220 = INT8_MIN;
	int64_t t42 = -18987264380LL;

	t42 = (((x217%x218)+x219)*x220);

	if (t42 != -753664LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x223 = 20U;
	int16_t x224 = INT16_MIN;
	volatile int64_t t43 = -31400383505250LL;

	t43 = (((x221%x222)+x223)*x224);

	if (t43 != -655360LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x225 = INT16_MIN;
	uint64_t x226 = UINT64_MAX;
	static int32_t x227 = -3533;
	int32_t x228 = INT32_MIN;
	uint64_t t44 = 6LLU;

	t44 = (((x225%x226)+x227)*x228);

	if (t44 != 77955803906048LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x230 = 25U;
	volatile uint32_t x231 = 0U;
	int32_t x232 = INT32_MIN;
	uint32_t t45 = 311099216U;

	t45 = (((x229%x230)+x231)*x232);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x241 = -4;
	int32_t x243 = -1;

	t46 = (((x241%x242)+x243)*x244);

	if (t46 != 5LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x246 = 251888LLU;
	int8_t x247 = INT8_MIN;
	static uint32_t x248 = 994513U;
	volatile uint64_t t47 = 1045765LLU;

	t47 = (((x245%x246)+x247)*x248);

	if (t47 != 65048111791LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x253 = 21205852397706391LLU;
	volatile int64_t x255 = INT64_MIN;
	volatile uint8_t x256 = 1U;

	t48 = (((x253%x254)+x255)*x256);

	if (t48 != 9223372036854776172LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x257 = INT32_MIN;
	static int8_t x258 = INT8_MIN;
	uint32_t x260 = 4664233U;
	static volatile uint32_t t49 = 30U;

	t49 = (((x257%x258)+x259)*x260);

	if (t49 != 4290303063U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x261 = 533564993U;
	volatile uint32_t x262 = UINT32_MAX;
	int32_t x264 = INT32_MAX;

	t50 = (((x261%x262)+x263)*x264);

	if (t50 != 1145822094931685824LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x265 = INT64_MIN;
	int8_t x266 = INT8_MIN;
	static uint16_t x267 = UINT16_MAX;
	int16_t x268 = INT16_MIN;
	volatile int64_t t51 = 243498812673607LL;

	t51 = (((x265%x266)+x267)*x268);

	if (t51 != -2147450880LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x270 = INT64_MAX;
	volatile int8_t x271 = INT8_MIN;
	uint8_t x272 = UINT8_MAX;
	int64_t t52 = 1795LL;

	t52 = (((x269%x270)+x271)*x272);

	if (t52 != -30855LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x273 = -173;
	int16_t x274 = INT16_MAX;
	volatile int8_t x275 = -1;
	uint64_t x276 = 53300686581840242LLU;
	static volatile uint64_t t53 = 7234LLU;

	t53 = (((x273%x274)+x275)*x276);

	if (t53 != 9172424608469349508LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x281 = INT32_MAX;
	static int16_t x282 = INT16_MIN;
	int16_t x283 = INT16_MIN;

	t54 = (((x281%x282)+x283)*x284);

	if (t54 != -255) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x285 = UINT32_MAX;
	static volatile int64_t x287 = -1LL;
	int16_t x288 = INT16_MAX;
	uint64_t t55 = 2655421556739488949LLU;

	t55 = (((x285%x286)+x287)*x288);

	if (t55 != 140733193322498LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x289 = INT64_MIN;
	volatile int16_t x290 = -32;
	int64_t x291 = -1LL;
	int8_t x292 = -29;
	static volatile int64_t t56 = -26780500337LL;

	t56 = (((x289%x290)+x291)*x292);

	if (t56 != 29LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x293 = UINT8_MAX;
	volatile uint8_t x294 = UINT8_MAX;
	volatile int8_t x295 = -1;
	static uint8_t x296 = 3U;
	int32_t t57 = -377951;

	t57 = (((x293%x294)+x295)*x296);

	if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x297 = -1;
	int8_t x299 = -13;
	volatile uint64_t x300 = UINT64_MAX;
	uint64_t t58 = 7279640LLU;

	t58 = (((x297%x298)+x299)*x300);

	if (t58 != 14LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MIN;
	int32_t x303 = INT32_MIN;
	uint16_t x304 = 6814U;
	int64_t t59 = -3854LL;

	t59 = (((x301%x302)+x303)*x304);

	if (t59 != -29265907154944LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x306 = INT32_MIN;
	int32_t t60 = 11115;

	t60 = (((x305%x306)+x307)*x308);

	if (t60 != 8368080) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x310 = UINT8_MAX;
	static int64_t x312 = 4LL;
	volatile uint64_t t61 = 67352372984478LLU;

	t61 = (((x309%x310)+x311)*x312);

	if (t61 != 18446744073709551100LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x317 = INT32_MIN;
	static volatile int64_t x318 = -1180863127754589LL;
	int16_t x319 = 3;
	int8_t x320 = -1;
	int64_t t62 = 13837317612602LL;

	t62 = (((x317%x318)+x319)*x320);

	if (t62 != 2147483645LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x321 = 66LLU;
	int64_t x322 = -1LL;
	volatile uint64_t x323 = 494472LLU;
	volatile int8_t x324 = INT8_MAX;
	volatile uint64_t t63 = 602397830364246539LLU;

	t63 = (((x321%x322)+x323)*x324);

	if (t63 != 62806326LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x325 = 3641159U;
	int16_t x326 = 780;
	int64_t x327 = INT64_MIN;
	int16_t x328 = -1;

	t64 = (((x325%x326)+x327)*x328);

	if (t64 != 9223372036854775689LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x329 = INT32_MIN;
	static uint8_t x331 = 9U;
	volatile uint64_t t65 = 220323231113909386LLU;

	t65 = (((x329%x330)+x331)*x332);

	if (t65 != 11338651646298217199LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x335 = 3543529109173145075LLU;
	int8_t x336 = -1;
	volatile uint64_t t66 = 20217487701570193LLU;

	t66 = (((x333%x334)+x335)*x336);

	if (t66 != 14903214964231158498LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x337 = 107;
	int16_t x338 = -32;
	int32_t x339 = -1;
	static uint8_t x340 = 0U;
	volatile int32_t t67 = 4155;

	t67 = (((x337%x338)+x339)*x340);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = -32;
	static uint64_t x343 = 830673719902422199LLU;
	int8_t x344 = 1;
	static uint64_t t68 = 144396LLU;

	t68 = (((x341%x342)+x343)*x344);

	if (t68 != 830673719902422167LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x345 = INT64_MIN;
	uint32_t x347 = UINT32_MAX;
	static int16_t x348 = INT16_MIN;
	static int64_t t69 = -328LL;

	t69 = (((x345%x346)+x347)*x348);

	if (t69 != -140737488322560LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x349 = 29456243003786058LLU;
	static int8_t x350 = INT8_MIN;
	int64_t x351 = 189453506LL;
	uint16_t x352 = 1U;
	volatile uint64_t t70 = 136747625LLU;

	t70 = (((x349%x350)+x351)*x352);

	if (t70 != 29456243193239564LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x357 = 13U;
	int8_t x358 = INT8_MIN;
	int8_t x360 = 31;
	volatile int32_t t71 = -959;

	t71 = (((x357%x358)+x359)*x360);

	if (t71 != 372) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x361 = 56;
	int64_t x362 = 14LL;
	int16_t x363 = -375;
	uint64_t x364 = 8259140009574903LLU;

	t72 = (((x361%x362)+x363)*x364);

	if (t72 != 15349566570118962991LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = INT32_MAX;
	int32_t x367 = 7682;
	int8_t x368 = 1;
	volatile int64_t t73 = -33192301894LL;

	t73 = (((x365%x366)+x367)*x368);

	if (t73 != 7680LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x373 = -1;
	volatile int64_t x374 = -1LL;
	volatile uint8_t x375 = 106U;
	static uint32_t x376 = UINT32_MAX;
	static volatile int64_t t74 = 3750135533150248LL;

	t74 = (((x373%x374)+x375)*x376);

	if (t74 != 455266533270LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x381 = INT8_MIN;
	volatile int32_t x382 = 2724;
	int16_t x383 = INT16_MIN;
	static int32_t t75 = -1781;

	t75 = (((x381%x382)+x383)*x384);

	if (t75 != 32896) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x385 = INT32_MAX;
	volatile int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MAX;
	uint64_t x388 = 830829LLU;

	t76 = (((x385%x386)+x387)*x388);

	if (t76 != 54447547686LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x389 = -1;
	int8_t x390 = -1;
	int32_t x392 = 1524;
	volatile uint64_t t77 = 14344888LLU;

	t77 = (((x389%x390)+x391)*x392);

	if (t77 != 56321129928LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x393 = INT8_MIN;
	uint16_t x394 = UINT16_MAX;
	int32_t x395 = -1724748;
	static uint64_t t78 = 6204LLU;

	t78 = (((x393%x394)+x395)*x396);

	if (t78 != 1724876LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x397 = UINT32_MAX;
	uint64_t x398 = 398615347515931LLU;
	int16_t x399 = 3;
	int64_t x400 = -1LL;
	uint64_t t79 = 7981LLU;

	t79 = (((x397%x398)+x399)*x400);

	if (t79 != 18446744069414584318LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x401 = 7419U;
	int8_t x403 = INT8_MIN;
	volatile uint32_t x404 = UINT32_MAX;
	uint32_t t80 = 3U;

	t80 = (((x401%x402)+x403)*x404);

	if (t80 != 4294960005U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x405 = 3726LL;
	volatile int8_t x406 = -1;
	static int8_t x407 = 28;
	uint64_t x408 = UINT64_MAX;
	uint64_t t81 = 346111666LLU;

	t81 = (((x405%x406)+x407)*x408);

	if (t81 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x411 = 127U;
	uint64_t x412 = 29LLU;
	static volatile uint64_t t82 = 58153487150943181LLU;

	t82 = (((x409%x410)+x411)*x412);

	if (t82 != 3683LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x421 = 2370129721487LLU;
	int8_t x422 = INT8_MIN;
	int32_t x423 = -1;
	int64_t x424 = -1LL;
	uint64_t t83 = 8861935525312759LLU;

	t83 = (((x421%x422)+x423)*x424);

	if (t83 != 18446741703579830130LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x425 = 25504519U;
	int32_t x426 = INT32_MIN;
	static uint8_t x427 = 37U;
	int16_t x428 = INT16_MIN;
	volatile uint32_t t84 = 7826U;

	t84 = (((x425%x426)+x427)*x428);

	if (t84 != 1785331712U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x429 = 231U;
	uint32_t x432 = 3695U;
	uint32_t t85 = 246587U;

	t85 = (((x429%x430)+x431)*x432);

	if (t85 != 4294494336U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x433 = 5262113691LL;
	uint64_t x434 = 239744243314030LLU;
	int32_t x435 = -1;
	uint64_t t86 = 7130153LLU;

	t86 = (((x433%x434)+x435)*x436);

	if (t86 != 1562432058948490LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x437 = INT64_MAX;
	volatile int8_t x438 = 2;
	static int8_t x439 = INT8_MAX;
	volatile uint32_t x440 = UINT32_MAX;

	t87 = (((x437%x438)+x439)*x440);

	if (t87 != 549755813760LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x441 = 21;
	int16_t x442 = INT16_MIN;
	uint8_t x443 = 6U;
	uint64_t x444 = 1938070619182138304LLU;
	volatile uint64_t t88 = 49652308817593479LLU;

	t88 = (((x441%x442)+x443)*x444);

	if (t88 != 15434418570498630976LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x449 = INT32_MAX;
	int32_t x450 = -1;
	int16_t x451 = -1;
	int8_t x452 = 2;
	int32_t t89 = 331750808;

	t89 = (((x449%x450)+x451)*x452);

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x464 = 14;
	volatile int64_t t90 = 7810669684991638LL;

	t90 = (((x461%x462)+x463)*x464);

	if (t90 != -1806LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x465 = INT32_MIN;
	int32_t x466 = INT32_MIN;
	uint16_t x468 = UINT16_MAX;
	int32_t t91 = -62;

	t91 = (((x465%x466)+x467)*x468);

	if (t91 != 16711425) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x470 = UINT32_MAX;
	static int64_t x471 = -1LL;
	static int8_t x472 = INT8_MIN;
	static int64_t t92 = -22217LL;

	t92 = (((x469%x470)+x471)*x472);

	if (t92 != -7296LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x473 = 18;
	volatile int16_t x474 = -1;
	int64_t x475 = -1LL;
	int32_t x476 = -1;
	volatile int64_t t93 = -12LL;

	t93 = (((x473%x474)+x475)*x476);

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x478 = INT8_MIN;
	uint64_t x479 = 62LLU;
	uint16_t x480 = 0U;
	uint64_t t94 = 13LLU;

	t94 = (((x477%x478)+x479)*x480);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x481 = -13614LL;
	static volatile int16_t x482 = INT16_MIN;
	volatile int32_t x483 = 9227290;
	static int8_t x484 = INT8_MAX;
	volatile int64_t t95 = 7546473766LL;

	t95 = (((x481%x482)+x483)*x484);

	if (t95 != 1170136852LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x485 = -30;
	int16_t x486 = INT16_MIN;
	static int8_t x487 = -1;
	int16_t x488 = INT16_MAX;
	volatile int32_t t96 = 11;

	t96 = (((x485%x486)+x487)*x488);

	if (t96 != -1015777) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x489 = INT8_MIN;
	volatile int8_t x491 = -1;
	int64_t t97 = -1089084749095333504LL;

	t97 = (((x489%x490)+x491)*x492);

	if (t97 != -32895LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x494 = -1;
	volatile int16_t x495 = INT16_MIN;
	static uint8_t x496 = UINT8_MAX;

	t98 = (((x493%x494)+x495)*x496);

	if (t98 != -8355840) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x497 = -1;
	static int32_t x498 = INT32_MIN;
	uint64_t x499 = 782477801LLU;
	volatile uint64_t t99 = 395498113427LLU;

	t99 = (((x497%x498)+x499)*x500);

	if (t99 != 18446738503250093416LLU) { NG(); } else { ; }
	
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

