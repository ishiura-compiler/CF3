#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = INT32_MAX;
static int8_t x14 = INT8_MIN;
volatile int32_t x15 = INT32_MIN;
volatile int32_t t3 = 126;
volatile int16_t x28 = INT16_MIN;
uint8_t x29 = UINT8_MAX;
volatile uint64_t x32 = 3704815LLU;
static int8_t x36 = INT8_MIN;
int32_t t8 = -1;
volatile int8_t x42 = INT8_MAX;
static volatile uint8_t x43 = UINT8_MAX;
static int32_t t10 = 115;
int32_t x45 = -119288714;
uint8_t x50 = UINT8_MAX;
uint32_t x53 = UINT32_MAX;
int8_t x59 = -15;
static uint64_t x62 = 223549596LLU;
uint16_t x63 = 196U;
volatile int64_t t16 = 1LL;
int64_t x72 = -1LL;
volatile int32_t t21 = -19;
volatile int16_t x94 = -5;
int32_t t23 = -122326;
uint8_t x98 = UINT8_MAX;
volatile int16_t x99 = INT16_MIN;
uint64_t x101 = 17LLU;
uint64_t t25 = 6504116444513LLU;
int32_t x105 = -2054;
uint8_t x108 = UINT8_MAX;
int32_t x109 = 309;
static int64_t x110 = 855402613363LL;
int32_t x114 = -4;
int32_t t28 = 245084;
int16_t x129 = INT16_MIN;
volatile int16_t x133 = INT16_MAX;
int64_t x134 = -3LL;
volatile int32_t t33 = 171;
volatile int64_t x137 = INT64_MIN;
static int16_t x138 = -1;
static volatile int64_t t34 = 11742907549LL;
int32_t x142 = INT32_MAX;
uint16_t x150 = 63U;
volatile int8_t x151 = INT8_MIN;
static int16_t x155 = -1;
volatile int32_t t38 = 0;
int16_t x171 = INT16_MIN;
int16_t x183 = INT16_MIN;
int8_t x184 = 1;
int64_t x185 = -41006384709LL;
int16_t x192 = -1;
int8_t x194 = -2;
static volatile int32_t t48 = -2788;
static uint16_t x201 = 1009U;
static int32_t x202 = -25319;
volatile int64_t x207 = -1LL;
uint32_t x208 = 13161U;
int64_t x209 = INT64_MAX;
volatile int32_t t53 = -692;
static int32_t t54 = -1115393;
static int16_t x224 = -1;
int32_t t55 = -7227204;
uint8_t x232 = 1U;
int32_t x236 = -1;
uint64_t x237 = 16739755399522LLU;
int16_t x243 = INT16_MAX;
volatile int32_t t60 = -178236877;
int32_t x245 = INT32_MIN;
static uint32_t x246 = 150931322U;
static int8_t x247 = -60;
int64_t x249 = INT64_MAX;
volatile int64_t t62 = 118LL;
int16_t x255 = INT16_MIN;
volatile int16_t x272 = INT16_MIN;
static volatile uint8_t x275 = 39U;
int8_t x276 = INT8_MIN;
static uint16_t x278 = 12038U;
volatile uint8_t x291 = UINT8_MAX;
volatile uint16_t x302 = 0U;
static volatile int8_t x305 = 2;
int16_t x306 = INT16_MAX;
static int64_t x310 = -1LL;
int64_t x311 = -1LL;
static int32_t t77 = 78967881;
static int32_t t78 = -1872863;
int32_t x318 = INT32_MIN;
static volatile uint64_t x328 = UINT64_MAX;
volatile int64_t x333 = -54052LL;
static volatile int8_t x336 = -1;
static int64_t x337 = INT64_MIN;
uint8_t x338 = UINT8_MAX;
static int8_t x351 = -1;
static int16_t x353 = INT16_MAX;
volatile int32_t t88 = -12858374;
volatile int64_t x362 = -215349943577822LL;
static int32_t t92 = -7;
static volatile int8_t x373 = -6;
int8_t x393 = -7;
int32_t t98 = -963265246;
int32_t x399 = -60;
int64_t x400 = -1LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static uint64_t x3 = 55185712796877LLU;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -1;

	t0 = (x1^((x2|x3)<=x4));

	if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 1;
	int64_t x6 = 1380854492028LL;
	int64_t x7 = INT64_MAX;
	int64_t x8 = -1LL;
	volatile int32_t t1 = 9159198;

	t1 = (x5^((x6|x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	static uint16_t x10 = 12843U;
	int64_t x11 = 76511LL;
	volatile uint16_t x12 = 1656U;
	volatile int32_t t2 = 1174047;

	t2 = (x9^((x10|x11)<=x12));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint32_t x16 = 1019612279U;

	t3 = (x13^((x14|x15)<=x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 17;
	int8_t x18 = -1;
	volatile int16_t x19 = -1;
	static int16_t x20 = -1;
	volatile int32_t t4 = 21;

	t4 = (x17^((x18|x19)<=x20));

	if (t4 != 16) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int32_t x22 = INT32_MIN;
	static uint32_t x23 = 87U;
	uint32_t x24 = 736441U;
	volatile int32_t t5 = 291037;

	t5 = (x21^((x22|x23)<=x24));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	uint64_t x26 = UINT64_MAX;
	static volatile int16_t x27 = 0;
	volatile int64_t t6 = -3700611069998834651LL;

	t6 = (x25^((x26|x27)<=x28));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 106758440U;
	uint16_t x31 = UINT16_MAX;
	volatile int32_t t7 = 105868;

	t7 = (x29^((x30|x31)<=x32));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int32_t x34 = INT32_MIN;
	volatile int16_t x35 = INT16_MAX;

	t8 = (x33^((x34|x35)<=x36));

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	uint32_t x38 = 76121U;
	static int16_t x39 = 0;
	int64_t x40 = INT64_MAX;
	volatile int32_t t9 = -1;

	t9 = (x37^((x38|x39)<=x40));

	if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint16_t x44 = UINT16_MAX;

	t10 = (x41^((x42|x43)<=x44));

	if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x46 = INT32_MAX;
	uint64_t x47 = 1479485367944523155LLU;
	static uint8_t x48 = 21U;
	volatile int32_t t11 = -83;

	t11 = (x45^((x46|x47)<=x48));

	if (t11 != -119288714) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int64_t x51 = -1LL;
	int32_t x52 = 791217;
	int32_t t12 = 6454909;

	t12 = (x49^((x50|x51)<=x52));

	if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = 4619U;
	volatile uint32_t x55 = UINT32_MAX;
	static volatile int16_t x56 = INT16_MIN;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = (x53^((x54|x55)<=x56));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MAX;
	uint32_t x58 = 751974U;
	int16_t x60 = -4;
	static volatile int32_t t14 = 489031598;

	t14 = (x57^((x58|x59)<=x60));

	if (t14 != 2147483646) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -97339576395LL;
	static int64_t x64 = -51442LL;
	static int64_t t15 = 7020785LL;

	t15 = (x61^((x62|x63)<=x64));

	if (t15 != -97339576396LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = 699LL;
	int64_t x66 = INT64_MAX;
	volatile int32_t x67 = INT32_MIN;
	static int64_t x68 = INT64_MAX;

	t16 = (x65^((x66|x67)<=x68));

	if (t16 != 698LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = 299773918U;
	uint64_t x70 = 271714LLU;
	int32_t x71 = INT32_MIN;
	volatile uint32_t t17 = 29724370U;

	t17 = (x69^((x70|x71)<=x72));

	if (t17 != 299773919U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 495982879U;
	static volatile uint16_t x74 = 0U;
	int64_t x75 = INT64_MIN;
	uint16_t x76 = UINT16_MAX;
	volatile uint32_t t18 = 125071U;

	t18 = (x73^((x74|x75)<=x76));

	if (t18 != 495982878U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int64_t x78 = -1804569LL;
	int32_t x79 = 49;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t19 = 18724;

	t19 = (x77^((x78|x79)<=x80));

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MAX;
	int32_t x82 = 256720;
	volatile int32_t x83 = INT32_MIN;
	static int16_t x84 = INT16_MIN;
	static int32_t t20 = 0;

	t20 = (x81^((x82|x83)<=x84));

	if (t20 != 32766) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	uint32_t x86 = UINT32_MAX;
	int32_t x87 = 2248344;
	int64_t x88 = INT64_MIN;

	t21 = (x85^((x86|x87)<=x88));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	volatile int32_t x90 = -383;
	int8_t x91 = -13;
	int32_t x92 = -45;
	int32_t t22 = INT32_MAX;

	t22 = (x89^((x90|x91)<=x92));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	int8_t x95 = INT8_MAX;
	uint8_t x96 = UINT8_MAX;

	t23 = (x93^((x94|x95)<=x96));

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int32_t x100 = -1;
	volatile int32_t t24 = -1;

	t24 = (x97^((x98|x99)<=x100));

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x102 = -1;
	uint64_t x103 = 16097595627699813LLU;
	static uint8_t x104 = 6U;

	t25 = (x101^((x102|x103)<=x104));

	if (t25 != 17LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = INT32_MIN;
	static int8_t x107 = 0;
	int32_t t26 = 288625;

	t26 = (x105^((x106|x107)<=x108));

	if (t26 != -2053) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x111 = -10;
	int8_t x112 = -1;
	int32_t t27 = -177830;

	t27 = (x109^((x110|x111)<=x112));

	if (t27 != 308) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x113 = 1;
	static int64_t x115 = INT64_MIN;
	uint32_t x116 = 436035U;

	t28 = (x113^((x114|x115)<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 0LL;
	uint8_t x118 = 0U;
	static int64_t x119 = INT64_MIN;
	static int8_t x120 = -1;
	volatile int64_t t29 = -3068840LL;

	t29 = (x117^((x118|x119)<=x120));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 8764291418616490LLU;
	static int32_t x122 = 9923012;
	static int32_t x123 = INT32_MAX;
	uint16_t x124 = 17U;
	uint64_t t30 = 0LLU;

	t30 = (x121^((x122|x123)<=x124));

	if (t30 != 8764291418616490LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 56007414LLU;
	volatile uint16_t x126 = 1639U;
	int64_t x127 = INT64_MAX;
	static uint32_t x128 = 500800598U;
	volatile uint64_t t31 = 200820637LLU;

	t31 = (x125^((x126|x127)<=x128));

	if (t31 != 56007414LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 81U;
	static volatile int64_t x131 = -31364780LL;
	volatile int8_t x132 = INT8_MIN;
	volatile int32_t t32 = 588746787;

	t32 = (x129^((x130|x131)<=x132));

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x135 = 1796113456U;
	int64_t x136 = INT64_MAX;

	t33 = (x133^((x134|x135)<=x136));

	if (t33 != 32766) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x139 = -1;
	uint16_t x140 = 1622U;

	t34 = (x137^((x138|x139)<=x140));

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 0U;
	static int64_t x143 = -2219LL;
	int16_t x144 = -2;
	volatile int32_t t35 = -217;

	t35 = (x141^((x142|x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 48U;
	static volatile int8_t x146 = -9;
	uint32_t x147 = 382U;
	static uint16_t x148 = 5243U;
	volatile int32_t t36 = 1;

	t36 = (x145^((x146|x147)<=x148));

	if (t36 != 48) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int16_t x152 = -1;
	int64_t t37 = 13300423779316LL;

	t37 = (x149^((x150|x151)<=x152));

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	static int64_t x154 = INT64_MAX;
	static uint16_t x156 = 6377U;

	t38 = (x153^((x154|x155)<=x156));

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x157 = 724U;
	int8_t x158 = INT8_MIN;
	int8_t x159 = 36;
	uint8_t x160 = UINT8_MAX;
	int32_t t39 = 90760;

	t39 = (x157^((x158|x159)<=x160));

	if (t39 != 725) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 61U;
	static uint8_t x162 = UINT8_MAX;
	uint16_t x163 = 6527U;
	uint8_t x164 = UINT8_MAX;
	int32_t t40 = -81286825;

	t40 = (x161^((x162|x163)<=x164));

	if (t40 != 61) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 1506237202LLU;
	int64_t x166 = -8LL;
	int64_t x167 = -1250799420LL;
	static int32_t x168 = -1;
	static uint64_t t41 = 27592094881LLU;

	t41 = (x165^((x166|x167)<=x168));

	if (t41 != 1506237203LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	volatile int16_t x170 = -1;
	static int32_t x172 = -1;
	int32_t t42 = 111180453;

	t42 = (x169^((x170|x171)<=x172));

	if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	volatile int8_t x174 = -4;
	int32_t x175 = 19;
	static volatile int8_t x176 = INT8_MIN;
	static int32_t t43 = INT32_MIN;

	t43 = (x173^((x174|x175)<=x176));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 1;
	static int64_t x178 = INT64_MIN;
	volatile uint16_t x179 = 1872U;
	uint32_t x180 = 3762U;
	static int32_t t44 = -110232;

	t44 = (x177^((x178|x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 2;
	int16_t x182 = INT16_MAX;
	int32_t t45 = 177705585;

	t45 = (x181^((x182|x183)<=x184));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = -1;
	int64_t x187 = INT64_MIN;
	uint8_t x188 = 7U;
	int64_t t46 = -8715LL;

	t46 = (x185^((x186|x187)<=x188));

	if (t46 != -41006384710LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -21;
	static int64_t x190 = INT64_MIN;
	int32_t x191 = INT32_MIN;
	int32_t t47 = -487;

	t47 = (x189^((x190|x191)<=x192));

	if (t47 != -22) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = -1;
	volatile uint32_t x195 = 3148528U;
	volatile int8_t x196 = INT8_MIN;

	t48 = (x193^((x194|x195)<=x196));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	int16_t x198 = 3725;
	uint32_t x199 = 1U;
	int8_t x200 = INT8_MAX;
	int32_t t49 = INT32_MAX;

	t49 = (x197^((x198|x199)<=x200));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x203 = -1;
	uint16_t x204 = 7U;
	int32_t t50 = -185751225;

	t50 = (x201^((x202|x203)<=x204));

	if (t50 != 1008) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = INT16_MIN;
	volatile int16_t x206 = INT16_MAX;
	int32_t t51 = 717218069;

	t51 = (x205^((x206|x207)<=x208));

	if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x210 = INT16_MIN;
	volatile int64_t x211 = -1LL;
	volatile int8_t x212 = -10;
	int64_t t52 = INT64_MAX;

	t52 = (x209^((x210|x211)<=x212));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	static int8_t x214 = -1;
	uint16_t x215 = 448U;
	volatile int64_t x216 = 3996LL;

	t53 = (x213^((x214|x215)<=x216));

	if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x217 = INT16_MAX;
	uint32_t x218 = 71983U;
	uint32_t x219 = 854706856U;
	int8_t x220 = -11;

	t54 = (x217^((x218|x219)<=x220));

	if (t54 != 32766) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = UINT8_MAX;
	int16_t x222 = -14567;
	int8_t x223 = 1;

	t55 = (x221^((x222|x223)<=x224));

	if (t55 != 254) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x225 = 1U;
	int32_t x226 = INT32_MIN;
	int32_t x227 = INT32_MIN;
	int8_t x228 = INT8_MIN;
	int32_t t56 = 71106579;

	t56 = (x225^((x226|x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	uint16_t x230 = 14U;
	uint32_t x231 = 461744299U;
	volatile int32_t t57 = -258487;

	t57 = (x229^((x230|x231)<=x232));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	volatile uint8_t x234 = 6U;
	static int16_t x235 = -35;
	int32_t t58 = -5;

	t58 = (x233^((x234|x235)<=x236));

	if (t58 != -127) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x238 = -1;
	int32_t x239 = INT32_MIN;
	int8_t x240 = 51;
	static volatile uint64_t t59 = 41589350410LLU;

	t59 = (x237^((x238|x239)<=x240));

	if (t59 != 16739755399523LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = -1;
	int8_t x242 = INT8_MAX;
	int8_t x244 = -1;

	t60 = (x241^((x242|x243)<=x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t61 = INT32_MIN;

	t61 = (x245^((x246|x247)<=x248));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x250 = UINT32_MAX;
	int8_t x251 = INT8_MIN;
	static int16_t x252 = -1;

	t62 = (x249^((x250|x251)<=x252));

	if (t62 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	static volatile uint8_t x254 = 82U;
	volatile int16_t x256 = 602;
	int32_t t63 = -346629;

	t63 = (x253^((x254|x255)<=x256));

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = 0;
	int16_t x258 = 97;
	volatile int8_t x259 = 3;
	uint8_t x260 = 119U;
	int32_t t64 = 1;

	t64 = (x257^((x258|x259)<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MIN;
	int32_t x262 = INT32_MIN;
	uint8_t x263 = UINT8_MAX;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = -259151666;

	t65 = (x261^((x262|x263)<=x264));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x265 = -23;
	int64_t x266 = -89007260LL;
	int16_t x267 = INT16_MIN;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = -27827;

	t66 = (x265^((x266|x267)<=x268));

	if (t66 != -24) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = INT64_MIN;
	int16_t x270 = -1;
	static int32_t x271 = 15978071;
	int64_t t67 = INT64_MIN;

	t67 = (x269^((x270|x271)<=x272));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	static uint64_t x274 = 5775402LLU;
	int32_t t68 = 0;

	t68 = (x273^((x274|x275)<=x276));

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 6208379LLU;
	int8_t x279 = INT8_MIN;
	static int16_t x280 = INT16_MAX;
	uint64_t t69 = 3219LLU;

	t69 = (x277^((x278|x279)<=x280));

	if (t69 != 6208378LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = INT16_MIN;
	uint64_t x282 = 4945239493292LLU;
	int64_t x283 = -1LL;
	int16_t x284 = 8;
	static int32_t t70 = -61;

	t70 = (x281^((x282|x283)<=x284));

	if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MIN;
	uint16_t x286 = 796U;
	int16_t x287 = -6;
	uint8_t x288 = 1U;
	int32_t t71 = 15173;

	t71 = (x285^((x286|x287)<=x288));

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = UINT8_MAX;
	volatile int16_t x290 = INT16_MAX;
	int64_t x292 = INT64_MAX;
	volatile int32_t t72 = -6;

	t72 = (x289^((x290|x291)<=x292));

	if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MAX;
	uint32_t x294 = UINT32_MAX;
	static int16_t x295 = INT16_MIN;
	int16_t x296 = -1;
	volatile int32_t t73 = 575;

	t73 = (x293^((x294|x295)<=x296));

	if (t73 != 2147483646) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 14;
	static volatile int8_t x298 = INT8_MIN;
	int16_t x299 = -1;
	int16_t x300 = INT16_MAX;
	static int32_t t74 = -1082;

	t74 = (x297^((x298|x299)<=x300));

	if (t74 != 15) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	uint32_t x303 = 50U;
	volatile int8_t x304 = INT8_MAX;
	int32_t t75 = 12384576;

	t75 = (x301^((x302|x303)<=x304));

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x307 = 0;
	int64_t x308 = INT64_MIN;
	int32_t t76 = 1;

	t76 = (x305^((x306|x307)<=x308));

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	static volatile uint16_t x312 = 1U;

	t77 = (x309^((x310|x311)<=x312));

	if (t77 != 126) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MAX;
	static uint32_t x314 = 44587U;
	volatile uint64_t x315 = 2758190695LLU;
	static uint32_t x316 = 20U;

	t78 = (x313^((x314|x315)<=x316));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	static int8_t x319 = 1;
	int64_t x320 = -1LL;
	volatile int32_t t79 = -28;

	t79 = (x317^((x318|x319)<=x320));

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 5U;
	static uint64_t x322 = UINT64_MAX;
	static uint64_t x323 = 3580LLU;
	static volatile int32_t x324 = 680018;
	uint32_t t80 = 3209386U;

	t80 = (x321^((x322|x323)<=x324));

	if (t80 != 5U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MIN;
	uint16_t x326 = 2054U;
	int32_t x327 = INT32_MIN;
	int32_t t81 = 38;

	t81 = (x325^((x326|x327)<=x328));

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 106U;
	uint32_t x330 = UINT32_MAX;
	uint64_t x331 = UINT64_MAX;
	uint64_t x332 = 435033777100LLU;
	volatile int32_t t82 = -1157606;

	t82 = (x329^((x330|x331)<=x332));

	if (t82 != 106) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = INT64_MAX;
	uint8_t x335 = 5U;
	int64_t t83 = -90944773497706271LL;

	t83 = (x333^((x334|x335)<=x336));

	if (t83 != -54052LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x339 = 10U;
	int8_t x340 = INT8_MIN;
	volatile int64_t t84 = INT64_MIN;

	t84 = (x337^((x338|x339)<=x340));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	static int16_t x342 = -1;
	int32_t x343 = -42;
	int32_t x344 = -1;
	volatile int64_t t85 = -14746835989084LL;

	t85 = (x341^((x342|x343)<=x344));

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	static int32_t x346 = INT32_MAX;
	uint32_t x347 = 7517U;
	uint64_t x348 = 107087618265LLU;
	volatile int32_t t86 = -208;

	t86 = (x345^((x346|x347)<=x348));

	if (t86 != 65534) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x349 = 443U;
	int8_t x350 = INT8_MAX;
	uint8_t x352 = 11U;
	volatile int32_t t87 = -428972;

	t87 = (x349^((x350|x351)<=x352));

	if (t87 != 442) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = -878543558;
	int32_t x355 = INT32_MIN;
	int16_t x356 = 4030;

	t88 = (x353^((x354|x355)<=x356));

	if (t88 != 32766) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int32_t x358 = 8281039;
	uint32_t x359 = 10464U;
	volatile int8_t x360 = INT8_MAX;
	static int32_t t89 = INT32_MIN;

	t89 = (x357^((x358|x359)<=x360));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = 70753914500590166LL;
	static int64_t x363 = INT64_MIN;
	int64_t x364 = 8739234251719LL;
	static volatile int64_t t90 = -7405021727749LL;

	t90 = (x361^((x362|x363)<=x364));

	if (t90 != 70753914500590167LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 6416;
	int32_t x366 = -2072;
	int64_t x367 = INT64_MIN;
	int16_t x368 = 13561;
	int32_t t91 = 0;

	t91 = (x365^((x366|x367)<=x368));

	if (t91 != 6417) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x369 = 0U;
	int32_t x370 = -18437;
	volatile int16_t x371 = INT16_MIN;
	static int32_t x372 = INT32_MIN;

	t92 = (x369^((x370|x371)<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x374 = 15807LLU;
	uint32_t x375 = 6561926U;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = -5035;

	t93 = (x373^((x374|x375)<=x376));

	if (t93 != -5) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	static int8_t x378 = -1;
	int32_t x379 = INT32_MIN;
	int16_t x380 = -41;
	int64_t t94 = -3341304881508137LL;

	t94 = (x377^((x378|x379)<=x380));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	int16_t x382 = INT16_MIN;
	int8_t x383 = INT8_MIN;
	int64_t x384 = INT64_MAX;
	int64_t t95 = -772LL;

	t95 = (x381^((x382|x383)<=x384));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x385 = UINT64_MAX;
	int64_t x386 = 19598551LL;
	uint32_t x387 = UINT32_MAX;
	volatile int32_t x388 = INT32_MIN;
	uint64_t t96 = UINT64_MAX;

	t96 = (x385^((x386|x387)<=x388));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x389 = INT16_MIN;
	static uint64_t x390 = UINT64_MAX;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MIN;
	int32_t t97 = 30;

	t97 = (x389^((x390|x391)<=x392));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = INT8_MAX;
	static int16_t x395 = -1;
	uint32_t x396 = 10211024U;

	t98 = (x393^((x394|x395)<=x396));

	if (t98 != -7) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	uint16_t x398 = 0U;
	volatile int64_t t99 = 1432192LL;

	t99 = (x397^((x398|x399)<=x400));

	if (t99 != -2LL) { NG(); } else { ; }
	
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

