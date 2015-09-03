#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = UINT8_MAX;
static int8_t x3 = -1;
volatile int32_t x4 = INT32_MIN;
int16_t x13 = INT16_MAX;
uint32_t x16 = 47344U;
int32_t x22 = 151;
static uint64_t t3 = 1032292057723LLU;
volatile int8_t x33 = -1;
uint8_t x34 = 119U;
uint16_t x35 = UINT16_MAX;
volatile uint64_t t5 = 11399687151841LLU;
uint16_t x37 = 5585U;
int8_t x45 = 1;
volatile int16_t x51 = INT16_MIN;
volatile uint64_t x54 = UINT64_MAX;
int32_t x55 = -14259433;
int8_t x93 = INT8_MAX;
int16_t x96 = 29;
volatile int64_t t16 = 30200816589LL;
int64_t x102 = -1LL;
static int64_t t17 = 20557LL;
int32_t x110 = 6141;
int16_t x113 = INT16_MIN;
int64_t x116 = -1LL;
uint64_t x122 = 486561260LLU;
int32_t x125 = 127;
volatile uint8_t x135 = 0U;
static uint64_t x143 = UINT64_MAX;
int64_t t26 = 3057897929190LL;
static int32_t x165 = INT32_MIN;
int32_t x171 = 27938866;
static int16_t x173 = -6167;
volatile uint32_t x174 = 5035U;
uint32_t x177 = 2U;
static int32_t x178 = -1;
uint64_t x181 = UINT64_MAX;
int8_t x184 = 3;
int16_t x187 = INT16_MIN;
volatile uint8_t x189 = 3U;
uint32_t x206 = 4629U;
volatile uint8_t x225 = UINT8_MAX;
volatile uint16_t x234 = UINT16_MAX;
static uint32_t x235 = 0U;
int64_t x242 = -30227543025741061LL;
volatile uint16_t x243 = 187U;
int64_t x244 = -109LL;
static uint32_t x246 = 7U;
volatile uint16_t x252 = 14848U;
static volatile int32_t t41 = 566577524;
uint64_t x254 = 1045441133784924LLU;
static volatile uint64_t t42 = 0LLU;
uint32_t x260 = 745806721U;
volatile int16_t x265 = 417;
int64_t x267 = -1LL;
uint64_t x278 = 20LLU;
uint64_t x280 = 2584416LLU;
static volatile int32_t t47 = 234266;
int16_t x292 = -1;
volatile uint64_t t48 = 60016693358525500LLU;
uint8_t x315 = UINT8_MAX;
uint64_t x316 = 3466361087013495040LLU;
static int16_t x322 = INT16_MIN;
volatile uint64_t t53 = 11843027LLU;
uint32_t x331 = UINT32_MAX;
uint8_t x334 = 1U;
static volatile uint64_t t56 = 52198LLU;
int32_t x337 = 4;
static uint8_t x359 = 3U;
volatile int16_t x360 = INT16_MIN;
static uint64_t x361 = UINT64_MAX;
int16_t x367 = -1;
uint32_t x373 = 396718906U;
int16_t x406 = 6;
volatile uint16_t x416 = 27U;
volatile uint64_t t67 = 10285221658LLU;
int32_t x417 = INT32_MIN;
uint8_t x424 = UINT8_MAX;
int16_t x439 = INT16_MIN;
static int16_t x441 = INT16_MAX;
static int16_t x446 = 610;
static int16_t x456 = -1;
volatile int16_t x464 = 52;
static uint64_t t75 = 944022003468329LLU;
volatile uint64_t x494 = 14LLU;
static volatile uint32_t x503 = UINT32_MAX;
int16_t x508 = INT16_MAX;
static int32_t t82 = -256598640;
int32_t x537 = 554755;
int8_t x538 = 31;
volatile int32_t x540 = -1;
uint16_t x544 = 3U;
uint64_t x556 = UINT64_MAX;
static uint64_t t89 = 7257494001724766258LLU;
volatile int8_t x573 = -5;
uint8_t x585 = 23U;
int8_t x612 = INT8_MAX;
int32_t x615 = -1;
int32_t t95 = 274457;
int8_t x618 = INT8_MAX;
static int8_t x620 = 1;
volatile int64_t t96 = -48668LL;
int16_t x630 = 230;
uint32_t x631 = 11U;
volatile uint64_t x632 = UINT64_MAX;
volatile uint64_t x639 = 489LLU;
uint64_t t99 = 378740516025LLU;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t t0 = 15505193;

	t0 = ((x1*(x2*x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x9 = 0;
	static int8_t x10 = -6;
	static uint8_t x11 = UINT8_MAX;
	int64_t x12 = INT64_MIN;
	int64_t t1 = 633LL;

	t1 = ((x9*(x10*x11))/x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x14 = -1;
	int32_t x15 = 33360;
	uint32_t t2 = 72U;

	t2 = ((x13*(x14*x15))/x16);

	if (t2 != 67629U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = UINT16_MAX;
	uint64_t x23 = 5LLU;
	int8_t x24 = INT8_MIN;

	t3 = ((x21*(x22*x23))/x24);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x29 = 9U;
	static uint8_t x30 = UINT8_MAX;
	int8_t x31 = INT8_MAX;
	int16_t x32 = -1;
	volatile int32_t t4 = -3174;

	t4 = ((x29*(x30*x31))/x32);

	if (t4 != -291465) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x36 = 1812244LLU;

	t5 = ((x33*(x34*x35))/x36);

	if (t5 != 10178951660870LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x38 = 51;
	volatile int16_t x39 = -1;
	int8_t x40 = -1;
	int32_t t6 = 125;

	t6 = ((x37*(x38*x39))/x40);

	if (t6 != 284835) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x41 = 3067480652127440740LLU;
	volatile int16_t x42 = -1;
	int16_t x43 = -2037;
	int32_t x44 = -1;
	static volatile uint64_t t7 = 151LLU;

	t7 = ((x41*(x42*x43))/x44);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x46 = UINT8_MAX;
	int16_t x47 = -1;
	uint16_t x48 = UINT16_MAX;
	int32_t t8 = 3496583;

	t8 = ((x45*(x46*x47))/x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x49 = UINT32_MAX;
	static int8_t x50 = -1;
	uint16_t x52 = 26U;
	volatile uint32_t t9 = 12U;

	t9 = ((x49*(x50*x51))/x52);

	if (t9 != 165189789U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MIN;
	volatile uint32_t x56 = 2U;
	uint64_t t10 = 131685180413695176LLU;

	t10 = ((x53*(x54*x55))/x56);

	if (t10 != 9223371803228225536LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = -1LL;
	volatile int64_t x58 = 906282455LL;
	int32_t x59 = INT32_MIN;
	int16_t x60 = -3267;
	int64_t t11 = -78LL;

	t11 = ((x57*(x58*x59))/x60);

	if (t11 != -595722911717721LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -1LL;
	uint16_t x62 = UINT16_MAX;
	int8_t x63 = 1;
	uint8_t x64 = 13U;
	static int64_t t12 = -67213417739530834LL;

	t12 = ((x61*(x62*x63))/x64);

	if (t12 != -5041LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x77 = 61252326036LL;
	uint64_t x78 = 16433307LLU;
	uint64_t x79 = 7605LLU;
	int8_t x80 = -57;
	uint64_t t13 = 60334768130416917LLU;

	t13 = ((x77*(x78*x79))/x80);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x85 = INT8_MIN;
	uint32_t x86 = 28U;
	uint64_t x87 = 10640553342194LLU;
	volatile int8_t x88 = INT8_MIN;
	uint64_t t14 = 18218941083LLU;

	t14 = ((x85*(x86*x87))/x88);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x94 = -1LL;
	volatile int8_t x95 = INT8_MIN;
	int64_t t15 = 98LL;

	t15 = ((x93*(x94*x95))/x96);

	if (t15 != 560LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x97 = 2U;
	int64_t x98 = -303015596LL;
	static int32_t x99 = -11701;
	int8_t x100 = INT8_MAX;

	t16 = ((x97*(x98*x99))/x100);

	if (t16 != 55835991949LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x101 = INT32_MIN;
	static int32_t x103 = INT32_MIN;
	uint16_t x104 = 1U;

	t17 = ((x101*(x102*x103))/x104);

	if (t17 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x109 = -1;
	volatile int32_t x111 = 780;
	uint32_t x112 = 5U;
	volatile uint32_t t18 = 1113922915U;

	t18 = ((x109*(x110*x111))/x112);

	if (t18 != 858035463U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x114 = INT8_MAX;
	int8_t x115 = INT8_MIN;
	int64_t t19 = -207274238735679223LL;

	t19 = ((x113*(x114*x115))/x116);

	if (t19 != -532676608LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x121 = INT32_MIN;
	static int64_t x123 = INT64_MIN;
	static int64_t x124 = INT64_MIN;
	uint64_t t20 = 706112LLU;

	t20 = ((x121*(x122*x123))/x124);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x126 = 1882U;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = UINT8_MAX;
	volatile uint32_t t21 = 1964079205U;

	t21 = ((x125*(x126*x127))/x128);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x129 = 99309689921579LLU;
	uint32_t x130 = UINT32_MAX;
	int32_t x131 = INT32_MIN;
	uint8_t x132 = 27U;
	uint64_t t22 = 98770535630767LLU;

	t22 = ((x129*(x130*x131))/x132);

	if (t22 != 115813273525133615LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x133 = INT16_MIN;
	int8_t x134 = INT8_MIN;
	uint16_t x136 = 9653U;
	int32_t t23 = -191549718;

	t23 = ((x133*(x134*x135))/x136);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x137 = -3;
	static uint8_t x138 = UINT8_MAX;
	uint32_t x139 = 7007U;
	volatile uint8_t x140 = UINT8_MAX;
	volatile uint32_t t24 = 135457U;

	t24 = ((x137*(x138*x139))/x140);

	if (t24 != 16821988U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x141 = INT8_MIN;
	int32_t x142 = INT32_MIN;
	static int32_t x144 = INT32_MIN;
	uint64_t t25 = 1461LLU;

	t25 = ((x141*(x142*x143))/x144);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x149 = INT8_MIN;
	int64_t x150 = 120LL;
	uint8_t x151 = 1U;
	uint16_t x152 = 1841U;

	t26 = ((x149*(x150*x151))/x152);

	if (t26 != -8LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x166 = 1747503U;
	int16_t x167 = -145;
	static volatile int32_t x168 = -537651403;
	uint32_t t27 = 1421U;

	t27 = ((x165*(x166*x167))/x168);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x169 = 41655188U;
	uint32_t x170 = 3921U;
	int64_t x172 = INT64_MIN;
	int64_t t28 = 108785LL;

	t28 = ((x169*(x170*x171))/x172);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x175 = 0;
	uint8_t x176 = 4U;
	uint32_t t29 = 378984200U;

	t29 = ((x173*(x174*x175))/x176);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x179 = -231406526;
	static uint8_t x180 = UINT8_MAX;
	volatile uint32_t t30 = 90U;

	t30 = ((x177*(x178*x179))/x180);

	if (t30 != 1814953U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x182 = 38511432;
	volatile int64_t x183 = 0LL;
	uint64_t t31 = 902918578323LLU;

	t31 = ((x181*(x182*x183))/x184);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x185 = UINT16_MAX;
	int32_t x186 = -1;
	int64_t x188 = -1572556518LL;
	static volatile int64_t t32 = 13876462473689LL;

	t32 = ((x185*(x186*x187))/x188);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x190 = UINT64_MAX;
	int16_t x191 = -1;
	int64_t x192 = INT64_MIN;
	uint64_t t33 = 2965LLU;

	t33 = ((x189*(x190*x191))/x192);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x205 = INT8_MIN;
	static uint8_t x207 = 11U;
	int8_t x208 = -2;
	volatile uint32_t t34 = 4530U;

	t34 = ((x205*(x206*x207))/x208);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x213 = 24;
	int8_t x214 = INT8_MIN;
	int8_t x215 = -30;
	int64_t x216 = -458241090LL;
	static volatile int64_t t35 = -36551941LL;

	t35 = ((x213*(x214*x215))/x216);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x226 = UINT16_MAX;
	uint64_t x227 = UINT64_MAX;
	volatile int64_t x228 = -1LL;
	uint64_t t36 = 4276417468LLU;

	t36 = ((x225*(x226*x227))/x228);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x229 = INT8_MIN;
	int16_t x230 = INT16_MIN;
	volatile uint8_t x231 = 6U;
	int8_t x232 = -1;
	volatile int32_t t37 = 29233;

	t37 = ((x229*(x230*x231))/x232);

	if (t37 != -25165824) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x233 = 505U;
	static uint32_t x236 = UINT32_MAX;
	static uint32_t t38 = 133157000U;

	t38 = ((x233*(x234*x235))/x236);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x241 = -1LL;
	static volatile int64_t t39 = 114539370942LL;

	t39 = ((x241*(x242*x243))/x244);

	if (t39 != -51858261888197967LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x245 = 2351U;
	int32_t x247 = INT32_MAX;
	int8_t x248 = INT8_MIN;
	uint32_t t40 = 1883017284U;

	t40 = ((x245*(x246*x247))/x248);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x249 = INT8_MIN;
	uint8_t x250 = 1U;
	static int16_t x251 = INT16_MAX;

	t41 = ((x249*(x250*x251))/x252);

	if (t41 != -282) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x253 = 527088201710LLU;
	volatile uint64_t x255 = 12LLU;
	uint32_t x256 = UINT32_MAX;

	t42 = ((x253*(x254*x255))/x256);

	if (t42 != 2546989906LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x257 = UINT16_MAX;
	volatile int32_t x258 = 22353;
	static uint8_t x259 = 0U;
	uint32_t t43 = 890392U;

	t43 = ((x257*(x258*x259))/x260);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x261 = -576LL;
	volatile int8_t x262 = -1;
	static uint8_t x263 = 122U;
	int8_t x264 = INT8_MAX;
	volatile int64_t t44 = -1011LL;

	t44 = ((x261*(x262*x263))/x264);

	if (t44 != 553LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x266 = 1477;
	int64_t x268 = -2945815027176053541LL;
	static volatile int64_t t45 = 184LL;

	t45 = ((x265*(x266*x267))/x268);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x277 = INT32_MIN;
	int64_t x279 = INT64_MIN;
	volatile uint64_t t46 = 1939LLU;

	t46 = ((x277*(x278*x279))/x280);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x281 = UINT8_MAX;
	volatile int8_t x282 = INT8_MIN;
	int32_t x283 = -1;
	int32_t x284 = -904261668;

	t47 = ((x281*(x282*x283))/x284);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x289 = UINT64_MAX;
	volatile int16_t x290 = -1;
	uint16_t x291 = UINT16_MAX;

	t48 = ((x289*(x290*x291))/x292);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x293 = INT16_MIN;
	static uint32_t x294 = 1161U;
	static int32_t x295 = -2;
	int8_t x296 = -1;
	static uint32_t t49 = 1346U;

	t49 = ((x293*(x294*x295))/x296);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x297 = -845463538;
	int32_t x298 = INT32_MIN;
	uint32_t x299 = UINT32_MAX;
	int32_t x300 = INT32_MIN;
	volatile uint32_t t50 = 201831U;

	t50 = ((x297*(x298*x299))/x300);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x301 = -1;
	int8_t x302 = -9;
	int8_t x303 = -1;
	int8_t x304 = 27;
	volatile int32_t t51 = 152955766;

	t51 = ((x301*(x302*x303))/x304);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x313 = -939;
	uint8_t x314 = UINT8_MAX;
	uint64_t t52 = 116059481LLU;

	t52 = ((x313*(x314*x315))/x316);

	if (t52 != 5LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x321 = -1;
	volatile uint64_t x323 = UINT64_MAX;
	uint32_t x324 = 28239U;

	t53 = ((x321*(x322*x323))/x324);

	if (t53 != 653236448659992LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x325 = 239U;
	int32_t x326 = 84450397;
	static volatile uint32_t x327 = 173U;
	int32_t x328 = -22;
	volatile uint32_t t54 = 131044U;

	t54 = ((x325*(x326*x327))/x328);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x329 = 20U;
	static int64_t x330 = -308LL;
	int32_t x332 = INT32_MIN;
	volatile int64_t t55 = -72517839LL;

	t55 = ((x329*(x330*x331))/x332);

	if (t55 != 12319LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x333 = INT32_MAX;
	uint64_t x335 = UINT64_MAX;
	volatile int64_t x336 = -194506LL;

	t56 = ((x333*(x334*x335))/x336);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x338 = INT8_MAX;
	uint64_t x339 = 7375372790826629LLU;
	uint64_t x340 = 289180005035LLU;
	uint64_t t57 = 244452376464153531LLU;

	t57 = ((x337*(x338*x339))/x340);

	if (t57 != 12956253LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x357 = INT32_MIN;
	uint8_t x358 = 0U;
	int32_t t58 = 50;

	t58 = ((x357*(x358*x359))/x360);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x362 = 97403696044929363LL;
	static volatile int16_t x363 = -44;
	volatile int64_t x364 = INT64_MIN;
	volatile uint64_t t59 = 27LLU;

	t59 = ((x361*(x362*x363))/x364);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x365 = UINT8_MAX;
	static volatile int8_t x366 = 11;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t60 = 21139;

	t60 = ((x365*(x366*x367))/x368);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x369 = INT16_MIN;
	static uint16_t x370 = 0U;
	int64_t x371 = 25416694207892976LL;
	static int16_t x372 = 35;
	int64_t t61 = -122215LL;

	t61 = ((x369*(x370*x371))/x372);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x374 = INT16_MAX;
	volatile int8_t x375 = -1;
	int64_t x376 = INT64_MIN;
	int64_t t62 = 4054888873LL;

	t62 = ((x373*(x374*x375))/x376);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x393 = 798425335LLU;
	int8_t x394 = -1;
	static int16_t x395 = INT16_MAX;
	uint64_t x396 = 1476420LLU;
	volatile uint64_t t63 = 960678384677418LLU;

	t63 = ((x393*(x394*x395))/x396);

	if (t63 != 12494221096779LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x397 = -135;
	static uint64_t x398 = UINT64_MAX;
	uint8_t x399 = 45U;
	int8_t x400 = -4;
	volatile uint64_t t64 = 3420218LLU;

	t64 = ((x397*(x398*x399))/x400);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x401 = UINT64_MAX;
	static volatile int64_t x402 = 1853LL;
	uint32_t x403 = UINT32_MAX;
	int16_t x404 = INT16_MIN;
	volatile uint64_t t65 = 8817419LLU;

	t65 = ((x401*(x402*x403))/x404);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x405 = -39LL;
	int32_t x407 = 2796677;
	static int16_t x408 = 2;
	int64_t t66 = 106888161LL;

	t66 = ((x405*(x406*x407))/x408);

	if (t66 != -327211209LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x413 = INT64_MAX;
	volatile uint16_t x414 = 16260U;
	uint64_t x415 = UINT64_MAX;

	t67 = ((x413*(x414*x415))/x416);

	if (t67 != 602LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x418 = 1866U;
	uint32_t x419 = UINT32_MAX;
	static volatile int16_t x420 = -10;
	uint32_t t68 = 15U;

	t68 = ((x417*(x418*x419))/x420);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x421 = 50U;
	static volatile int16_t x422 = INT16_MAX;
	volatile uint64_t x423 = 47524605865LLU;
	uint64_t t69 = 111067734463845LLU;

	t69 = ((x421*(x422*x423))/x424);

	if (t69 != 305340933407540LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x433 = 2;
	uint64_t x434 = 1562101692085LLU;
	static uint64_t x435 = UINT64_MAX;
	uint16_t x436 = 1543U;
	uint64_t t70 = 13212781LLU;

	t70 = ((x433*(x434*x435))/x436);

	if (t70 != 11955114030788183LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x437 = -1;
	uint16_t x438 = UINT16_MAX;
	int16_t x440 = INT16_MIN;
	volatile int32_t t71 = 47528534;

	t71 = ((x437*(x438*x439))/x440);

	if (t71 != -65535) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x442 = 5U;
	volatile int8_t x443 = INT8_MAX;
	int8_t x444 = -1;
	int32_t t72 = -6935256;

	t72 = ((x441*(x442*x443))/x444);

	if (t72 != -20807045) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x445 = -1;
	uint16_t x447 = 28U;
	int64_t x448 = INT64_MIN;
	volatile int64_t t73 = -73700LL;

	t73 = ((x445*(x446*x447))/x448);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x453 = INT64_MIN;
	static uint64_t x454 = 17541LLU;
	int16_t x455 = 25;
	uint64_t t74 = 2586355738239548LLU;

	t74 = ((x453*(x454*x455))/x456);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x461 = 219LLU;
	uint16_t x462 = 0U;
	uint32_t x463 = UINT32_MAX;

	t75 = ((x461*(x462*x463))/x464);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x465 = UINT64_MAX;
	int64_t x466 = 1521290LL;
	int64_t x467 = -1LL;
	uint8_t x468 = UINT8_MAX;
	volatile uint64_t t76 = 319LLU;

	t76 = ((x465*(x466*x467))/x468);

	if (t76 != 5965LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x473 = INT8_MAX;
	uint8_t x474 = 33U;
	static int8_t x475 = -3;
	int16_t x476 = -1;
	volatile int32_t t77 = 3;

	t77 = ((x473*(x474*x475))/x476);

	if (t77 != 12573) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x477 = 440594938LL;
	int8_t x478 = -1;
	uint8_t x479 = 0U;
	uint16_t x480 = UINT16_MAX;
	volatile int64_t t78 = 1LL;

	t78 = ((x477*(x478*x479))/x480);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x481 = INT64_MIN;
	volatile uint64_t x482 = UINT64_MAX;
	uint16_t x483 = 1735U;
	uint16_t x484 = 140U;
	uint64_t t79 = 872918244440789LLU;

	t79 = ((x481*(x482*x483))/x484);

	if (t79 != 65881228834676970LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x493 = 1LLU;
	int64_t x495 = INT64_MIN;
	int64_t x496 = -225740LL;
	volatile uint64_t t80 = 1116108013918561LLU;

	t80 = ((x493*(x494*x495))/x496);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x501 = INT8_MIN;
	uint32_t x502 = UINT32_MAX;
	uint8_t x504 = 13U;
	static uint32_t t81 = 61713U;

	t81 = ((x501*(x502*x503))/x504);

	if (t81 != 330382089U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x505 = INT8_MIN;
	static int16_t x506 = -3;
	volatile int32_t x507 = -1;

	t82 = ((x505*(x506*x507))/x508);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x521 = 6;
	uint32_t x522 = 221395U;
	static int32_t x523 = INT32_MIN;
	int16_t x524 = -1;
	static uint32_t t83 = 4535U;

	t83 = ((x521*(x522*x523))/x524);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x525 = -1;
	int8_t x526 = -1;
	volatile int64_t x527 = INT64_MAX;
	static volatile int32_t x528 = -26;
	int64_t t84 = -92558648LL;

	t84 = ((x525*(x526*x527))/x528);

	if (t84 != -354745078340568300LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x533 = 121275000308LLU;
	int32_t x534 = -1;
	int64_t x535 = -14144558695529197LL;
	int32_t x536 = 85967640;
	static uint64_t t85 = 5177LLU;

	t85 = ((x533*(x534*x535))/x536);

	if (t85 != 185858374926LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x539 = 2U;
	int32_t t86 = 423780334;

	t86 = ((x537*(x538*x539))/x540);

	if (t86 != -34394810) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x541 = UINT32_MAX;
	static uint32_t x542 = 5619U;
	static int8_t x543 = -3;
	volatile uint32_t t87 = 1533614U;

	t87 = ((x541*(x542*x543))/x544);

	if (t87 != 5619U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x549 = INT16_MIN;
	static volatile int16_t x550 = -656;
	static int32_t x551 = -1;
	int32_t x552 = INT32_MAX;
	volatile int32_t t88 = -7944959;

	t88 = ((x549*(x550*x551))/x552);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x553 = -1LL;
	uint64_t x554 = 189LLU;
	volatile int32_t x555 = -682067;

	t89 = ((x553*(x554*x555))/x556);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x565 = UINT32_MAX;
	int8_t x566 = INT8_MIN;
	volatile uint8_t x567 = 0U;
	int32_t x568 = INT32_MIN;
	uint32_t t90 = 75U;

	t90 = ((x565*(x566*x567))/x568);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x574 = 0;
	int8_t x575 = INT8_MIN;
	static int64_t x576 = INT64_MIN;
	volatile int64_t t91 = -26346112549093LL;

	t91 = ((x573*(x574*x575))/x576);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x586 = 3930665LL;
	uint16_t x587 = UINT16_MAX;
	volatile int64_t x588 = -3781LL;
	volatile int64_t t92 = 135521357038LL;

	t92 = ((x585*(x586*x587))/x588);

	if (t92 != -1566969322LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x597 = UINT8_MAX;
	uint32_t x598 = 939518U;
	uint16_t x599 = 162U;
	volatile int8_t x600 = -1;
	volatile uint32_t t93 = 374U;

	t93 = ((x597*(x598*x599))/x600);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x609 = INT32_MIN;
	int8_t x610 = -1;
	uint32_t x611 = UINT32_MAX;
	uint32_t t94 = 43U;

	t94 = ((x609*(x610*x611))/x612);

	if (t94 != 16909320U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x613 = 1U;
	volatile int32_t x614 = 1746855;
	int16_t x616 = INT16_MIN;

	t95 = ((x613*(x614*x615))/x616);

	if (t95 != 53) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x617 = 13712U;
	int64_t x619 = -14365LL;

	t96 = ((x617*(x618*x619))/x620);

	if (t96 != -25015555760LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x621 = -1LL;
	volatile int64_t x622 = -1LL;
	int64_t x623 = 0LL;
	int16_t x624 = INT16_MAX;
	int64_t t97 = -1099908LL;

	t97 = ((x621*(x622*x623))/x624);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x629 = 23973LLU;
	volatile uint64_t t98 = 240171165183LLU;

	t98 = ((x629*(x630*x631))/x632);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x637 = INT16_MIN;
	int64_t x638 = INT64_MIN;
	int16_t x640 = INT16_MIN;

	t99 = ((x637*(x638*x639))/x640);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

