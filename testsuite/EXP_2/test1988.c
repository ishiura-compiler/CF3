#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x10 = 0;
static int32_t x13 = 104820160;
volatile uint32_t x17 = 6549U;
volatile int32_t t4 = 52;
int64_t x22 = INT64_MIN;
int16_t x24 = 341;
static volatile int32_t t5 = -52442156;
int32_t x26 = INT32_MIN;
volatile uint32_t t6 = 57100U;
int64_t t7 = -1879291LL;
int16_t x35 = 8;
static int32_t x43 = -48714;
static uint64_t x44 = UINT64_MAX;
int8_t x47 = -1;
int8_t x52 = INT8_MIN;
int32_t x55 = -12720333;
int32_t x60 = -56507;
int16_t x63 = INT16_MIN;
uint32_t t16 = 129261U;
int32_t t18 = -47808;
uint8_t x81 = 0U;
volatile int8_t x88 = INT8_MIN;
volatile int64_t t22 = INT64_MIN;
int32_t x96 = -116487;
int8_t x97 = INT8_MIN;
int16_t x101 = -1;
uint16_t x102 = 5U;
int16_t x105 = INT16_MAX;
static uint32_t x109 = UINT32_MAX;
uint16_t x121 = 6355U;
static uint8_t x123 = 14U;
int8_t x127 = -4;
int8_t x130 = -2;
int16_t x131 = -11;
static volatile uint32_t x139 = 1079910U;
int8_t x147 = -18;
uint32_t x149 = 6790U;
int32_t x151 = -83677;
int8_t x158 = 1;
static int64_t x161 = -1LL;
volatile int64_t t40 = INT64_MAX;
volatile int8_t x170 = -1;
int64_t x176 = -1LL;
int64_t t43 = 1LL;
uint32_t x178 = 37262501U;
int32_t x185 = -1;
uint16_t x186 = 1U;
volatile int16_t x189 = 0;
int16_t x190 = INT16_MIN;
volatile int16_t x192 = INT16_MIN;
uint16_t x194 = 16435U;
uint64_t x195 = UINT64_MAX;
volatile int64_t x196 = -17LL;
volatile int64_t t48 = 7251989104LL;
uint32_t x198 = 7530U;
volatile int16_t x212 = INT16_MIN;
int8_t x213 = INT8_MIN;
int32_t t53 = -891;
int32_t x218 = -1;
uint64_t x226 = 8134333704LLU;
int64_t x231 = 1033014065538030482LL;
volatile int32_t t57 = -31414;
int8_t x234 = INT8_MIN;
uint64_t x235 = 28847877950426LLU;
int32_t t58 = -496375;
int8_t x239 = INT8_MAX;
volatile int32_t t59 = -173851530;
int32_t x248 = INT32_MIN;
static volatile int32_t x252 = -1;
uint32_t x256 = UINT32_MAX;
uint64_t x259 = 18990LLU;
volatile int32_t t65 = -603125634;
volatile int32_t t66 = -4308947;
static int32_t t67 = 116;
int64_t x273 = -1LL;
uint8_t x281 = 7U;
int64_t x283 = INT64_MIN;
static int32_t x291 = -1;
int64_t x295 = INT64_MIN;
volatile int32_t t73 = 2664052;
static int16_t x297 = -543;
volatile int32_t t75 = -1;
uint32_t t76 = UINT32_MAX;
static uint16_t x318 = UINT16_MAX;
uint16_t x335 = 853U;
volatile int8_t x343 = -1;
int16_t x347 = INT16_MAX;
int32_t x348 = INT32_MIN;
int16_t x350 = INT16_MIN;
uint16_t x352 = 7U;
int32_t x354 = INT32_MIN;
int32_t t88 = 109652826;
uint16_t x358 = 648U;
int8_t x364 = 3;
uint16_t x365 = 16361U;
int8_t x366 = -1;
int16_t x369 = INT16_MAX;
int32_t x380 = INT32_MAX;
int32_t x384 = INT32_MAX;
static volatile uint32_t t97 = 0U;
uint64_t x395 = 11493LLU;
int32_t x396 = INT32_MAX;
volatile int32_t x398 = -27321;
static int32_t t99 = -1;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int16_t x2 = INT16_MAX;
	int16_t x3 = -1;
	int16_t x4 = -1;
	volatile int32_t t0 = 1890137;

	t0 = ((x1<=(x2|x3))|x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 35U;
	int32_t x6 = INT32_MAX;
	int16_t x7 = INT16_MIN;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 195936;

	t1 = ((x5<=(x6|x7))|x8);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x11 = 2;
	static uint8_t x12 = 3U;
	static volatile int32_t t2 = -7109;

	t2 = ((x9<=(x10|x11))|x12);

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1LL;
	int16_t x15 = INT16_MAX;
	volatile int16_t x16 = INT16_MAX;
	volatile int32_t t3 = 244204082;

	t3 = ((x13<=(x14|x15))|x16);

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = -359666044;
	static volatile int64_t x19 = INT64_MAX;
	int32_t x20 = -1;

	t4 = ((x17<=(x18|x19))|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = INT8_MAX;
	uint16_t x23 = 19U;

	t5 = ((x21<=(x22|x23))|x24);

	if (t5 != 341) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 39U;
	int32_t x27 = 2638;
	volatile uint32_t x28 = 110U;

	t6 = ((x25<=(x26|x27))|x28);

	if (t6 != 111U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 7300776U;
	uint16_t x30 = 19772U;
	int32_t x31 = 210;
	static int64_t x32 = -1LL;

	t7 = ((x29<=(x30|x31))|x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 22U;
	uint64_t x34 = UINT64_MAX;
	int64_t x36 = 5514625LL;
	volatile int64_t t8 = 1LL;

	t8 = ((x33<=(x34|x35))|x36);

	if (t8 != 5514625LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int32_t x38 = INT32_MAX;
	int32_t x39 = 0;
	uint64_t x40 = 260031547LLU;
	volatile uint64_t t9 = 4217070175970753638LLU;

	t9 = ((x37<=(x38|x39))|x40);

	if (t9 != 260031547LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 1;
	int16_t x42 = 147;
	uint64_t t10 = UINT64_MAX;

	t10 = ((x41<=(x42|x43))|x44);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 1U;
	int32_t x46 = -371669404;
	static volatile int64_t x48 = -130551269678LL;
	volatile int64_t t11 = -22848966LL;

	t11 = ((x45<=(x46|x47))|x48);

	if (t11 != -130551269678LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	int16_t x50 = 0;
	static uint64_t x51 = 137559074745363024LLU;
	static volatile int32_t t12 = 2;

	t12 = ((x49<=(x50|x51))|x52);

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 1;
	int8_t x54 = INT8_MIN;
	int8_t x56 = INT8_MIN;
	int32_t t13 = -171971;

	t13 = ((x53<=(x54|x55))|x56);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = UINT64_MAX;
	uint32_t x58 = 322U;
	int16_t x59 = INT16_MAX;
	volatile int32_t t14 = -1082;

	t14 = ((x57<=(x58|x59))|x60);

	if (t14 != -56507) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int64_t x62 = 0LL;
	static int8_t x64 = 1;
	static volatile int32_t t15 = 519746;

	t15 = ((x61<=(x62|x63))|x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	static int64_t x66 = INT64_MAX;
	static int8_t x67 = -1;
	uint32_t x68 = 1351U;

	t16 = ((x65<=(x66|x67))|x68);

	if (t16 != 1351U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -5;
	static volatile uint32_t x70 = 13012U;
	int32_t x71 = INT32_MIN;
	uint8_t x72 = UINT8_MAX;
	int32_t t17 = -14;

	t17 = ((x69<=(x70|x71))|x72);

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 10U;
	int16_t x74 = INT16_MAX;
	int16_t x75 = 577;
	static int8_t x76 = 21;

	t18 = ((x73<=(x74|x75))|x76);

	if (t18 != 21) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	int16_t x78 = INT16_MIN;
	uint64_t x79 = 89436522LLU;
	volatile uint8_t x80 = 60U;
	int32_t t19 = -453890;

	t19 = ((x77<=(x78|x79))|x80);

	if (t19 != 61) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x82 = 430808U;
	int8_t x83 = INT8_MIN;
	static uint64_t x84 = 113611758698707LLU;
	static uint64_t t20 = 890824143462317609LLU;

	t20 = ((x81<=(x82|x83))|x84);

	if (t20 != 113611758698707LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	uint32_t x86 = 134U;
	uint64_t x87 = 12281781680LLU;
	volatile int32_t t21 = 166737;

	t21 = ((x85<=(x86|x87))|x88);

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	volatile int16_t x90 = 83;
	volatile int8_t x91 = -1;
	int64_t x92 = INT64_MIN;

	t22 = ((x89<=(x90|x91))|x92);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = 1902;
	int8_t x94 = -52;
	uint8_t x95 = 9U;
	volatile int32_t t23 = 13;

	t23 = ((x93<=(x94|x95))|x96);

	if (t23 != -116487) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = INT64_MIN;
	volatile uint32_t x99 = 194108U;
	volatile int32_t x100 = INT32_MIN;
	static int32_t t24 = INT32_MIN;

	t24 = ((x97<=(x98|x99))|x100);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x103 = INT32_MIN;
	int32_t x104 = INT32_MIN;
	int32_t t25 = INT32_MIN;

	t25 = ((x101<=(x102|x103))|x104);

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x106 = -30604;
	volatile int64_t x107 = 1484684LL;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = 111549821;

	t26 = ((x105<=(x106|x107))|x108);

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x110 = -1LL;
	volatile int64_t x111 = -1LL;
	int8_t x112 = INT8_MIN;
	static int32_t t27 = -3846544;

	t27 = ((x109<=(x110|x111))|x112);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x113 = 168772444LLU;
	static uint8_t x114 = UINT8_MAX;
	volatile int16_t x115 = 26;
	int16_t x116 = -1;
	int32_t t28 = 2;

	t28 = ((x113<=(x114|x115))|x116);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = 1;
	static int16_t x119 = INT16_MAX;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = -1;

	t29 = ((x117<=(x118|x119))|x120);

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x122 = -1794;
	uint64_t x124 = UINT64_MAX;
	static uint64_t t30 = UINT64_MAX;

	t30 = ((x121<=(x122|x123))|x124);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = INT32_MIN;
	uint16_t x126 = 1013U;
	static int16_t x128 = -1;
	volatile int32_t t31 = 369781;

	t31 = ((x125<=(x126|x127))|x128);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = -18;
	int64_t x132 = INT64_MAX;
	volatile int64_t t32 = INT64_MAX;

	t32 = ((x129<=(x130|x131))|x132);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	int16_t x134 = INT16_MAX;
	int16_t x135 = INT16_MIN;
	static volatile int32_t x136 = INT32_MIN;
	volatile int32_t t33 = INT32_MIN;

	t33 = ((x133<=(x134|x135))|x136);

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	volatile int32_t x138 = -1;
	int64_t x140 = INT64_MIN;
	static volatile int64_t t34 = -264LL;

	t34 = ((x137<=(x138|x139))|x140);

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	uint32_t x142 = 7U;
	volatile int8_t x143 = INT8_MIN;
	uint32_t x144 = 59903U;
	static volatile uint32_t t35 = 137595957U;

	t35 = ((x141<=(x142|x143))|x144);

	if (t35 != 59903U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = UINT8_MAX;
	volatile uint8_t x146 = 1U;
	volatile int8_t x148 = INT8_MAX;
	static volatile int32_t t36 = -36905359;

	t36 = ((x145<=(x146|x147))|x148);

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x150 = -6;
	int64_t x152 = INT64_MIN;
	static volatile int64_t t37 = 633643463LL;

	t37 = ((x149<=(x150|x151))|x152);

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 3;
	int32_t x154 = -12397986;
	static int32_t x155 = 83569;
	int8_t x156 = -1;
	volatile int32_t t38 = -57990356;

	t38 = ((x153<=(x154|x155))|x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 7892;
	static uint16_t x159 = 266U;
	static int16_t x160 = -1;
	volatile int32_t t39 = -165695451;

	t39 = ((x157<=(x158|x159))|x160);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x162 = 0;
	volatile int64_t x163 = INT64_MIN;
	int64_t x164 = INT64_MAX;

	t40 = ((x161<=(x162|x163))|x164);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x165 = 8U;
	int8_t x166 = -63;
	int32_t x167 = -1;
	int16_t x168 = -185;
	volatile int32_t t41 = -36412;

	t41 = ((x165<=(x166|x167))|x168);

	if (t41 != -185) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 16106U;
	uint32_t x171 = UINT32_MAX;
	static volatile int32_t x172 = 0;
	volatile int32_t t42 = 54367;

	t42 = ((x169<=(x170|x171))|x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 9515646U;
	static int32_t x174 = INT32_MIN;
	int32_t x175 = INT32_MAX;

	t43 = ((x173<=(x174|x175))|x176);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MIN;
	int32_t x179 = -1438048;
	int8_t x180 = INT8_MIN;
	static int32_t t44 = 518030983;

	t44 = ((x177<=(x178|x179))|x180);

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = 0U;
	int32_t x182 = INT32_MIN;
	static int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MIN;
	int32_t t45 = 411203;

	t45 = ((x181<=(x182|x183))|x184);

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x187 = INT8_MAX;
	int32_t x188 = INT32_MAX;
	int32_t t46 = INT32_MAX;

	t46 = ((x185<=(x186|x187))|x188);

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x191 = 14U;
	static int32_t t47 = -3;

	t47 = ((x189<=(x190|x191))|x192);

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x193 = 16U;

	t48 = ((x193<=(x194|x195))|x196);

	if (t48 != -17LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int8_t x199 = INT8_MIN;
	int8_t x200 = -1;
	volatile int32_t t49 = -2;

	t49 = ((x197<=(x198|x199))|x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	uint64_t x202 = 32534831719LLU;
	static volatile int32_t x203 = INT32_MAX;
	int8_t x204 = INT8_MAX;
	volatile int32_t t50 = 7674;

	t50 = ((x201<=(x202|x203))|x204);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 30U;
	volatile int8_t x206 = 43;
	static uint8_t x207 = UINT8_MAX;
	int8_t x208 = INT8_MIN;
	int32_t t51 = 0;

	t51 = ((x205<=(x206|x207))|x208);

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 4668U;
	uint32_t x210 = 1658746610U;
	int32_t x211 = -1;
	int32_t t52 = -2616032;

	t52 = ((x209<=(x210|x211))|x212);

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MAX;
	uint8_t x215 = 62U;
	int16_t x216 = INT16_MIN;

	t53 = ((x213<=(x214|x215))|x216);

	if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int16_t x219 = -1;
	uint16_t x220 = 696U;
	volatile int32_t t54 = -30944;

	t54 = ((x217<=(x218|x219))|x220);

	if (t54 != 697) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 7;
	uint32_t x222 = 2140392602U;
	volatile int32_t x223 = -1;
	static uint16_t x224 = 1531U;
	int32_t t55 = -2930;

	t55 = ((x221<=(x222|x223))|x224);

	if (t55 != 1531) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	volatile uint32_t x227 = UINT32_MAX;
	static volatile uint16_t x228 = 26348U;
	volatile int32_t t56 = 155;

	t56 = ((x225<=(x226|x227))|x228);

	if (t56 != 26348) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	uint16_t x230 = 12792U;
	volatile int16_t x232 = 1;

	t57 = ((x229<=(x230|x231))|x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	volatile uint16_t x236 = 31695U;

	t58 = ((x233<=(x234|x235))|x236);

	if (t58 != 31695) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	int32_t x238 = 0;
	int16_t x240 = INT16_MAX;

	t59 = ((x237<=(x238|x239))|x240);

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MIN;
	int8_t x242 = INT8_MIN;
	uint16_t x243 = UINT16_MAX;
	int64_t x244 = -8908163444123869LL;
	static volatile int64_t t60 = -16391990LL;

	t60 = ((x241<=(x242|x243))|x244);

	if (t60 != -8908163444123869LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 7101LLU;
	int8_t x246 = INT8_MAX;
	uint32_t x247 = 34159U;
	volatile int32_t t61 = 909;

	t61 = ((x245<=(x246|x247))|x248);

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 28U;
	static volatile uint64_t x250 = 136982716783816008LLU;
	uint8_t x251 = UINT8_MAX;
	static volatile int32_t t62 = -1775395;

	t62 = ((x249<=(x250|x251))|x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = -28;
	int64_t x254 = INT64_MAX;
	uint16_t x255 = UINT16_MAX;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = ((x253<=(x254|x255))|x256);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	int32_t x258 = 1;
	static int16_t x260 = INT16_MIN;
	volatile int32_t t64 = -11143;

	t64 = ((x257<=(x258|x259))|x260);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	int64_t x262 = -44896132931995074LL;
	static int32_t x263 = 3534107;
	uint16_t x264 = 891U;

	t65 = ((x261<=(x262|x263))|x264);

	if (t65 != 891) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 259;
	static int64_t x266 = INT64_MIN;
	uint8_t x267 = 1U;
	int8_t x268 = INT8_MAX;

	t66 = ((x265<=(x266|x267))|x268);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	uint16_t x270 = 11U;
	static volatile uint16_t x271 = UINT16_MAX;
	int32_t x272 = -1328;

	t67 = ((x269<=(x270|x271))|x272);

	if (t67 != -1327) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x274 = 106842435U;
	uint8_t x275 = 5U;
	static volatile int64_t x276 = 192LL;
	int64_t t68 = 1LL;

	t68 = ((x273<=(x274|x275))|x276);

	if (t68 != 193LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	int16_t x278 = -1;
	static uint16_t x279 = UINT16_MAX;
	uint8_t x280 = 3U;
	static int32_t t69 = 2;

	t69 = ((x277<=(x278|x279))|x280);

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = INT8_MIN;
	static uint64_t x284 = 6056587LLU;
	volatile uint64_t t70 = 213031LLU;

	t70 = ((x281<=(x282|x283))|x284);

	if (t70 != 6056587LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	int32_t x286 = 61207;
	int16_t x287 = 1;
	volatile int32_t x288 = INT32_MIN;
	volatile int32_t t71 = -112186;

	t71 = ((x285<=(x286|x287))|x288);

	if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 1U;
	volatile int32_t x290 = 211;
	static uint16_t x292 = 56U;
	static volatile int32_t t72 = 465421840;

	t72 = ((x289<=(x290|x291))|x292);

	if (t72 != 56) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 5407338;
	static int64_t x294 = 1136198945267952400LL;
	int8_t x296 = -1;

	t73 = ((x293<=(x294|x295))|x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x298 = 410U;
	static int64_t x299 = 12LL;
	uint16_t x300 = 27U;
	int32_t t74 = -66080587;

	t74 = ((x297<=(x298|x299))|x300);

	if (t74 != 27) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 5121805U;
	static int8_t x302 = 7;
	uint64_t x303 = 19377203194619907LLU;
	static int16_t x304 = -1;

	t75 = ((x301<=(x302|x303))|x304);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = -1LL;
	uint32_t x306 = UINT32_MAX;
	int64_t x307 = -248497048151396628LL;
	volatile uint32_t x308 = UINT32_MAX;

	t76 = ((x305<=(x306|x307))|x308);

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 83U;
	uint16_t x310 = 7911U;
	int8_t x311 = -1;
	volatile int16_t x312 = -1;
	int32_t t77 = 6048257;

	t77 = ((x309<=(x310|x311))|x312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 880U;
	int64_t x314 = -1LL;
	static uint64_t x315 = 17514479629044585LLU;
	static volatile int64_t x316 = 38108288LL;
	int64_t t78 = -1038586965957LL;

	t78 = ((x313<=(x314|x315))|x316);

	if (t78 != 38108289LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = 0U;
	uint16_t x319 = 8651U;
	int16_t x320 = INT16_MIN;
	volatile int32_t t79 = 392;

	t79 = ((x317<=(x318|x319))|x320);

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -482708141547841LL;
	uint8_t x322 = 108U;
	int64_t x323 = INT64_MIN;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = INT32_MAX;

	t80 = ((x321<=(x322|x323))|x324);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -8;
	static volatile int16_t x326 = -1;
	int16_t x327 = 0;
	static uint32_t x328 = UINT32_MAX;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = ((x325<=(x326|x327))|x328);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MIN;
	int32_t x330 = -1;
	int16_t x331 = -1;
	static uint16_t x332 = 14985U;
	volatile int32_t t82 = -2;

	t82 = ((x329<=(x330|x331))|x332);

	if (t82 != 14985) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MIN;
	int16_t x334 = -1;
	static int32_t x336 = 19767;
	int32_t t83 = -431;

	t83 = ((x333<=(x334|x335))|x336);

	if (t83 != 19767) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 52609429;
	uint8_t x338 = UINT8_MAX;
	int64_t x339 = -3LL;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = INT32_MIN;

	t84 = ((x337<=(x338|x339))|x340);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	static volatile int16_t x342 = INT16_MIN;
	volatile int64_t x344 = INT64_MIN;
	int64_t t85 = INT64_MIN;

	t85 = ((x341<=(x342|x343))|x344);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	uint16_t x346 = 22U;
	int32_t t86 = 825;

	t86 = ((x345<=(x346|x347))|x348);

	if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = -1618LL;
	static uint64_t x351 = 31409LLU;
	volatile int32_t t87 = -882384686;

	t87 = ((x349<=(x350|x351))|x352);

	if (t87 != 7) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	int32_t x355 = INT32_MIN;
	int32_t x356 = -17501;

	t88 = ((x353<=(x354|x355))|x356);

	if (t88 != -17501) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MAX;
	volatile int8_t x359 = -4;
	int8_t x360 = -43;
	static int32_t t89 = 326100;

	t89 = ((x357<=(x358|x359))|x360);

	if (t89 != -43) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	int8_t x362 = 9;
	volatile int8_t x363 = INT8_MIN;
	volatile int32_t t90 = 1;

	t90 = ((x361<=(x362|x363))|x364);

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x367 = INT16_MAX;
	uint64_t x368 = UINT64_MAX;
	static volatile uint64_t t91 = UINT64_MAX;

	t91 = ((x365<=(x366|x367))|x368);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x370 = 39LL;
	int64_t x371 = INT64_MIN;
	uint8_t x372 = 1U;
	volatile int32_t t92 = -488;

	t92 = ((x369<=(x370|x371))|x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x373 = 174LLU;
	uint16_t x374 = UINT16_MAX;
	int16_t x375 = INT16_MIN;
	volatile int8_t x376 = INT8_MIN;
	int32_t t93 = 5;

	t93 = ((x373<=(x374|x375))|x376);

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 3;
	uint32_t x378 = UINT32_MAX;
	int8_t x379 = INT8_MIN;
	int32_t t94 = INT32_MAX;

	t94 = ((x377<=(x378|x379))|x380);

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = INT16_MAX;
	static uint16_t x382 = UINT16_MAX;
	uint32_t x383 = UINT32_MAX;
	volatile int32_t t95 = INT32_MAX;

	t95 = ((x381<=(x382|x383))|x384);

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	static int64_t x386 = INT64_MIN;
	int8_t x387 = -13;
	int16_t x388 = -1;
	int32_t t96 = 3490;

	t96 = ((x385<=(x386|x387))|x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	volatile uint8_t x391 = 4U;
	static uint32_t x392 = 221748222U;

	t97 = ((x389<=(x390|x391))|x392);

	if (t97 != 221748223U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -54830565;
	uint64_t x394 = 978105LLU;
	volatile int32_t t98 = INT32_MAX;

	t98 = ((x393<=(x394|x395))|x396);

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MIN;
	volatile int32_t x399 = INT32_MAX;
	int32_t x400 = -7;

	t99 = ((x397<=(x398|x399))|x400);

	if (t99 != -7) { NG(); } else { ; }
	
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

