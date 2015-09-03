#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = 327LL;
int32_t x5 = INT32_MIN;
static int16_t x12 = -1;
uint32_t x14 = 56030U;
int64_t x18 = -415LL;
static int64_t x19 = INT64_MIN;
uint8_t x21 = UINT8_MAX;
uint16_t x25 = 88U;
static int16_t x32 = -2854;
uint8_t x37 = 33U;
int8_t x38 = -47;
int16_t x46 = INT16_MAX;
static int32_t x49 = 5341;
int32_t x51 = INT32_MIN;
int16_t x53 = -1;
volatile uint64_t x65 = 5708410915LLU;
static int8_t x74 = INT8_MIN;
static int32_t t17 = -4272994;
volatile int64_t x78 = 8LL;
static int32_t t18 = 215;
int8_t x91 = -1;
uint32_t t21 = 384376U;
int32_t x93 = INT32_MAX;
int64_t x101 = INT64_MIN;
int64_t x108 = INT64_MIN;
int16_t x114 = 25;
int16_t x119 = -119;
volatile int32_t x126 = -1;
int64_t x136 = -1LL;
int8_t x137 = -11;
uint16_t x142 = 3U;
int64_t x143 = INT64_MIN;
int32_t x144 = INT32_MAX;
int8_t x152 = 4;
static int32_t x154 = INT32_MIN;
volatile uint64_t t39 = 1209106680573466LLU;
int16_t x169 = INT16_MIN;
volatile int64_t x171 = -1LL;
volatile int64_t x177 = 43069048504266818LL;
int8_t x178 = INT8_MAX;
volatile int32_t t42 = 4150214;
static volatile int32_t x184 = INT32_MIN;
static int64_t x185 = -1LL;
volatile uint32_t t48 = 40888U;
int32_t x217 = INT32_MIN;
int8_t x218 = INT8_MIN;
uint64_t x222 = 64871607068LLU;
int64_t x223 = INT64_MIN;
volatile int32_t x224 = INT32_MIN;
static volatile int16_t x226 = -1;
static int16_t x227 = INT16_MIN;
static int32_t x231 = INT32_MIN;
static uint64_t x234 = UINT64_MAX;
uint16_t x238 = 1U;
static int32_t x239 = 8708;
int8_t x240 = INT8_MIN;
int8_t x242 = INT8_MAX;
uint32_t x260 = 180427428U;
int64_t x264 = 130668694LL;
int8_t x265 = INT8_MIN;
static volatile int32_t t63 = -38;
uint32_t t64 = 306543543U;
volatile int8_t x274 = -1;
int64_t t66 = 24479586LL;
int8_t x292 = INT8_MAX;
int16_t x296 = INT16_MIN;
int64_t x299 = -1475639382507476LL;
int32_t x304 = -161;
volatile uint64_t x320 = UINT64_MAX;
int16_t x323 = -1;
int64_t t79 = -15171837940677LL;
uint32_t x335 = 6187834U;
uint8_t x339 = 1U;
static int32_t x351 = 15802;
int32_t t87 = -10396653;
int8_t x367 = 55;
static volatile int32_t t88 = -1;
int32_t x370 = INT32_MIN;
volatile int8_t x371 = INT8_MIN;
int8_t x373 = INT8_MIN;
uint32_t x380 = UINT32_MAX;
uint32_t t91 = 5U;
volatile int64_t x381 = -1LL;
int8_t x395 = -44;
volatile int32_t t94 = 133531284;
uint32_t x399 = 0U;
int32_t t95 = -326;
int8_t x401 = INT8_MAX;
int16_t x416 = 7;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	uint8_t x3 = 15U;
	int64_t x4 = INT64_MAX;
	int64_t t0 = -111LL;

	t0 = ((x1<=(x2|x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x6 = 7U;
	volatile int8_t x7 = -1;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -499630266;

	t1 = ((x5<=(x6|x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint64_t x10 = 169989644450306LLU;
	volatile int32_t x11 = 196187;
	int32_t t2 = -1224;

	t2 = ((x9<=(x10|x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	uint32_t x15 = 84392U;
	int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = 26262;

	t3 = ((x13<=(x14|x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int32_t x20 = -1;
	volatile int32_t t4 = -30;

	t4 = ((x17<=(x18|x19))/x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -3278;
	uint16_t x23 = UINT16_MAX;
	int8_t x24 = -46;
	volatile int32_t t5 = -26;

	t5 = ((x21<=(x22|x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = -1LL;
	volatile int32_t x27 = INT32_MIN;
	static int16_t x28 = -1;
	int32_t t6 = -4594254;

	t6 = ((x25<=(x26|x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int32_t x30 = INT32_MAX;
	static int8_t x31 = 1;
	static volatile int32_t t7 = 200552126;

	t7 = ((x29<=(x30|x31))/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	uint8_t x34 = 4U;
	uint8_t x35 = UINT8_MAX;
	uint16_t x36 = UINT16_MAX;
	static volatile int32_t t8 = -243122171;

	t8 = ((x33<=(x34|x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x39 = UINT64_MAX;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -119935595394LL;

	t9 = ((x37<=(x38|x39))/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -240;
	uint32_t x42 = 338U;
	int8_t x43 = INT8_MIN;
	static int32_t x44 = 3226;
	static volatile int32_t t10 = 120160;

	t10 = ((x41<=(x42|x43))/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MAX;
	int64_t x47 = INT64_MAX;
	int8_t x48 = -1;
	volatile int32_t t11 = 77529;

	t11 = ((x45<=(x46|x47))/x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	int8_t x52 = INT8_MAX;
	int32_t t12 = 5;

	t12 = ((x49<=(x50|x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MIN;
	uint16_t x55 = 3180U;
	int64_t x56 = -1LL;
	volatile int64_t t13 = -5LL;

	t13 = ((x53<=(x54|x55))/x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 12165U;
	int64_t x62 = INT64_MIN;
	uint8_t x63 = UINT8_MAX;
	volatile uint16_t x64 = UINT16_MAX;
	volatile int32_t t14 = 941633623;

	t14 = ((x61<=(x62|x63))/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = INT16_MIN;
	uint16_t x67 = UINT16_MAX;
	uint32_t x68 = 10U;
	volatile uint32_t t15 = 629U;

	t15 = ((x65<=(x66|x67))/x68);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = -1;
	uint64_t x70 = 3529313778187456130LLU;
	int32_t x71 = INT32_MIN;
	int32_t x72 = INT32_MAX;
	volatile int32_t t16 = -48;

	t16 = ((x69<=(x70|x71))/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = -7317357647545LL;
	uint8_t x75 = 8U;
	volatile int16_t x76 = INT16_MIN;

	t17 = ((x73<=(x74|x75))/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MAX;
	volatile uint8_t x79 = UINT8_MAX;
	volatile int16_t x80 = INT16_MAX;

	t18 = ((x77<=(x78|x79))/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x81 = INT32_MIN;
	static volatile uint64_t x82 = UINT64_MAX;
	uint64_t x83 = 63666LLU;
	uint32_t x84 = 3012168U;
	uint32_t t19 = 13U;

	t19 = ((x81<=(x82|x83))/x84);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -1;
	static int8_t x86 = 23;
	static int32_t x87 = 56471;
	static uint64_t x88 = 1882993616559LLU;
	uint64_t t20 = 91338LLU;

	t20 = ((x85<=(x86|x87))/x88);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	static uint64_t x90 = UINT64_MAX;
	uint32_t x92 = UINT32_MAX;

	t21 = ((x89<=(x90|x91))/x92);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x94 = INT8_MIN;
	int32_t x95 = -1;
	uint16_t x96 = 14U;
	int32_t t22 = 90120782;

	t22 = ((x93<=(x94|x95))/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = INT16_MIN;
	uint16_t x99 = UINT16_MAX;
	volatile uint64_t x100 = UINT64_MAX;
	volatile uint64_t t23 = 6937LLU;

	t23 = ((x97<=(x98|x99))/x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x102 = -104230371615LL;
	static int8_t x103 = INT8_MAX;
	static uint16_t x104 = UINT16_MAX;
	volatile int32_t t24 = -1282;

	t24 = ((x101<=(x102|x103))/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	uint8_t x106 = 3U;
	int16_t x107 = INT16_MAX;
	volatile int64_t t25 = 54375198578LL;

	t25 = ((x105<=(x106|x107))/x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = 3;
	static uint64_t x110 = 57LLU;
	int8_t x111 = 5;
	int8_t x112 = INT8_MAX;
	static volatile int32_t t26 = -372601;

	t26 = ((x109<=(x110|x111))/x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1634461039015851LL;
	int8_t x115 = INT8_MAX;
	static volatile int8_t x116 = -1;
	volatile int32_t t27 = -58;

	t27 = ((x113<=(x114|x115))/x116);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x117 = -1;
	static int16_t x118 = INT16_MIN;
	uint32_t x120 = 1U;
	volatile uint32_t t28 = 6U;

	t28 = ((x117<=(x118|x119))/x120);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	uint32_t x122 = 57383300U;
	static volatile int64_t x123 = -2LL;
	static int64_t x124 = -1LL;
	volatile int64_t t29 = -35640360301781938LL;

	t29 = ((x121<=(x122|x123))/x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = UINT16_MAX;
	static int8_t x127 = -3;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t30 = 7;

	t30 = ((x125<=(x126|x127))/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	uint32_t x134 = UINT32_MAX;
	volatile int32_t x135 = -9861;
	volatile int64_t t31 = -9126LL;

	t31 = ((x133<=(x134|x135))/x136);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x138 = INT16_MIN;
	int32_t x139 = INT32_MAX;
	static int32_t x140 = -1;
	static volatile int32_t t32 = 1;

	t32 = ((x137<=(x138|x139))/x140);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x141 = 3351U;
	static int32_t t33 = -13;

	t33 = ((x141<=(x142|x143))/x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 1U;
	static volatile uint16_t x146 = UINT16_MAX;
	uint32_t x147 = 250U;
	int8_t x148 = -1;
	volatile int32_t t34 = -5;

	t34 = ((x145<=(x146|x147))/x148);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = 244715;
	static volatile uint64_t x150 = 245399945447877894LLU;
	volatile int8_t x151 = INT8_MIN;
	static volatile int32_t t35 = 83;

	t35 = ((x149<=(x150|x151))/x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x153 = 6276250913LLU;
	uint16_t x155 = 13U;
	int64_t x156 = INT64_MIN;
	volatile int64_t t36 = 1LL;

	t36 = ((x153<=(x154|x155))/x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = 5;
	int8_t x158 = -5;
	int32_t x159 = -854529410;
	uint64_t x160 = UINT64_MAX;
	uint64_t t37 = 1271485344201051970LLU;

	t37 = ((x157<=(x158|x159))/x160);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = 1659U;
	uint64_t x162 = 32LLU;
	int32_t x163 = 862;
	int8_t x164 = INT8_MIN;
	volatile int32_t t38 = -41617;

	t38 = ((x161<=(x162|x163))/x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = -70;
	int32_t x166 = -2220219;
	uint16_t x167 = 10286U;
	static uint64_t x168 = UINT64_MAX;

	t39 = ((x165<=(x166|x167))/x168);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x170 = 1457;
	uint64_t x172 = 9393657182LLU;
	uint64_t t40 = 1202LLU;

	t40 = ((x169<=(x170|x171))/x172);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MAX;
	uint16_t x175 = 10151U;
	volatile int32_t x176 = 368;
	volatile int32_t t41 = 841047;

	t41 = ((x173<=(x174|x175))/x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x179 = -1;
	static uint16_t x180 = 77U;

	t42 = ((x177<=(x178|x179))/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x181 = 922475153LLU;
	int8_t x182 = -1;
	uint16_t x183 = 37U;
	static volatile int32_t t43 = -435;

	t43 = ((x181<=(x182|x183))/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x186 = INT16_MAX;
	uint64_t x187 = UINT64_MAX;
	uint16_t x188 = UINT16_MAX;
	static int32_t t44 = -195;

	t44 = ((x185<=(x186|x187))/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x189 = UINT8_MAX;
	volatile int16_t x190 = 1735;
	static uint64_t x191 = 422617760284784406LLU;
	static int32_t x192 = INT32_MAX;
	int32_t t45 = -69503;

	t45 = ((x189<=(x190|x191))/x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 41LLU;
	static int16_t x194 = -1;
	static int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	static volatile int32_t t46 = -6453;

	t46 = ((x193<=(x194|x195))/x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x197 = INT64_MAX;
	static int16_t x198 = INT16_MIN;
	volatile uint8_t x199 = 95U;
	int16_t x200 = INT16_MAX;
	volatile int32_t t47 = -56701;

	t47 = ((x197<=(x198|x199))/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x201 = INT64_MIN;
	int64_t x202 = 2LL;
	uint64_t x203 = 320525554LLU;
	uint32_t x204 = 193638U;

	t48 = ((x201<=(x202|x203))/x204);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = -3890;
	uint8_t x206 = UINT8_MAX;
	uint64_t x207 = 1816244797258LLU;
	volatile uint64_t x208 = 49LLU;
	volatile uint64_t t49 = 3881411589LLU;

	t49 = ((x205<=(x206|x207))/x208);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MAX;
	volatile int64_t x212 = -1LL;
	static int64_t t50 = -10LL;

	t50 = ((x209<=(x210|x211))/x212);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x219 = INT16_MIN;
	static int16_t x220 = -231;
	volatile int32_t t51 = 3140791;

	t51 = ((x217<=(x218|x219))/x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = INT32_MIN;
	int32_t t52 = -1;

	t52 = ((x221<=(x222|x223))/x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x225 = INT16_MIN;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t53 = 2073430;

	t53 = ((x225<=(x226|x227))/x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = INT32_MIN;
	volatile uint16_t x230 = 1189U;
	int32_t x232 = -1;
	volatile int32_t t54 = 584;

	t54 = ((x229<=(x230|x231))/x232);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x233 = 1;
	static int64_t x235 = 4285192619665346843LL;
	int64_t x236 = INT64_MIN;
	int64_t t55 = -930825LL;

	t55 = ((x233<=(x234|x235))/x236);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x237 = UINT32_MAX;
	int32_t t56 = 0;

	t56 = ((x237<=(x238|x239))/x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x241 = -1;
	int32_t x243 = INT32_MIN;
	static int8_t x244 = -1;
	int32_t t57 = 72352371;

	t57 = ((x241<=(x242|x243))/x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x245 = UINT16_MAX;
	int8_t x246 = INT8_MAX;
	uint8_t x247 = 0U;
	uint16_t x248 = 7U;
	volatile int32_t t58 = 0;

	t58 = ((x245<=(x246|x247))/x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x250 = 6799568551932656480LLU;
	static int8_t x251 = -1;
	int32_t x252 = INT32_MAX;
	int32_t t59 = 1;

	t59 = ((x249<=(x250|x251))/x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = UINT16_MAX;
	int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MIN;
	int8_t x256 = INT8_MIN;
	static int32_t t60 = 1018136;

	t60 = ((x253<=(x254|x255))/x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x257 = 5U;
	int8_t x258 = INT8_MAX;
	int16_t x259 = -1;
	static volatile uint32_t t61 = 1523618U;

	t61 = ((x257<=(x258|x259))/x260);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x261 = 8451424395746LLU;
	int8_t x262 = INT8_MIN;
	int64_t x263 = INT64_MIN;
	int64_t t62 = -2LL;

	t62 = ((x261<=(x262|x263))/x264);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x266 = 10;
	volatile int32_t x267 = INT32_MIN;
	static int8_t x268 = INT8_MIN;

	t63 = ((x265<=(x266|x267))/x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x269 = INT32_MAX;
	volatile uint64_t x270 = 3422200148264421465LLU;
	uint8_t x271 = 25U;
	uint32_t x272 = 5238753U;

	t64 = ((x269<=(x270|x271))/x272);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x273 = -1;
	static volatile int16_t x275 = -4333;
	uint64_t x276 = 4011384420LLU;
	uint64_t t65 = 127342392497786044LLU;

	t65 = ((x273<=(x274|x275))/x276);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x277 = -828522116819660604LL;
	int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MAX;
	volatile int64_t x280 = -1571138221428064LL;

	t66 = ((x277<=(x278|x279))/x280);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = -10;
	int8_t x282 = 0;
	static int8_t x283 = INT8_MIN;
	int32_t x284 = INT32_MIN;
	int32_t t67 = 247155257;

	t67 = ((x281<=(x282|x283))/x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x285 = 95U;
	uint64_t x286 = UINT64_MAX;
	int64_t x287 = 2118369994558634537LL;
	int16_t x288 = INT16_MIN;
	int32_t t68 = -9274;

	t68 = ((x285<=(x286|x287))/x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x289 = UINT32_MAX;
	int8_t x290 = INT8_MIN;
	int8_t x291 = -1;
	int32_t t69 = -365144260;

	t69 = ((x289<=(x290|x291))/x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x293 = -1;
	int32_t x294 = INT32_MIN;
	int16_t x295 = -30;
	volatile int32_t t70 = -3;

	t70 = ((x293<=(x294|x295))/x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x297 = 54656LLU;
	int8_t x298 = INT8_MIN;
	volatile int32_t x300 = INT32_MIN;
	int32_t t71 = 252908;

	t71 = ((x297<=(x298|x299))/x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x301 = UINT16_MAX;
	static int8_t x302 = 3;
	volatile int64_t x303 = -1LL;
	volatile int32_t t72 = -1644;

	t72 = ((x301<=(x302|x303))/x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = -125873170;
	int8_t x306 = INT8_MAX;
	volatile int32_t x307 = INT32_MIN;
	volatile int64_t x308 = INT64_MAX;
	volatile int64_t t73 = -1867427300LL;

	t73 = ((x305<=(x306|x307))/x308);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x309 = 32580610;
	uint32_t x310 = UINT32_MAX;
	int8_t x311 = INT8_MIN;
	static int16_t x312 = INT16_MIN;
	int32_t t74 = -37;

	t74 = ((x309<=(x310|x311))/x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = -63;
	uint16_t x314 = 15398U;
	uint16_t x315 = 8U;
	int16_t x316 = -1;
	int32_t t75 = 127717;

	t75 = ((x313<=(x314|x315))/x316);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x317 = INT64_MIN;
	static volatile int32_t x318 = INT32_MAX;
	int64_t x319 = INT64_MAX;
	uint64_t t76 = 0LLU;

	t76 = ((x317<=(x318|x319))/x320);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MAX;
	int32_t x322 = -4949;
	uint16_t x324 = 24206U;
	volatile int32_t t77 = 4;

	t77 = ((x321<=(x322|x323))/x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x325 = 9859U;
	volatile int32_t x326 = INT32_MIN;
	volatile uint16_t x327 = UINT16_MAX;
	int64_t x328 = INT64_MIN;
	static volatile int64_t t78 = -410438817669874LL;

	t78 = ((x325<=(x326|x327))/x328);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x329 = 4865498177374826LLU;
	int64_t x330 = -21LL;
	uint8_t x331 = UINT8_MAX;
	int64_t x332 = -1LL;

	t79 = ((x329<=(x330|x331))/x332);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x333 = 108522769;
	int8_t x334 = -1;
	uint8_t x336 = 2U;
	volatile int32_t t80 = -342;

	t80 = ((x333<=(x334|x335))/x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = -1;
	int32_t x338 = INT32_MAX;
	volatile int64_t x340 = INT64_MIN;
	int64_t t81 = -35175LL;

	t81 = ((x337<=(x338|x339))/x340);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = INT64_MAX;
	int64_t x342 = 0LL;
	volatile uint16_t x343 = UINT16_MAX;
	volatile uint64_t x344 = UINT64_MAX;
	uint64_t t82 = 6924987635LLU;

	t82 = ((x341<=(x342|x343))/x344);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = INT64_MIN;
	static volatile int16_t x346 = INT16_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	uint16_t x348 = 616U;
	volatile int32_t t83 = 591;

	t83 = ((x345<=(x346|x347))/x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = -1;
	int32_t x350 = 167104015;
	int32_t x352 = 38;
	int32_t t84 = 1479;

	t84 = ((x349<=(x350|x351))/x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = INT16_MIN;
	static uint32_t x354 = 349039998U;
	int8_t x355 = INT8_MIN;
	uint16_t x356 = UINT16_MAX;
	int32_t t85 = 193586;

	t85 = ((x353<=(x354|x355))/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x357 = UINT16_MAX;
	uint32_t x358 = UINT32_MAX;
	int32_t x359 = -1;
	static int16_t x360 = 74;
	static int32_t t86 = 47;

	t86 = ((x357<=(x358|x359))/x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x361 = 1028286170630LLU;
	volatile int8_t x362 = INT8_MIN;
	static int16_t x363 = INT16_MIN;
	uint8_t x364 = 1U;

	t87 = ((x361<=(x362|x363))/x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MAX;
	int8_t x366 = INT8_MIN;
	int16_t x368 = -1;

	t88 = ((x365<=(x366|x367))/x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x369 = UINT16_MAX;
	int8_t x372 = INT8_MIN;
	int32_t t89 = 163;

	t89 = ((x369<=(x370|x371))/x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x374 = UINT32_MAX;
	volatile uint64_t x375 = UINT64_MAX;
	volatile int8_t x376 = -14;
	int32_t t90 = 10175;

	t90 = ((x373<=(x374|x375))/x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x377 = -1LL;
	int64_t x378 = -1LL;
	static int16_t x379 = 156;

	t91 = ((x377<=(x378|x379))/x380);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x382 = INT8_MIN;
	int32_t x383 = -1;
	static int32_t x384 = INT32_MIN;
	volatile int32_t t92 = 32554853;

	t92 = ((x381<=(x382|x383))/x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x389 = 7U;
	uint32_t x390 = 42453384U;
	static int8_t x391 = 46;
	static int32_t x392 = INT32_MAX;
	int32_t t93 = 0;

	t93 = ((x389<=(x390|x391))/x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x393 = UINT8_MAX;
	uint16_t x394 = UINT16_MAX;
	uint16_t x396 = 1805U;

	t94 = ((x393<=(x394|x395))/x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x397 = 39;
	uint8_t x398 = 93U;
	volatile uint8_t x400 = 7U;

	t95 = ((x397<=(x398|x399))/x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x402 = UINT32_MAX;
	uint32_t x403 = 546248014U;
	static int64_t x404 = -1288273LL;
	volatile int64_t t96 = -1658720673LL;

	t96 = ((x401<=(x402|x403))/x404);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = INT64_MAX;
	int32_t x406 = INT32_MAX;
	volatile uint32_t x407 = 23280204U;
	int8_t x408 = 1;
	volatile int32_t t97 = 9;

	t97 = ((x405<=(x406|x407))/x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x409 = 124U;
	int16_t x410 = INT16_MIN;
	uint16_t x411 = 250U;
	volatile int16_t x412 = -90;
	int32_t t98 = -24458032;

	t98 = ((x409<=(x410|x411))/x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x413 = 155U;
	int8_t x414 = 4;
	uint64_t x415 = 1930551886LLU;
	int32_t t99 = 53;

	t99 = ((x413<=(x414|x415))/x416);

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

