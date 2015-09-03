#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 5U;
uint8_t x15 = UINT8_MAX;
int32_t x16 = INT32_MIN;
volatile int32_t t3 = 1;
int32_t x22 = INT32_MAX;
uint64_t x24 = 133380637642LLU;
volatile uint8_t x34 = UINT8_MAX;
int8_t x36 = INT8_MIN;
int8_t x39 = INT8_MIN;
uint8_t x46 = UINT8_MAX;
volatile uint32_t x48 = 475176U;
volatile uint32_t t11 = 11U;
static volatile int64_t x52 = -8LL;
int16_t x62 = 179;
volatile int32_t t15 = -51;
int8_t x67 = 1;
int16_t x69 = -1;
int64_t x72 = INT64_MIN;
int16_t x75 = 206;
volatile uint64_t t18 = 322642986508912023LLU;
static volatile int32_t t20 = 12112634;
uint8_t x94 = 3U;
int32_t t22 = -5;
static int32_t x108 = -1;
volatile int32_t t25 = -1285030;
uint64_t x114 = 2856533791485708116LLU;
int64_t x118 = -1LL;
int16_t x121 = INT16_MIN;
int16_t x122 = INT16_MIN;
static int8_t x128 = -1;
uint64_t x133 = UINT64_MAX;
static volatile int8_t x134 = -1;
int16_t x136 = 3;
uint64_t x140 = UINT64_MAX;
static volatile int8_t x145 = INT8_MAX;
static uint64_t x146 = UINT64_MAX;
uint32_t x150 = UINT32_MAX;
uint32_t x155 = 15338505U;
int64_t x157 = -1LL;
static uint8_t x158 = 13U;
uint64_t x159 = 1235984449LLU;
int32_t t38 = -7750158;
int64_t x162 = -1LL;
int32_t x163 = INT32_MIN;
uint8_t x165 = 0U;
uint32_t x166 = 2384U;
uint16_t x167 = UINT16_MAX;
static int16_t x174 = -1;
volatile int64_t x180 = INT64_MAX;
uint32_t x183 = 479U;
static int32_t t47 = -28732811;
uint16_t x197 = 3U;
int64_t x203 = 4139296LL;
volatile int64_t x206 = -1LL;
static volatile uint64_t t50 = 119732734122258LLU;
static volatile int32_t t51 = 3;
static uint32_t x214 = UINT32_MAX;
static int32_t x216 = INT32_MAX;
int32_t x222 = -1;
int8_t x226 = INT8_MAX;
static uint32_t x230 = 7745458U;
volatile uint32_t t56 = 9352769U;
int64_t x238 = -1LL;
uint16_t x245 = UINT16_MAX;
static int32_t x250 = INT32_MIN;
static uint8_t x251 = 30U;
int16_t x260 = 9139;
volatile int16_t x264 = -177;
static volatile uint16_t x267 = 33U;
volatile int64_t x270 = -1LL;
int8_t x277 = 52;
static int64_t x280 = INT64_MAX;
uint8_t x281 = 7U;
int16_t x282 = INT16_MIN;
int8_t x287 = 0;
volatile int8_t x297 = INT8_MAX;
int32_t t73 = 69554;
uint16_t x304 = UINT16_MAX;
volatile uint8_t x317 = 11U;
static int16_t x319 = -4;
static volatile int32_t t78 = -29357111;
int8_t x326 = INT8_MAX;
int64_t x327 = INT64_MAX;
int64_t x328 = -1LL;
int8_t x329 = INT8_MIN;
volatile int64_t x330 = -63459LL;
int16_t x337 = INT16_MIN;
uint16_t x341 = UINT16_MAX;
volatile int32_t t84 = 0;
static int64_t x352 = -1LL;
volatile int32_t x353 = INT32_MIN;
volatile int64_t t86 = 2LL;
static int32_t x377 = INT32_MAX;
int16_t x382 = 17;
uint32_t t93 = 221U;
int8_t x385 = -63;
static volatile int8_t x388 = -1;
int32_t x393 = -6745;
int64_t x395 = 89120452LL;
static uint16_t x405 = UINT16_MAX;
static uint32_t t99 = 3981360U;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int32_t x2 = -32970497;
	static volatile int16_t x3 = INT16_MIN;
	uint32_t x4 = 9U;

	t0 = ((x1<(x2|x3))%x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	volatile int64_t x6 = -1427402873273335127LL;
	int64_t x7 = INT64_MIN;
	volatile int64_t x8 = -1LL;
	volatile int64_t t1 = -826557LL;

	t1 = ((x5<(x6|x7))%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 265977528881655115LLU;
	int16_t x10 = INT16_MIN;
	uint16_t x11 = 36U;
	volatile int32_t x12 = -26119737;
	int32_t t2 = -813;

	t2 = ((x9<(x10|x11))%x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	int64_t x14 = INT64_MIN;

	t3 = ((x13<(x14|x15))%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = 20U;
	int32_t x18 = INT32_MIN;
	volatile uint8_t x19 = 15U;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -2307449;

	t4 = ((x17<(x18|x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	int16_t x23 = INT16_MIN;
	uint64_t t5 = 881482943350LLU;

	t5 = ((x21<(x22|x23))%x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	uint16_t x26 = 3U;
	static int16_t x27 = 626;
	volatile int16_t x28 = INT16_MAX;
	int32_t t6 = -430;

	t6 = ((x25<(x26|x27))%x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 18367U;
	int32_t x30 = INT32_MIN;
	static int32_t x31 = 385387076;
	int8_t x32 = 19;
	volatile int32_t t7 = 19676;

	t7 = ((x29<(x30|x31))%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	int64_t x35 = -1LL;
	volatile int32_t t8 = -1;

	t8 = ((x33<(x34|x35))%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 3763144659250LLU;
	int16_t x38 = 5;
	volatile int8_t x40 = INT8_MAX;
	volatile int32_t t9 = 402126;

	t9 = ((x37<(x38|x39))%x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	int8_t x42 = -1;
	volatile int32_t x43 = INT32_MIN;
	int64_t x44 = 45829LL;
	volatile int64_t t10 = 221767350LL;

	t10 = ((x41<(x42|x43))%x44);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MIN;
	volatile int64_t x47 = -216LL;

	t11 = ((x45<(x46|x47))%x48);

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 57457625805787752LLU;
	static volatile int32_t x50 = INT32_MAX;
	uint64_t x51 = 615051649532LLU;
	int64_t t12 = 79LL;

	t12 = ((x49<(x50|x51))%x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	uint32_t x54 = 818893U;
	volatile int32_t x55 = -7955;
	int8_t x56 = INT8_MAX;
	int32_t t13 = 397527;

	t13 = ((x53<(x54|x55))%x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MIN;
	volatile uint8_t x59 = 50U;
	volatile int16_t x60 = 1;
	volatile int32_t t14 = -180293;

	t14 = ((x57<(x58|x59))%x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 3U;
	int32_t x63 = INT32_MIN;
	int32_t x64 = -84726;

	t15 = ((x61<(x62|x63))%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MAX;
	uint16_t x66 = UINT16_MAX;
	int32_t x68 = -1;
	int32_t t16 = -19928;

	t16 = ((x65<(x66|x67))%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x70 = 629U;
	int32_t x71 = INT32_MIN;
	int64_t t17 = 9075261524279LL;

	t17 = ((x69<(x70|x71))%x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MAX;
	int64_t x74 = INT64_MIN;
	uint64_t x76 = 12583127712748075LLU;

	t18 = ((x73<(x74|x75))%x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x77 = 295973582220LLU;
	int32_t x78 = INT32_MAX;
	int64_t x79 = INT64_MIN;
	static uint32_t x80 = 2U;
	uint32_t t19 = 5786427U;

	t19 = ((x77<(x78|x79))%x80);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	int8_t x82 = INT8_MIN;
	volatile int32_t x83 = INT32_MAX;
	static uint8_t x84 = 1U;

	t20 = ((x81<(x82|x83))%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 1U;
	int64_t x86 = INT64_MAX;
	static volatile int64_t x87 = INT64_MIN;
	uint16_t x88 = UINT16_MAX;
	static int32_t t21 = 18558;

	t21 = ((x85<(x86|x87))%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = UINT64_MAX;
	uint8_t x95 = 5U;
	static int32_t x96 = INT32_MIN;

	t22 = ((x93<(x94|x95))%x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MIN;
	int8_t x100 = INT8_MAX;
	int32_t t23 = 128482;

	t23 = ((x97<(x98|x99))%x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x101 = 6825U;
	static uint64_t x102 = UINT64_MAX;
	int32_t x103 = INT32_MIN;
	static int32_t x104 = -662188;
	int32_t t24 = -56898968;

	t24 = ((x101<(x102|x103))%x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x105 = -1LL;
	int64_t x106 = -1LL;
	volatile int8_t x107 = -1;

	t25 = ((x105<(x106|x107))%x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -21549738;
	uint8_t x110 = UINT8_MAX;
	int8_t x111 = INT8_MIN;
	int64_t x112 = 105242262531174LL;
	static int64_t t26 = -464965287LL;

	t26 = ((x109<(x110|x111))%x112);

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 1907385004285LLU;
	static int64_t x115 = 10033716945205LL;
	static int32_t x116 = 2827211;
	int32_t t27 = 1;

	t27 = ((x113<(x114|x115))%x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = INT16_MIN;
	int64_t x119 = -1884810LL;
	static volatile int64_t x120 = INT64_MAX;
	int64_t t28 = 14820900329497272LL;

	t28 = ((x117<(x118|x119))%x120);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x123 = 51U;
	static uint64_t x124 = UINT64_MAX;
	static uint64_t t29 = 357383187823970843LLU;

	t29 = ((x121<(x122|x123))%x124);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MIN;
	static uint64_t x126 = 190676169LLU;
	int32_t x127 = INT32_MIN;
	int32_t t30 = 10355;

	t30 = ((x125<(x126|x127))%x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 1;
	uint32_t x130 = UINT32_MAX;
	uint16_t x131 = 22144U;
	volatile uint16_t x132 = 8U;
	int32_t t31 = -1384919;

	t31 = ((x129<(x130|x131))%x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x135 = INT16_MIN;
	int32_t t32 = -3;

	t32 = ((x133<(x134|x135))%x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = 22773LL;
	static uint32_t x138 = 55827258U;
	uint8_t x139 = UINT8_MAX;
	static uint64_t t33 = 1684197241279LLU;

	t33 = ((x137<(x138|x139))%x140);

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x141 = INT64_MAX;
	int16_t x142 = 92;
	int16_t x143 = -6985;
	volatile uint64_t x144 = 15265079659637LLU;
	uint64_t t34 = 1LLU;

	t34 = ((x141<(x142|x143))%x144);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x147 = -1;
	static uint8_t x148 = 5U;
	int32_t t35 = -801551;

	t35 = ((x145<(x146|x147))%x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = 5;
	static int8_t x151 = INT8_MIN;
	static int16_t x152 = -240;
	static volatile int32_t t36 = 20938;

	t36 = ((x149<(x150|x151))%x152);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 2LLU;
	uint64_t x154 = 2016110654405837LLU;
	int64_t x156 = INT64_MIN;
	int64_t t37 = -237897LL;

	t37 = ((x153<(x154|x155))%x156);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x160 = 1;

	t38 = ((x157<(x158|x159))%x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x161 = INT16_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t39 = -40306;

	t39 = ((x161<(x162|x163))%x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x168 = INT8_MIN;
	int32_t t40 = -79860;

	t40 = ((x165<(x166|x167))%x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	static uint16_t x170 = 5642U;
	static uint64_t x171 = UINT64_MAX;
	int16_t x172 = INT16_MIN;
	static volatile int32_t t41 = 2630;

	t41 = ((x169<(x170|x171))%x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x173 = INT32_MAX;
	static uint32_t x175 = 2U;
	uint16_t x176 = 28U;
	volatile int32_t t42 = -1693309;

	t42 = ((x173<(x174|x175))%x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MIN;
	volatile int8_t x178 = 5;
	uint16_t x179 = UINT16_MAX;
	volatile int64_t t43 = -6246657526LL;

	t43 = ((x177<(x178|x179))%x180);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x181 = 10049;
	int8_t x182 = -1;
	static int8_t x184 = -1;
	static volatile int32_t t44 = -6;

	t44 = ((x181<(x182|x183))%x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x185 = -1685;
	volatile uint8_t x186 = UINT8_MAX;
	int32_t x187 = 7350913;
	int32_t x188 = -50130207;
	int32_t t45 = 91;

	t45 = ((x185<(x186|x187))%x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x189 = UINT32_MAX;
	static volatile uint16_t x190 = 0U;
	int8_t x191 = 8;
	uint8_t x192 = UINT8_MAX;
	int32_t t46 = -60374;

	t46 = ((x189<(x190|x191))%x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x193 = 289446871639178LLU;
	uint8_t x194 = 1U;
	uint32_t x195 = UINT32_MAX;
	int32_t x196 = INT32_MIN;

	t47 = ((x193<(x194|x195))%x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x198 = INT8_MIN;
	static int32_t x199 = 500859;
	volatile uint64_t x200 = 902700378506LLU;
	volatile uint64_t t48 = 520673793931956251LLU;

	t48 = ((x197<(x198|x199))%x200);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = 0U;
	int16_t x202 = -14;
	int32_t x204 = -1238;
	int32_t t49 = 18;

	t49 = ((x201<(x202|x203))%x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x205 = 7U;
	uint16_t x207 = 33U;
	uint64_t x208 = 776354LLU;

	t50 = ((x205<(x206|x207))%x208);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MAX;
	volatile uint64_t x210 = 913523623113LLU;
	int8_t x211 = INT8_MIN;
	volatile int32_t x212 = 168;

	t51 = ((x209<(x210|x211))%x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x213 = 4189U;
	uint16_t x215 = 13U;
	int32_t t52 = 45941696;

	t52 = ((x213<(x214|x215))%x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x217 = INT64_MAX;
	volatile int32_t x218 = INT32_MAX;
	volatile uint32_t x219 = 917681625U;
	int64_t x220 = 1982558LL;
	static volatile int64_t t53 = -97513LL;

	t53 = ((x217<(x218|x219))%x220);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MAX;
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = INT8_MIN;
	int32_t t54 = 1;

	t54 = ((x221<(x222|x223))%x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x225 = -2;
	volatile int8_t x227 = 30;
	static int8_t x228 = 1;
	int32_t t55 = -49;

	t55 = ((x225<(x226|x227))%x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x229 = 166584;
	int32_t x231 = -1;
	uint32_t x232 = UINT32_MAX;

	t56 = ((x229<(x230|x231))%x232);

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = INT32_MIN;
	uint32_t x234 = 78282U;
	int32_t x235 = INT32_MAX;
	int8_t x236 = INT8_MAX;
	volatile int32_t t57 = -5;

	t57 = ((x233<(x234|x235))%x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = UINT32_MAX;
	int8_t x239 = INT8_MIN;
	volatile int64_t x240 = 100363777619879LL;
	volatile int64_t t58 = -1736156075985579LL;

	t58 = ((x237<(x238|x239))%x240);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x241 = UINT8_MAX;
	static uint8_t x242 = UINT8_MAX;
	uint16_t x243 = 0U;
	int64_t x244 = -1LL;
	volatile int64_t t59 = 132393394LL;

	t59 = ((x241<(x242|x243))%x244);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x246 = INT8_MAX;
	uint16_t x247 = UINT16_MAX;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t60 = 3262LLU;

	t60 = ((x245<(x246|x247))%x248);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = INT32_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t61 = -26;

	t61 = ((x249<(x250|x251))%x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x253 = 367669U;
	volatile uint64_t x254 = UINT64_MAX;
	volatile int32_t x255 = INT32_MIN;
	int16_t x256 = INT16_MAX;
	static volatile int32_t t62 = -24;

	t62 = ((x253<(x254|x255))%x256);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = -49;
	uint32_t x258 = 3908U;
	volatile int8_t x259 = INT8_MAX;
	volatile int32_t t63 = 201;

	t63 = ((x257<(x258|x259))%x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x261 = INT16_MAX;
	int64_t x262 = -1LL;
	int16_t x263 = INT16_MAX;
	int32_t t64 = 14;

	t64 = ((x261<(x262|x263))%x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x265 = 8751412945555LLU;
	int8_t x266 = INT8_MIN;
	int32_t x268 = INT32_MIN;
	volatile int32_t t65 = -118734;

	t65 = ((x265<(x266|x267))%x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MAX;
	int16_t x271 = -11080;
	static int32_t x272 = INT32_MAX;
	int32_t t66 = 868436063;

	t66 = ((x269<(x270|x271))%x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = 20592421LL;
	static int32_t x274 = -1;
	uint16_t x275 = UINT16_MAX;
	uint16_t x276 = UINT16_MAX;
	static volatile int32_t t67 = -42375999;

	t67 = ((x273<(x274|x275))%x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x278 = -1LL;
	volatile uint32_t x279 = UINT32_MAX;
	int64_t t68 = -4LL;

	t68 = ((x277<(x278|x279))%x280);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x283 = INT8_MIN;
	int32_t x284 = -3;
	volatile int32_t t69 = -7;

	t69 = ((x281<(x282|x283))%x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x285 = 23509800899047487LLU;
	volatile int8_t x286 = INT8_MAX;
	uint8_t x288 = 13U;
	volatile int32_t t70 = -510313787;

	t70 = ((x285<(x286|x287))%x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x289 = 2U;
	uint64_t x290 = 801170487034364594LLU;
	uint64_t x291 = 246078704112187157LLU;
	int64_t x292 = INT64_MIN;
	volatile int64_t t71 = -16343264066LL;

	t71 = ((x289<(x290|x291))%x292);

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = -15;
	int8_t x294 = INT8_MIN;
	int8_t x295 = -5;
	int32_t x296 = -1;
	volatile int32_t t72 = -840309;

	t72 = ((x293<(x294|x295))%x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x298 = 84542LLU;
	volatile uint64_t x299 = 4442527303506237LLU;
	volatile int32_t x300 = 40174956;

	t73 = ((x297<(x298|x299))%x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x301 = 89U;
	volatile int32_t x302 = -220;
	int32_t x303 = INT32_MAX;
	volatile int32_t t74 = 5;

	t74 = ((x301<(x302|x303))%x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x305 = -16012183314104341LL;
	uint64_t x306 = UINT64_MAX;
	volatile int64_t x307 = INT64_MAX;
	volatile int16_t x308 = INT16_MIN;
	volatile int32_t t75 = 162;

	t75 = ((x305<(x306|x307))%x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x309 = UINT64_MAX;
	uint64_t x310 = UINT64_MAX;
	static uint64_t x311 = 2882003LLU;
	static int32_t x312 = -2594230;
	int32_t t76 = 3;

	t76 = ((x309<(x310|x311))%x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = -3814219035165388LL;
	uint32_t x314 = 1146104317U;
	int16_t x315 = -1;
	volatile int8_t x316 = INT8_MAX;
	volatile int32_t t77 = -9448098;

	t77 = ((x313<(x314|x315))%x316);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x318 = 5953;
	static int32_t x320 = INT32_MIN;

	t78 = ((x317<(x318|x319))%x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = -1;
	volatile int8_t x322 = INT8_MAX;
	int64_t x323 = INT64_MIN;
	static int32_t x324 = -1;
	volatile int32_t t79 = -1275816;

	t79 = ((x321<(x322|x323))%x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x325 = -1;
	volatile int64_t t80 = 86978LL;

	t80 = ((x325<(x326|x327))%x328);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x331 = -50;
	static int64_t x332 = -1LL;
	volatile int64_t t81 = -1157410LL;

	t81 = ((x329<(x330|x331))%x332);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x338 = -1;
	static int16_t x339 = INT16_MIN;
	volatile int32_t x340 = INT32_MIN;
	volatile int32_t t82 = 1;

	t82 = ((x337<(x338|x339))%x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x342 = -1;
	int16_t x343 = 11738;
	int16_t x344 = INT16_MIN;
	int32_t t83 = -8;

	t83 = ((x341<(x342|x343))%x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = INT8_MIN;
	volatile uint64_t x346 = UINT64_MAX;
	volatile uint8_t x347 = 4U;
	int8_t x348 = -1;

	t84 = ((x345<(x346|x347))%x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x349 = INT32_MAX;
	static uint16_t x350 = UINT16_MAX;
	int8_t x351 = INT8_MAX;
	static volatile int64_t t85 = -2817682513665676895LL;

	t85 = ((x349<(x350|x351))%x352);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x354 = -1;
	int64_t x355 = -5589537226603LL;
	static int64_t x356 = -1LL;

	t86 = ((x353<(x354|x355))%x356);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = INT8_MAX;
	volatile int32_t x358 = INT32_MIN;
	volatile int8_t x359 = INT8_MAX;
	static int64_t x360 = INT64_MAX;
	int64_t t87 = -343129920232322245LL;

	t87 = ((x357<(x358|x359))%x360);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x361 = -1LL;
	int32_t x362 = -1;
	int8_t x363 = 1;
	uint16_t x364 = UINT16_MAX;
	static int32_t t88 = 29599;

	t88 = ((x361<(x362|x363))%x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x365 = UINT8_MAX;
	int16_t x366 = INT16_MIN;
	volatile int32_t x367 = INT32_MIN;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t89 = 39604LLU;

	t89 = ((x365<(x366|x367))%x368);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x369 = 216168U;
	int64_t x370 = 11111627817LL;
	int64_t x371 = INT64_MIN;
	volatile uint64_t x372 = 24201010310058802LLU;
	volatile uint64_t t90 = 5252LLU;

	t90 = ((x369<(x370|x371))%x372);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = INT64_MIN;
	uint16_t x374 = 237U;
	static uint64_t x375 = UINT64_MAX;
	volatile int32_t x376 = INT32_MIN;
	volatile int32_t t91 = -850;

	t91 = ((x373<(x374|x375))%x376);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x378 = INT32_MAX;
	int8_t x379 = -17;
	int32_t x380 = INT32_MIN;
	static volatile int32_t t92 = -3949007;

	t92 = ((x377<(x378|x379))%x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x381 = 107U;
	int32_t x383 = INT32_MAX;
	volatile uint32_t x384 = UINT32_MAX;

	t93 = ((x381<(x382|x383))%x384);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x386 = -1;
	volatile uint8_t x387 = 2U;
	volatile int32_t t94 = 30697;

	t94 = ((x385<(x386|x387))%x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x389 = 3886U;
	int64_t x390 = INT64_MIN;
	uint8_t x391 = UINT8_MAX;
	volatile int8_t x392 = INT8_MAX;
	static int32_t t95 = -90850;

	t95 = ((x389<(x390|x391))%x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x394 = INT16_MIN;
	int64_t x396 = 65872727LL;
	int64_t t96 = 10738108868561LL;

	t96 = ((x393<(x394|x395))%x396);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = INT8_MIN;
	volatile uint16_t x398 = 31670U;
	int8_t x399 = -3;
	volatile int8_t x400 = INT8_MIN;
	int32_t t97 = -8689;

	t97 = ((x397<(x398|x399))%x400);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x401 = 4105324593463820LLU;
	uint8_t x402 = 0U;
	int64_t x403 = -52711031929LL;
	static int16_t x404 = INT16_MAX;
	int32_t t98 = 101;

	t98 = ((x401<(x402|x403))%x404);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x406 = INT16_MIN;
	int8_t x407 = -1;
	uint32_t x408 = 1935U;

	t99 = ((x405<(x406|x407))%x408);

	if (t99 != 0U) { NG(); } else { ; }
	
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

