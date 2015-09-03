#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = INT64_MIN;
volatile uint8_t x3 = 89U;
uint32_t x8 = 2989370U;
uint32_t t1 = 40544703U;
volatile int16_t x9 = -1;
volatile int8_t x10 = INT8_MIN;
int8_t x15 = INT8_MIN;
static int64_t x19 = INT64_MAX;
volatile uint32_t x27 = 64623284U;
int16_t x28 = INT16_MIN;
static volatile int64_t t6 = 3188381235LL;
uint32_t x38 = 13372900U;
uint64_t x41 = 206144LLU;
volatile int32_t x48 = INT32_MIN;
volatile uint32_t x55 = UINT32_MAX;
volatile uint32_t t11 = 1U;
int8_t x65 = INT8_MIN;
int32_t x71 = -4428;
volatile int32_t t16 = -1994823;
volatile uint16_t x81 = 1318U;
volatile uint8_t x85 = 1U;
uint64_t x100 = 1725892LLU;
volatile int64_t t24 = 150021861LL;
static int8_t x125 = INT8_MIN;
static volatile uint64_t t29 = 39LLU;
int64_t x130 = INT64_MIN;
int64_t x132 = -1488522748LL;
int64_t x133 = INT64_MIN;
static int32_t x134 = 1901;
int16_t x138 = INT16_MIN;
int8_t x140 = INT8_MAX;
static int8_t x146 = -3;
volatile int8_t x148 = 1;
int16_t x158 = INT16_MAX;
int32_t x165 = INT32_MIN;
uint64_t x171 = UINT64_MAX;
static int16_t x181 = INT16_MAX;
volatile int32_t x184 = INT32_MIN;
int64_t x187 = INT64_MIN;
volatile uint64_t x193 = 2301LLU;
static uint32_t x194 = 46410U;
int8_t x205 = 14;
volatile int8_t x206 = -2;
static int8_t x210 = -1;
static uint16_t x213 = 7U;
volatile uint32_t x214 = 1187U;
int16_t x215 = -1;
volatile uint64_t t55 = 778450LLU;
int64_t x246 = -855141609725LL;
int16_t x253 = INT16_MIN;
uint16_t x265 = 393U;
int8_t x266 = INT8_MIN;
int32_t x268 = -7953162;
int32_t x271 = INT32_MAX;
volatile int32_t x276 = 116;
int16_t x277 = INT16_MIN;
int64_t x279 = INT64_MIN;
static volatile int64_t x284 = INT64_MAX;
int16_t x288 = INT16_MAX;
volatile int64_t t68 = -5LL;
uint8_t x298 = 32U;
uint64_t x302 = 10436LLU;
volatile int8_t x306 = INT8_MIN;
int32_t t75 = 167060;
uint16_t x317 = 4968U;
int32_t x340 = -1;
static uint64_t t82 = 182434546416607322LLU;
int8_t x361 = INT8_MIN;
int32_t x366 = INT32_MAX;
int16_t x367 = INT16_MIN;
static int32_t x371 = -1;
int32_t x373 = INT32_MIN;
int16_t x374 = -1;
uint32_t x379 = UINT32_MAX;
uint16_t x380 = UINT16_MAX;
int64_t x393 = INT64_MIN;
uint32_t x394 = UINT32_MAX;
static int16_t x395 = INT16_MIN;
static int32_t x397 = INT32_MAX;
volatile int64_t t97 = 106170590LL;
int64_t x411 = INT64_MIN;
int32_t x412 = INT32_MIN;
int64_t t99 = 266845061217027511LL;


void f0(void) {
	int16_t x1 = -3382;
	static int64_t x4 = 3LL;
	int64_t t0 = -266523009LL;

	t0 = ((x1^(x2==x3))/x4);

	if (t0 != -1127LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint64_t x6 = 0LLU;
	static uint64_t x7 = 16759666LLU;

	t1 = ((x5^(x6==x7))/x8);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x11 = -1LL;
	uint8_t x12 = 4U;
	static int32_t t2 = -1;

	t2 = ((x9^(x10==x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	volatile int8_t x14 = 52;
	uint16_t x16 = UINT16_MAX;
	volatile int64_t t3 = -185LL;

	t3 = ((x13^(x14==x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 15;
	int64_t x18 = INT64_MIN;
	int64_t x20 = INT64_MIN;
	static int64_t t4 = -30LL;

	t4 = ((x17^(x18==x19))/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -7;
	int16_t x22 = INT16_MAX;
	int64_t x23 = -1LL;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = -267277;

	t5 = ((x21^(x22==x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MAX;
	int32_t x26 = INT32_MIN;

	t6 = ((x25^(x26==x27))/x28);

	if (t6 != -281474976710655LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -14;
	int16_t x34 = -1;
	int16_t x35 = INT16_MIN;
	static int32_t x36 = 391713;
	volatile int32_t t7 = -1;

	t7 = ((x33^(x34==x35))/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	int8_t x39 = -1;
	int16_t x40 = 1458;
	volatile int32_t t8 = -2;

	t8 = ((x37^(x38==x39))/x40);

	if (t8 != -22) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x42 = UINT32_MAX;
	volatile int16_t x43 = 442;
	int64_t x44 = INT64_MAX;
	volatile uint64_t t9 = 447LLU;

	t9 = ((x41^(x42==x43))/x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 37U;
	int8_t x46 = -11;
	int32_t x47 = 7525;
	volatile int32_t t10 = 839907;

	t10 = ((x45^(x46==x47))/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 3371U;
	volatile int8_t x54 = INT8_MIN;
	int8_t x56 = INT8_MIN;

	t11 = ((x53^(x54==x55))/x56);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	volatile int16_t x58 = 1;
	static int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MIN;
	uint32_t t12 = 6204U;

	t12 = ((x57^(x58==x59))/x60);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = -1;
	static int8_t x62 = -1;
	volatile uint16_t x63 = UINT16_MAX;
	volatile int16_t x64 = -1;
	int32_t t13 = 836552;

	t13 = ((x61^(x62==x63))/x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x66 = UINT64_MAX;
	int8_t x67 = INT8_MAX;
	uint32_t x68 = 868458U;
	uint32_t t14 = 198U;

	t14 = ((x65^(x66==x67))/x68);

	if (t14 != 4945U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = 5729;
	uint8_t x70 = 40U;
	static volatile int32_t x72 = INT32_MIN;
	static volatile int32_t t15 = 204326271;

	t15 = ((x69^(x70==x71))/x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = 2892;
	static uint32_t x74 = 27U;
	volatile int8_t x75 = INT8_MIN;
	int32_t x76 = -1;

	t16 = ((x73^(x74==x75))/x76);

	if (t16 != -2892) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 1U;
	int8_t x78 = INT8_MIN;
	volatile int16_t x79 = INT16_MIN;
	uint32_t x80 = 1531106U;
	volatile uint32_t t17 = 1659462460U;

	t17 = ((x77^(x78==x79))/x80);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x82 = -1;
	uint32_t x83 = UINT32_MAX;
	int8_t x84 = INT8_MAX;
	int32_t t18 = -344734;

	t18 = ((x81^(x82==x83))/x84);

	if (t18 != 10) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x86 = 32374335282749LL;
	int64_t x87 = INT64_MIN;
	uint8_t x88 = 42U;
	volatile int32_t t19 = -438387272;

	t19 = ((x85^(x86==x87))/x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MAX;
	volatile uint32_t x90 = UINT32_MAX;
	static int16_t x91 = 4;
	int8_t x92 = 7;
	int32_t t20 = 0;

	t20 = ((x89^(x90==x91))/x92);

	if (t20 != 306783378) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = UINT16_MAX;
	int8_t x94 = 44;
	static int16_t x95 = -160;
	int16_t x96 = INT16_MAX;
	volatile int32_t t21 = -1;

	t21 = ((x93^(x94==x95))/x96);

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = 202;
	uint16_t x98 = 92U;
	static uint32_t x99 = UINT32_MAX;
	volatile uint64_t t22 = 1542LLU;

	t22 = ((x97^(x98==x99))/x100);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MAX;
	int64_t x103 = 14523977LL;
	static uint8_t x104 = UINT8_MAX;
	int32_t t23 = 165;

	t23 = ((x101^(x102==x103))/x104);

	if (t23 != -8421504) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x105 = INT64_MIN;
	int32_t x106 = INT32_MIN;
	volatile uint64_t x107 = UINT64_MAX;
	static int64_t x108 = -12082029293LL;

	t24 = ((x105^(x106==x107))/x108);

	if (t24 != 763395934LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	static int32_t x110 = -66;
	static int8_t x111 = 0;
	int32_t x112 = 27003;
	volatile int32_t t25 = -89;

	t25 = ((x109^(x110==x111))/x112);

	if (t25 != -79527) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = -7979LL;
	int64_t x114 = -1LL;
	int16_t x115 = INT16_MIN;
	static int8_t x116 = INT8_MIN;
	int64_t t26 = -336917749044LL;

	t26 = ((x113^(x114==x115))/x116);

	if (t26 != 62LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = -460936450543367LL;
	int64_t x118 = INT64_MAX;
	static volatile int16_t x119 = -1;
	int8_t x120 = INT8_MAX;
	int64_t t27 = -10995942875309945LL;

	t27 = ((x117^(x118==x119))/x120);

	if (t27 != -3629420870420LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x121 = INT16_MAX;
	int16_t x122 = 3;
	int64_t x123 = -85816994623LL;
	static int16_t x124 = INT16_MAX;
	volatile int32_t t28 = 7346;

	t28 = ((x121^(x122==x123))/x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x126 = 1U;
	int16_t x127 = 30;
	static uint64_t x128 = 23003680130LLU;

	t29 = ((x125^(x126==x127))/x128);

	if (t29 != 801904041LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MIN;
	uint16_t x131 = 1387U;
	volatile int64_t t30 = -932LL;

	t30 = ((x129^(x130==x131))/x132);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x135 = 15U;
	uint8_t x136 = 1U;
	int64_t t31 = INT64_MIN;

	t31 = ((x133^(x134==x135))/x136);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x137 = 21449U;
	uint8_t x139 = 1U;
	int32_t t32 = -5047989;

	t32 = ((x137^(x138==x139))/x140);

	if (t32 != 168) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x141 = -1;
	int16_t x142 = INT16_MIN;
	volatile uint16_t x143 = 1259U;
	int16_t x144 = INT16_MIN;
	int32_t t33 = 7434061;

	t33 = ((x141^(x142==x143))/x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x145 = INT8_MIN;
	uint64_t x147 = UINT64_MAX;
	int32_t t34 = 6;

	t34 = ((x145^(x146==x147))/x148);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = UINT64_MAX;
	int64_t x150 = INT64_MIN;
	uint32_t x151 = 1243U;
	static volatile int32_t x152 = -1;
	volatile uint64_t t35 = 9338727766LLU;

	t35 = ((x149^(x150==x151))/x152);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x153 = -1;
	uint8_t x154 = 12U;
	int16_t x155 = INT16_MIN;
	uint64_t x156 = 3349403753LLU;
	static uint64_t t36 = 237459939759855LLU;

	t36 = ((x153^(x154==x155))/x156);

	if (t36 != 5507471010LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 2U;
	volatile int64_t x159 = INT64_MAX;
	static int8_t x160 = INT8_MAX;
	volatile int32_t t37 = 89;

	t37 = ((x157^(x158==x159))/x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = INT32_MIN;
	int32_t x162 = 0;
	int16_t x163 = -1;
	static int64_t x164 = -1380012285LL;
	int64_t t38 = -843618635005816649LL;

	t38 = ((x161^(x162==x163))/x164);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x166 = INT32_MIN;
	volatile int8_t x167 = -1;
	volatile int8_t x168 = -30;
	volatile int32_t t39 = 6;

	t39 = ((x165^(x166==x167))/x168);

	if (t39 != 71582788) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x169 = -1;
	int8_t x170 = INT8_MIN;
	int64_t x172 = INT64_MIN;
	volatile int64_t t40 = -127213448757LL;

	t40 = ((x169^(x170==x171))/x172);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	static uint64_t x174 = 22739416208737LLU;
	static uint32_t x175 = 1899993798U;
	static int8_t x176 = -36;
	volatile int32_t t41 = 20710076;

	t41 = ((x173^(x174==x175))/x176);

	if (t41 != 910) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = -3;
	static int64_t x178 = INT64_MAX;
	static int64_t x179 = 1839LL;
	int8_t x180 = INT8_MIN;
	static int32_t t42 = 348;

	t42 = ((x177^(x178==x179))/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x182 = INT16_MIN;
	volatile uint8_t x183 = 2U;
	int32_t t43 = 1;

	t43 = ((x181^(x182==x183))/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 51418U;
	int8_t x186 = INT8_MIN;
	volatile int32_t x188 = 570800;
	uint32_t t44 = 1U;

	t44 = ((x185^(x186==x187))/x188);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MIN;
	uint8_t x190 = 94U;
	int64_t x191 = INT64_MIN;
	volatile int8_t x192 = 1;
	int64_t t45 = INT64_MIN;

	t45 = ((x189^(x190==x191))/x192);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x195 = 15;
	int16_t x196 = -194;
	uint64_t t46 = 29014469LLU;

	t46 = ((x193^(x194==x195))/x196);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MAX;
	uint64_t x198 = 12271798LLU;
	static int64_t x199 = -1LL;
	static int64_t x200 = INT64_MIN;
	volatile int64_t t47 = -1084196371068585LL;

	t47 = ((x197^(x198==x199))/x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x201 = INT16_MIN;
	uint32_t x202 = 1915479U;
	volatile int8_t x203 = -1;
	int32_t x204 = -4158289;
	int32_t t48 = -1;

	t48 = ((x201^(x202==x203))/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x207 = INT32_MIN;
	int64_t x208 = INT64_MIN;
	int64_t t49 = 6886600507810LL;

	t49 = ((x205^(x206==x207))/x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = 23LL;
	static volatile int8_t x211 = INT8_MIN;
	int8_t x212 = -1;
	int64_t t50 = 2253938LL;

	t50 = ((x209^(x210==x211))/x212);

	if (t50 != -23LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x216 = 8;
	volatile int32_t t51 = 277669564;

	t51 = ((x213^(x214==x215))/x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x217 = -1;
	int16_t x218 = -1;
	int64_t x219 = INT64_MIN;
	static int32_t x220 = -639;
	volatile int32_t t52 = 10;

	t52 = ((x217^(x218==x219))/x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = INT64_MIN;
	static int32_t x222 = -3433;
	static int16_t x223 = -1;
	volatile int16_t x224 = INT16_MIN;
	volatile int64_t t53 = 53939223870574LL;

	t53 = ((x221^(x222==x223))/x224);

	if (t53 != 281474976710656LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = -1;
	uint16_t x226 = UINT16_MAX;
	static volatile int32_t x227 = INT32_MAX;
	uint8_t x228 = UINT8_MAX;
	int32_t t54 = -33848163;

	t54 = ((x225^(x226==x227))/x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = 1LLU;
	int32_t x230 = 425;
	int8_t x231 = 7;
	uint8_t x232 = UINT8_MAX;

	t55 = ((x229^(x230==x231))/x232);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x233 = -51752241794LL;
	static int8_t x234 = 57;
	uint16_t x235 = UINT16_MAX;
	int64_t x236 = INT64_MIN;
	int64_t t56 = -346299891918LL;

	t56 = ((x233^(x234==x235))/x236);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x237 = 12;
	static int8_t x238 = 23;
	volatile uint16_t x239 = 23U;
	int64_t x240 = INT64_MIN;
	static volatile int64_t t57 = -16940LL;

	t57 = ((x237^(x238==x239))/x240);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = -1;
	int8_t x242 = -4;
	static int32_t x243 = 596068;
	static uint16_t x244 = 246U;
	int32_t t58 = -2565;

	t58 = ((x241^(x242==x243))/x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	int16_t x247 = 212;
	uint32_t x248 = UINT32_MAX;
	static volatile uint32_t t59 = 56892U;

	t59 = ((x245^(x246==x247))/x248);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x254 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	int8_t x256 = 13;
	int32_t t60 = 6507769;

	t60 = ((x253^(x254==x255))/x256);

	if (t60 != -2520) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x257 = INT64_MAX;
	static int32_t x258 = INT32_MIN;
	volatile uint16_t x259 = 5U;
	int64_t x260 = INT64_MAX;
	static int64_t t61 = -7096427LL;

	t61 = ((x257^(x258==x259))/x260);

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x261 = 15375397LLU;
	int64_t x262 = 271508976577159LL;
	volatile int64_t x263 = -1LL;
	int32_t x264 = INT32_MIN;
	uint64_t t62 = 53690627LLU;

	t62 = ((x261^(x262==x263))/x264);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x267 = 1U;
	static int32_t t63 = -2557924;

	t63 = ((x265^(x266==x267))/x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x269 = 3U;
	uint16_t x270 = UINT16_MAX;
	volatile uint64_t x272 = 1837LLU;
	volatile uint64_t t64 = 107515LLU;

	t64 = ((x269^(x270==x271))/x272);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = -1;
	int8_t x274 = 6;
	uint64_t x275 = UINT64_MAX;
	int32_t t65 = 118894180;

	t65 = ((x273^(x274==x275))/x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x278 = 0;
	volatile int32_t x280 = INT32_MAX;
	volatile int32_t t66 = -734352490;

	t66 = ((x277^(x278==x279))/x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = INT16_MAX;
	uint16_t x282 = 994U;
	int32_t x283 = -1;
	int64_t t67 = -1LL;

	t67 = ((x281^(x282==x283))/x284);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x285 = INT64_MAX;
	int16_t x286 = INT16_MAX;
	static uint64_t x287 = UINT64_MAX;

	t68 = ((x285^(x286==x287))/x288);

	if (t68 != 281483566907400LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = 17;
	volatile int64_t x290 = INT64_MIN;
	static int64_t x291 = -47004062LL;
	static int64_t x292 = INT64_MIN;
	volatile int64_t t69 = 22227895973323097LL;

	t69 = ((x289^(x290==x291))/x292);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x293 = 150847175;
	uint32_t x294 = UINT32_MAX;
	uint64_t x295 = 46716LLU;
	volatile int32_t x296 = INT32_MAX;
	int32_t t70 = -26;

	t70 = ((x293^(x294==x295))/x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x297 = 10;
	int16_t x299 = INT16_MIN;
	uint8_t x300 = 1U;
	volatile int32_t t71 = -4943;

	t71 = ((x297^(x298==x299))/x300);

	if (t71 != 10) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x301 = 20862905637193929LLU;
	int16_t x303 = INT16_MIN;
	int8_t x304 = 1;
	static uint64_t t72 = 1789203340410262719LLU;

	t72 = ((x301^(x302==x303))/x304);

	if (t72 != 20862905637193929LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = INT32_MIN;
	int64_t x307 = 10975LL;
	volatile int8_t x308 = INT8_MIN;
	volatile int32_t t73 = -238919570;

	t73 = ((x305^(x306==x307))/x308);

	if (t73 != 16777216) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = INT32_MIN;
	volatile uint16_t x310 = UINT16_MAX;
	static uint8_t x311 = UINT8_MAX;
	volatile int32_t x312 = 286;
	static volatile int32_t t74 = -35;

	t74 = ((x309^(x310==x311))/x312);

	if (t74 != -7508684) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x313 = 101U;
	int32_t x314 = INT32_MIN;
	int32_t x315 = -1;
	static int32_t x316 = 3254;

	t75 = ((x313^(x314==x315))/x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x318 = 26;
	static int8_t x319 = 1;
	volatile int64_t x320 = INT64_MAX;
	volatile int64_t t76 = -450900752311111645LL;

	t76 = ((x317^(x318==x319))/x320);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x321 = INT8_MIN;
	int8_t x322 = INT8_MAX;
	volatile int32_t x323 = INT32_MAX;
	uint8_t x324 = 67U;
	int32_t t77 = -763127;

	t77 = ((x321^(x322==x323))/x324);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MAX;
	volatile int8_t x326 = INT8_MIN;
	static int32_t x327 = INT32_MAX;
	int16_t x328 = -6;
	int32_t t78 = 3357927;

	t78 = ((x325^(x326==x327))/x328);

	if (t78 != -5461) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x329 = 7U;
	int64_t x330 = INT64_MAX;
	int64_t x331 = 81LL;
	int16_t x332 = 1;
	volatile uint32_t t79 = 6451U;

	t79 = ((x329^(x330==x331))/x332);

	if (t79 != 7U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = INT64_MIN;
	static int8_t x334 = INT8_MIN;
	static int16_t x335 = -1;
	int32_t x336 = INT32_MIN;
	volatile int64_t t80 = -46LL;

	t80 = ((x333^(x334==x335))/x336);

	if (t80 != 4294967296LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = 99LL;
	volatile uint64_t x338 = UINT64_MAX;
	int16_t x339 = INT16_MIN;
	int64_t t81 = 221334516486225LL;

	t81 = ((x337^(x338==x339))/x340);

	if (t81 != -99LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x341 = 193938394U;
	int32_t x342 = -1;
	int16_t x343 = -52;
	uint64_t x344 = 2548469437LLU;

	t82 = ((x341^(x342==x343))/x344);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = -1;
	uint64_t x346 = UINT64_MAX;
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = 1212;
	volatile int32_t t83 = 798866;

	t83 = ((x345^(x346==x347))/x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x349 = UINT8_MAX;
	uint32_t x350 = 3U;
	static int8_t x351 = INT8_MIN;
	volatile uint8_t x352 = 2U;
	static volatile int32_t t84 = 254;

	t84 = ((x349^(x350==x351))/x352);

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = -1;
	int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MAX;
	int16_t x356 = INT16_MAX;
	static int32_t t85 = -84;

	t85 = ((x353^(x354==x355))/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x357 = UINT64_MAX;
	uint8_t x358 = 1U;
	volatile int8_t x359 = 2;
	static int64_t x360 = INT64_MAX;
	static volatile uint64_t t86 = 18965337581LLU;

	t86 = ((x357^(x358==x359))/x360);

	if (t86 != 2LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x362 = INT8_MIN;
	int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MIN;
	int64_t t87 = 86658622LL;

	t87 = ((x361^(x362==x363))/x364);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x365 = UINT8_MAX;
	uint64_t x368 = 1LLU;
	uint64_t t88 = 210869166427LLU;

	t88 = ((x365^(x366==x367))/x368);

	if (t88 != 255LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = INT8_MIN;
	int32_t x370 = INT32_MIN;
	int16_t x372 = INT16_MIN;
	int32_t t89 = -6934;

	t89 = ((x369^(x370==x371))/x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x375 = 119U;
	static int8_t x376 = INT8_MIN;
	volatile int32_t t90 = -2117;

	t90 = ((x373^(x374==x375))/x376);

	if (t90 != 16777216) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x377 = UINT32_MAX;
	static uint16_t x378 = 82U;
	uint32_t t91 = 31283643U;

	t91 = ((x377^(x378==x379))/x380);

	if (t91 != 65537U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x381 = UINT32_MAX;
	uint32_t x382 = 2114353142U;
	uint64_t x383 = UINT64_MAX;
	uint32_t x384 = UINT32_MAX;
	static uint32_t t92 = 206756U;

	t92 = ((x381^(x382==x383))/x384);

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = 58;
	uint16_t x386 = UINT16_MAX;
	volatile int32_t x387 = -354080;
	int64_t x388 = -7459362LL;
	volatile int64_t t93 = -37047562956LL;

	t93 = ((x385^(x386==x387))/x388);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = 0;
	volatile int16_t x390 = -2;
	uint64_t x391 = UINT64_MAX;
	static int32_t x392 = INT32_MAX;
	int32_t t94 = -7500;

	t94 = ((x389^(x390==x391))/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x396 = INT8_MAX;
	volatile int64_t t95 = 82975689370338353LL;

	t95 = ((x393^(x394==x395))/x396);

	if (t95 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x398 = -207;
	uint64_t x399 = 2036129746987713LLU;
	uint8_t x400 = 2U;
	int32_t t96 = 0;

	t96 = ((x397^(x398==x399))/x400);

	if (t96 != 1073741823) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x401 = -1LL;
	volatile uint8_t x402 = 22U;
	uint8_t x403 = 2U;
	volatile int64_t x404 = INT64_MAX;

	t97 = ((x401^(x402==x403))/x404);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x405 = 58696LLU;
	int64_t x406 = 10LL;
	int8_t x407 = -2;
	int64_t x408 = 24052LL;
	volatile uint64_t t98 = 14531222LLU;

	t98 = ((x405^(x406==x407))/x408);

	if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = -18LL;
	volatile uint8_t x410 = UINT8_MAX;

	t99 = ((x409^(x410==x411))/x412);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

