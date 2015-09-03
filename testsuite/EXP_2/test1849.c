#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -896003;
int32_t x5 = -1521995;
uint32_t x7 = 130776U;
uint64_t x16 = UINT64_MAX;
volatile uint32_t x18 = 56929032U;
static volatile int16_t x21 = -10164;
int32_t x29 = INT32_MIN;
static int16_t x36 = INT16_MAX;
int32_t x38 = INT32_MAX;
int16_t x40 = INT16_MIN;
static int64_t x48 = -1LL;
int64_t t9 = -1822527824LL;
int16_t x50 = INT16_MIN;
int8_t x51 = -1;
int16_t x52 = INT16_MIN;
volatile int64_t t10 = -1693557480059390830LL;
int16_t x56 = 6;
volatile int64_t t11 = 430783461632003LL;
volatile int16_t x65 = INT16_MIN;
int8_t x67 = 8;
int64_t t13 = -14826261571LL;
int8_t x74 = -1;
uint64_t x90 = 15153445876LLU;
volatile uint64_t t18 = 20315306LLU;
uint8_t x93 = UINT8_MAX;
uint8_t x101 = 1U;
int32_t x104 = -1;
int64_t x130 = -3462069242LL;
int8_t x137 = -1;
int8_t x142 = INT8_MAX;
volatile int32_t t28 = -1;
volatile uint64_t t31 = 4171746652817857892LLU;
volatile int32_t x158 = INT32_MIN;
uint64_t x163 = 5352631LLU;
static int64_t x164 = -1LL;
int8_t x165 = -1;
int16_t x176 = 81;
volatile int8_t x181 = 7;
uint16_t x187 = 119U;
static int16_t x194 = INT16_MAX;
static uint64_t x200 = 1109LLU;
volatile uint64_t t41 = 1554557711LLU;
static uint16_t x205 = 7U;
int32_t x214 = INT32_MIN;
int64_t t45 = -3637758136874980LL;
uint16_t x229 = 477U;
int32_t x241 = INT32_MIN;
uint64_t x247 = 12588756532LLU;
static int8_t x249 = 8;
static uint8_t x256 = UINT8_MAX;
static uint32_t x268 = 1277U;
int64_t x269 = -1LL;
volatile int8_t x271 = -1;
int64_t x274 = 119883LL;
volatile int64_t x277 = -214364770386LL;
static volatile int32_t x280 = -1154217;
int64_t t56 = -139231394025860LL;
uint64_t x281 = 2988LLU;
int16_t x287 = -1;
static volatile int8_t x289 = 0;
volatile uint32_t x292 = UINT32_MAX;
volatile int8_t x295 = 5;
int64_t x304 = 44298418LL;
int64_t t65 = 767188LL;
uint16_t x322 = 553U;
int32_t t67 = -4;
volatile uint16_t x329 = 66U;
uint8_t x344 = 0U;
int8_t x345 = INT8_MAX;
uint32_t x352 = 1U;
int64_t t73 = 3766174945351597209LL;
static int64_t x361 = -1LL;
int16_t x368 = -1;
uint32_t x385 = UINT32_MAX;
int8_t x390 = -7;
int32_t x394 = -1;
uint64_t x404 = 12LLU;
int64_t x405 = -21563868LL;
volatile uint8_t x416 = UINT8_MAX;
int32_t t87 = -412388;
int8_t x424 = INT8_MIN;
static volatile uint64_t t90 = 324290LLU;
static int32_t x437 = INT32_MIN;
volatile int64_t t92 = 6LL;
volatile uint8_t x441 = UINT8_MAX;
int32_t x446 = -1;
volatile uint32_t x454 = 667310U;
uint64_t x462 = 1LLU;
volatile int16_t x463 = INT16_MIN;
volatile uint64_t t97 = 124725501455513509LLU;
int8_t x468 = -9;
volatile uint64_t x472 = UINT64_MAX;


void f0(void) {
	int16_t x1 = -1;
	static int32_t x2 = INT32_MIN;
	uint8_t x3 = UINT8_MAX;
	int8_t x4 = INT8_MIN;

	t0 = ((x1^(x2&x3))*x4);

	if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 400850488883748LLU;
	static uint16_t x8 = UINT16_MAX;
	volatile uint64_t t1 = 77508146769LLU;

	t1 = ((x5^(x6&x7))*x8);

	if (t1 != 18446743978092741451LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 44U;
	uint8_t x10 = 3U;
	uint64_t x11 = 5LLU;
	static uint32_t x12 = 196081414U;
	volatile uint64_t t2 = 67706088376453771LLU;

	t2 = ((x9^(x10&x11))*x12);

	if (t2 != 8823663630LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 0;
	volatile int16_t x14 = 274;
	volatile int16_t x15 = -116;
	volatile uint64_t t3 = 3560646773843884762LLU;

	t3 = ((x13^(x14&x15))*x16);

	if (t3 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 18U;
	int64_t x19 = 7254018LL;
	uint16_t x20 = UINT16_MAX;
	int64_t t4 = -4205902798LL;

	t4 = ((x17^(x18&x19))*x20);

	if (t4 != 432175669230LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x22 = 4;
	int32_t x23 = 1;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 1;

	t5 = ((x21^(x22&x23))*x24);

	if (t5 != -1290828) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x30 = 275609806841176LL;
	static int8_t x31 = INT8_MAX;
	uint64_t x32 = 20177816LLU;
	volatile uint64_t t6 = 18599LLU;

	t6 = ((x29^(x30&x31))*x32);

	if (t6 != 18403412545572846656LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 24202302383LL;
	static uint32_t x34 = 367279U;
	int64_t x35 = INT64_MIN;
	volatile int64_t t7 = 60323738079776LL;

	t7 = ((x33^(x34&x35))*x36);

	if (t7 != 793036842183761LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x37 = 3U;
	volatile uint8_t x39 = 0U;
	int32_t t8 = 31;

	t8 = ((x37^(x38&x39))*x40);

	if (t8 != -98304) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x45 = INT8_MIN;
	int32_t x46 = -1;
	volatile uint16_t x47 = UINT16_MAX;

	t9 = ((x45^(x46&x47))*x48);

	if (t9 != 65409LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = -319857LL;

	t10 = ((x49^(x50&x51))*x52);

	if (t10 != -9920020480LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = -1LL;
	uint16_t x54 = UINT16_MAX;
	uint8_t x55 = 22U;

	t11 = ((x53^(x54&x55))*x56);

	if (t11 != -138LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -1LL;
	volatile uint16_t x58 = UINT16_MAX;
	volatile uint64_t x59 = 0LLU;
	int16_t x60 = INT16_MIN;
	volatile uint64_t t12 = 2489LLU;

	t12 = ((x57^(x58&x59))*x60);

	if (t12 != 32768LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x66 = -1;
	static int64_t x68 = -1972649078LL;

	t13 = ((x65^(x66&x67))*x68);

	if (t13 != 64623983795280LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x69 = -1;
	uint8_t x70 = 19U;
	int16_t x71 = INT16_MAX;
	static int64_t x72 = -51553489311LL;
	volatile int64_t t14 = 3295937255LL;

	t14 = ((x69^(x70&x71))*x72);

	if (t14 != 1031069786220LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MAX;
	volatile uint32_t x75 = UINT32_MAX;
	static int32_t x76 = -1;
	volatile uint32_t t15 = 134580U;

	t15 = ((x73^(x74&x75))*x76);

	if (t15 != 32768U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x81 = UINT16_MAX;
	int8_t x82 = INT8_MIN;
	uint16_t x83 = 26918U;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t16 = -5739;

	t16 = ((x81^(x82&x83))*x84);

	if (t16 != 9857025) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x85 = UINT32_MAX;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = UINT16_MAX;
	int16_t x88 = -63;
	uint32_t t17 = 941U;

	t17 = ((x85^(x86&x87))*x88);

	if (t17 != 2064447U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = -126;
	uint64_t x91 = 25044455LLU;
	static int8_t x92 = 0;

	t18 = ((x89^(x90&x91))*x92);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x94 = 8;
	int8_t x95 = -1;
	int16_t x96 = -1;
	static volatile int32_t t19 = 58810;

	t19 = ((x93^(x94&x95))*x96);

	if (t19 != -247) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x97 = 53LLU;
	volatile uint16_t x98 = 27U;
	volatile int8_t x99 = 43;
	int8_t x100 = 2;
	uint64_t t20 = 272617003389778327LLU;

	t20 = ((x97^(x98&x99))*x100);

	if (t20 != 124LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MIN;
	volatile int32_t t21 = 12016094;

	t21 = ((x101^(x102&x103))*x104);

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x113 = UINT32_MAX;
	volatile int32_t x114 = -1;
	int64_t x115 = INT64_MAX;
	int8_t x116 = -1;
	volatile int64_t t22 = 1725427809LL;

	t22 = ((x113^(x114&x115))*x116);

	if (t22 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	uint8_t x119 = UINT8_MAX;
	uint32_t x120 = 1U;
	volatile uint32_t t23 = 11832382U;

	t23 = ((x117^(x118&x119))*x120);

	if (t23 != 4294967040U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = INT8_MIN;
	uint16_t x122 = 1U;
	int64_t x123 = INT64_MAX;
	uint8_t x124 = 12U;
	volatile int64_t t24 = -374044897568868LL;

	t24 = ((x121^(x122&x123))*x124);

	if (t24 != -1524LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x129 = UINT32_MAX;
	static uint8_t x131 = UINT8_MAX;
	uint64_t x132 = 183069762092LLU;
	volatile uint64_t t25 = 3572LLU;

	t25 = ((x129^(x130&x131))*x132);

	if (t25 != 11515388694351040716LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = 110;
	int64_t x135 = 129098834316124LL;
	uint16_t x136 = UINT16_MAX;
	int64_t t26 = 547357LL;

	t26 = ((x133^(x134&x135))*x136);

	if (t26 != -3407820LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x138 = 780U;
	static int16_t x139 = -1;
	static uint32_t x140 = 3U;
	uint32_t t27 = 303U;

	t27 = ((x137^(x138&x139))*x140);

	if (t27 != 4294964953U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x141 = INT8_MIN;
	int32_t x143 = -1;
	uint8_t x144 = UINT8_MAX;

	t28 = ((x141^(x142&x143))*x144);

	if (t28 != -255) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = INT64_MIN;
	static int64_t x146 = INT64_MAX;
	int16_t x147 = INT16_MIN;
	volatile uint64_t x148 = 249650LLU;
	uint64_t t29 = 378893LLU;

	t29 = ((x145^(x146&x147))*x148);

	if (t29 != 18446744065529020416LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = -455165781424035882LL;
	volatile uint16_t x150 = 1U;
	int16_t x151 = INT16_MIN;
	static int8_t x152 = -2;
	volatile int64_t t30 = -78051LL;

	t30 = ((x149^(x150&x151))*x152);

	if (t30 != 910331562848071764LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x153 = INT8_MIN;
	uint64_t x154 = 17387941019244336LLU;
	uint64_t x155 = UINT64_MAX;
	uint8_t x156 = 40U;

	t31 = ((x153^(x154&x155))*x156);

	if (t31 != 17751226432939776896LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x157 = -1;
	uint16_t x159 = 1U;
	int64_t x160 = INT64_MAX;
	volatile int64_t t32 = -1LL;

	t32 = ((x157^(x158&x159))*x160);

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MAX;
	uint16_t x162 = UINT16_MAX;
	volatile uint64_t t33 = 3174415762072051LLU;

	t33 = ((x161^(x162&x163))*x164);

	if (t33 != 18446744073709507384LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x166 = -1499386;
	int32_t x167 = -1;
	static volatile uint64_t x168 = 1116470001639289LLU;
	volatile uint64_t t34 = 2332818822330947388LLU;

	t34 = ((x165^(x166&x167))*x168);

	if (t34 != 13811406774065691825LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x173 = 9U;
	int8_t x174 = -1;
	volatile int16_t x175 = 60;
	volatile int32_t t35 = 13255686;

	t35 = ((x173^(x174&x175))*x176);

	if (t35 != 4293) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = -16;
	uint64_t x178 = UINT64_MAX;
	volatile uint64_t x179 = UINT64_MAX;
	volatile int32_t x180 = INT32_MAX;
	volatile uint64_t t36 = 54701808107654LLU;

	t36 = ((x177^(x178&x179))*x180);

	if (t36 != 32212254705LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x182 = 290101002U;
	uint16_t x183 = UINT16_MAX;
	volatile int32_t x184 = -1;
	static volatile uint32_t t37 = 9530678U;

	t37 = ((x181^(x182&x183))*x184);

	if (t37 != 4294928627U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = -10201594;
	static int32_t x186 = INT32_MIN;
	uint16_t x188 = 1U;
	volatile int32_t t38 = -536028333;

	t38 = ((x185^(x186&x187))*x188);

	if (t38 != -10201594) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x189 = 360184U;
	static volatile int16_t x190 = INT16_MIN;
	static uint16_t x191 = 1107U;
	static volatile uint8_t x192 = 0U;
	static uint32_t t39 = 85008596U;

	t39 = ((x189^(x190&x191))*x192);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x193 = INT16_MIN;
	uint32_t x195 = UINT32_MAX;
	int32_t x196 = 12708141;
	static volatile uint32_t t40 = 198875094U;

	t40 = ((x193^(x194&x195))*x196);

	if (t40 != 4282259155U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x197 = 7737U;
	static int8_t x198 = 0;
	int32_t x199 = INT32_MAX;

	t41 = ((x197^(x198&x199))*x200);

	if (t41 != 8580333LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x201 = 361LLU;
	int16_t x202 = INT16_MIN;
	uint32_t x203 = UINT32_MAX;
	static int8_t x204 = 5;
	volatile uint64_t t42 = 75LLU;

	t42 = ((x201^(x202&x203))*x204);

	if (t42 != 21474674445LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x206 = -2401LL;
	volatile int8_t x207 = 17;
	volatile int32_t x208 = INT32_MIN;
	volatile int64_t t43 = -519341476030904948LL;

	t43 = ((x205^(x206&x207))*x208);

	if (t43 != -47244640256LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x213 = INT16_MAX;
	uint16_t x215 = 7U;
	volatile uint64_t x216 = 1611913021975390LLU;
	volatile uint64_t t44 = 62409737613961692LLU;

	t44 = ((x213^(x214&x215))*x216);

	if (t44 != 15924065843648500898LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x217 = INT32_MIN;
	int64_t x218 = 147368260LL;
	static int64_t x219 = -216445LL;
	static volatile uint32_t x220 = UINT32_MAX;

	t45 = ((x217^(x218&x219))*x220);

	if (t45 != -8590440365348659200LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x221 = UINT32_MAX;
	int8_t x222 = 0;
	static uint32_t x223 = 1U;
	int32_t x224 = INT32_MAX;
	volatile uint32_t t46 = 1641U;

	t46 = ((x221^(x222&x223))*x224);

	if (t46 != 2147483649U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x230 = 0;
	uint16_t x231 = 9458U;
	int64_t x232 = -1LL;
	int64_t t47 = 63788677147LL;

	t47 = ((x229^(x230&x231))*x232);

	if (t47 != -477LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x233 = 1108789LLU;
	int16_t x234 = INT16_MAX;
	static int16_t x235 = INT16_MIN;
	int32_t x236 = -1;
	uint64_t t48 = 7764LLU;

	t48 = ((x233^(x234&x235))*x236);

	if (t48 != 18446744073708442827LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x242 = -1LL;
	int32_t x243 = 431289027;
	static uint32_t x244 = UINT32_MAX;
	volatile int64_t t49 = 67905145769202474LL;

	t49 = ((x241^(x242&x243))*x244);

	if (t49 != -7370999769049920195LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x245 = INT16_MIN;
	int32_t x246 = 50806;
	int32_t x248 = 28619697;
	volatile uint64_t t50 = 1210482896794252212LLU;

	t50 = ((x245^(x246&x247))*x248);

	if (t50 != 18446743181347399156LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x250 = INT64_MIN;
	int64_t x251 = INT64_MAX;
	int8_t x252 = 25;
	volatile int64_t t51 = -144438LL;

	t51 = ((x249^(x250&x251))*x252);

	if (t51 != 200LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x253 = 1U;
	static uint32_t x254 = UINT32_MAX;
	uint64_t x255 = 124336042776501908LLU;
	uint64_t t52 = 43511901LLU;

	t52 = ((x253^(x254&x255))*x256);

	if (t52 != 951773951595LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x265 = INT32_MIN;
	uint16_t x266 = 7U;
	volatile int8_t x267 = -10;
	volatile uint32_t t53 = 51U;

	t53 = ((x265^(x266&x267))*x268);

	if (t53 != 2147491310U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x270 = UINT16_MAX;
	volatile int32_t x272 = -1;
	static int64_t t54 = 13032LL;

	t54 = ((x269^(x270&x271))*x272);

	if (t54 != 65536LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x273 = -12;
	static volatile uint16_t x275 = 26U;
	volatile uint16_t x276 = 17451U;
	static volatile int64_t t55 = -7175436729588LL;

	t55 = ((x273^(x274&x275))*x276);

	if (t55 != -34902LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x278 = INT32_MAX;
	static int16_t x279 = INT16_MIN;

	t56 = ((x277^(x278&x279))*x280);

	if (t56 != 245830312078999074LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x282 = 208844355799LLU;
	int64_t x283 = 534LL;
	uint16_t x284 = 1U;
	uint64_t t57 = 1064698883LLU;

	t57 = ((x281^(x282&x283))*x284);

	if (t57 != 3002LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x285 = UINT64_MAX;
	uint8_t x286 = UINT8_MAX;
	static uint64_t x288 = 18467LLU;
	uint64_t t58 = 21100025756LLU;

	t58 = ((x285^(x286&x287))*x288);

	if (t58 != 18446744073704824064LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x290 = 4;
	int8_t x291 = 0;
	uint32_t t59 = 18805U;

	t59 = ((x289^(x290&x291))*x292);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x293 = 15;
	int16_t x294 = 1;
	static uint8_t x296 = 82U;
	static volatile int32_t t60 = 140606;

	t60 = ((x293^(x294&x295))*x296);

	if (t60 != 1148) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x297 = INT32_MIN;
	int16_t x298 = -1;
	int8_t x299 = 2;
	static volatile uint32_t x300 = 21611U;
	static volatile uint32_t t61 = 8168U;

	t61 = ((x297^(x298&x299))*x300);

	if (t61 != 2147526870U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x301 = -1LL;
	int8_t x302 = -3;
	int32_t x303 = INT32_MIN;
	int64_t t62 = 261220454390458LL;

	t62 = ((x301^(x302&x303))*x304);

	if (t62 != 95130128242970446LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = -143097970224623895LL;
	int16_t x307 = INT16_MAX;
	volatile uint16_t x308 = 1481U;
	volatile int64_t t63 = 1273371838897762535LL;

	t63 = ((x305^(x306&x307))*x308);

	if (t63 != -42876431LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x309 = INT16_MIN;
	static int64_t x310 = INT64_MIN;
	uint64_t x311 = 767172948379LLU;
	int64_t x312 = INT64_MIN;
	uint64_t t64 = 508360702LLU;

	t64 = ((x309^(x310&x311))*x312);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = -13158;
	int64_t x314 = INT64_MIN;
	int64_t x315 = 0LL;
	volatile uint32_t x316 = UINT32_MAX;

	t65 = ((x313^(x314&x315))*x316);

	if (t65 != -56513179667610LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x317 = 419;
	uint64_t x318 = 26595375693724LLU;
	int64_t x319 = -25621226923972479LL;
	static volatile int8_t x320 = INT8_MAX;
	static uint64_t t66 = 1056640224068108724LLU;

	t66 = ((x317^(x318&x319))*x320);

	if (t66 != 3368882117797981LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x321 = -12;
	int16_t x323 = INT16_MAX;
	volatile uint8_t x324 = UINT8_MAX;

	t67 = ((x321^(x322&x323))*x324);

	if (t67 != -139485) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x325 = -40152449;
	int16_t x326 = -1;
	uint64_t x327 = 3365828249LLU;
	volatile int32_t x328 = 12368100;
	volatile uint64_t t68 = 885407707417102906LLU;

	t68 = ((x325^(x326&x327))*x328);

	if (t68 != 18404625279420083416LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x330 = INT64_MIN;
	static uint16_t x331 = 1U;
	volatile int16_t x332 = 14222;
	int64_t t69 = 2087126287571525LL;

	t69 = ((x329^(x330&x331))*x332);

	if (t69 != 938652LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x337 = UINT64_MAX;
	static int8_t x338 = INT8_MIN;
	int64_t x339 = INT64_MAX;
	int16_t x340 = 2808;
	static uint64_t t70 = 3710122026385LLU;

	t70 = ((x337^(x338&x339))*x340);

	if (t70 != 356616LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x341 = -1;
	uint16_t x342 = 2U;
	int32_t x343 = -1;
	int32_t t71 = 32116;

	t71 = ((x341^(x342&x343))*x344);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x346 = -1;
	int16_t x347 = -26;
	volatile uint32_t x348 = 497U;
	uint32_t t72 = 361U;

	t72 = ((x345^(x346&x347))*x348);

	if (t72 != 4294916105U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x349 = 3;
	int32_t x350 = -1;
	static int64_t x351 = -1273397LL;

	t73 = ((x349^(x350&x351))*x352);

	if (t73 != -1273400LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x357 = INT32_MIN;
	static int16_t x358 = -2590;
	uint32_t x359 = UINT32_MAX;
	int32_t x360 = -217812573;
	uint32_t t74 = 456044177U;

	t74 = ((x357^(x358&x359))*x360);

	if (t74 != 3641331942U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x362 = -275531746431883686LL;
	volatile uint16_t x363 = 1U;
	int32_t x364 = INT32_MIN;
	volatile int64_t t75 = -93730499441064LL;

	t75 = ((x361^(x362&x363))*x364);

	if (t75 != 2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x365 = 1U;
	int32_t x366 = -1;
	int8_t x367 = -1;
	int32_t t76 = 1829041;

	t76 = ((x365^(x366&x367))*x368);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x369 = 9LLU;
	int32_t x370 = -54;
	int16_t x371 = -1;
	static int8_t x372 = INT8_MIN;
	volatile uint64_t t77 = 1LLU;

	t77 = ((x369^(x370&x371))*x372);

	if (t77 != 7808LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x377 = INT8_MAX;
	int16_t x378 = INT16_MIN;
	int8_t x379 = INT8_MIN;
	uint64_t x380 = 331007636882545LLU;
	volatile uint64_t t78 = 12580422575LLU;

	t78 = ((x377^(x378&x379))*x380);

	if (t78 != 7642323798226400271LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x381 = INT8_MAX;
	uint8_t x382 = 9U;
	uint32_t x383 = 142159152U;
	volatile int8_t x384 = INT8_MIN;
	volatile uint32_t t79 = 870955U;

	t79 = ((x381^(x382&x383))*x384);

	if (t79 != 4294951040U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x386 = 232394204886LLU;
	uint8_t x387 = 0U;
	int32_t x388 = -1;
	uint64_t t80 = 203LLU;

	t80 = ((x385^(x386&x387))*x388);

	if (t80 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x389 = UINT32_MAX;
	uint8_t x391 = 22U;
	static int32_t x392 = INT32_MIN;
	uint32_t t81 = 7930U;

	t81 = ((x389^(x390&x391))*x392);

	if (t81 != 2147483648U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x393 = INT8_MAX;
	static volatile int16_t x395 = INT16_MAX;
	static int8_t x396 = -1;
	volatile int32_t t82 = 0;

	t82 = ((x393^(x394&x395))*x396);

	if (t82 != -32640) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x397 = 338;
	int64_t x398 = -1LL;
	volatile int8_t x399 = INT8_MAX;
	volatile int8_t x400 = -1;
	static volatile int64_t t83 = -5LL;

	t83 = ((x397^(x398&x399))*x400);

	if (t83 != -301LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x401 = 40;
	uint8_t x402 = UINT8_MAX;
	int32_t x403 = -1;
	volatile uint64_t t84 = 1288295477826801823LLU;

	t84 = ((x401^(x402&x403))*x404);

	if (t84 != 2580LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x406 = -40;
	int64_t x407 = -16781262317471LL;
	int8_t x408 = INT8_MAX;
	volatile int64_t t85 = 159777260579134081LL;

	t85 = ((x405^(x406&x407))*x408);

	if (t85 != 2131218641601436LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x409 = INT8_MIN;
	uint64_t x410 = UINT64_MAX;
	volatile int32_t x411 = 944425;
	static uint16_t x412 = 261U;
	static volatile uint64_t t86 = 120050094652277LLU;

	t86 = ((x409^(x410&x411))*x412);

	if (t86 != 18446744073463044685LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x413 = 2U;
	int32_t x414 = 603024;
	volatile int8_t x415 = -1;

	t87 = ((x413^(x414&x415))*x416);

	if (t87 != 153771630) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x421 = 1773293790U;
	uint64_t x422 = UINT64_MAX;
	uint16_t x423 = UINT16_MAX;
	static uint64_t t88 = 47LLU;

	t88 = ((x421^(x422&x423))*x424);

	if (t88 != 18446743846724857728LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x425 = 26873U;
	static volatile int16_t x426 = INT16_MIN;
	volatile int8_t x427 = INT8_MIN;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t89 = -426590;

	t89 = ((x425^(x426&x427))*x428);

	if (t89 != -386328825) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x429 = INT8_MIN;
	volatile int8_t x430 = INT8_MIN;
	uint64_t x431 = UINT64_MAX;
	int16_t x432 = 0;

	t90 = ((x429^(x430&x431))*x432);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x433 = 7498U;
	uint32_t x434 = 2U;
	uint8_t x435 = 20U;
	static int32_t x436 = INT32_MIN;
	uint32_t t91 = 61986U;

	t91 = ((x433^(x434&x435))*x436);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x438 = -1LL;
	int32_t x439 = -57399;
	int16_t x440 = 6606;

	t92 = ((x437^(x438&x439))*x440);

	if (t92 != 14185897800894LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x442 = INT8_MAX;
	int8_t x443 = 1;
	int64_t x444 = -15269608857765195LL;
	int64_t t93 = -161151534940836LL;

	t93 = ((x441^(x442&x443))*x444);

	if (t93 != -3878480649872359530LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x445 = 4;
	uint32_t x447 = 3U;
	int32_t x448 = INT32_MAX;
	uint32_t t94 = 103U;

	t94 = ((x445^(x446&x447))*x448);

	if (t94 != 2147483641U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x453 = 96071736U;
	int64_t x455 = INT64_MIN;
	uint16_t x456 = 64U;
	volatile int64_t t95 = -4490237534626333LL;

	t95 = ((x453^(x454&x455))*x456);

	if (t95 != 6148591104LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x457 = 27U;
	uint32_t x458 = UINT32_MAX;
	uint32_t x459 = 50U;
	volatile uint32_t x460 = 113355659U;
	volatile uint32_t t96 = 119U;

	t96 = ((x457^(x458&x459))*x460);

	if (t96 != 352614723U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x461 = INT64_MAX;
	volatile int64_t x464 = -1LL;

	t97 = ((x461^(x462&x463))*x464);

	if (t97 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x465 = INT8_MAX;
	volatile uint64_t x466 = 1998LLU;
	static uint8_t x467 = 85U;
	uint64_t t98 = 78158LLU;

	t98 = ((x465^(x466&x467))*x468);

	if (t98 != 18446744073709551085LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x469 = -1LL;
	int32_t x470 = INT32_MAX;
	static int16_t x471 = INT16_MIN;
	uint64_t t99 = 11529LLU;

	t99 = ((x469^(x470&x471))*x472);

	if (t99 != 2147450881LLU) { NG(); } else { ; }
	
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

