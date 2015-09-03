#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x6 = 229371LLU;
static int16_t x10 = -1;
volatile int32_t t2 = 5514;
uint16_t x15 = UINT16_MAX;
int16_t x16 = -1;
volatile uint32_t x20 = 2554638U;
static int32_t x23 = -1;
uint16_t x24 = UINT16_MAX;
int32_t t5 = -1;
uint8_t x35 = 2U;
int64_t x36 = -1LL;
int32_t t9 = 10365;
static uint8_t x41 = 59U;
uint8_t x45 = 13U;
uint16_t x50 = 3388U;
int32_t t12 = -8312219;
int8_t x59 = INT8_MIN;
int64_t x61 = 130772666737483425LL;
int16_t x64 = 0;
volatile int64_t x72 = -1LL;
volatile int32_t x73 = INT32_MIN;
static uint8_t x78 = 3U;
int8_t x81 = 1;
int32_t t20 = -165498895;
volatile uint64_t x90 = 129500160277676LLU;
volatile int32_t t22 = -17483746;
static int8_t x95 = INT8_MIN;
volatile int32_t t23 = 19;
volatile int64_t x100 = -29034107577LL;
volatile uint32_t x101 = 985U;
volatile uint8_t x107 = 4U;
int32_t t26 = -12557;
uint32_t x111 = 225836U;
volatile int32_t t27 = -60141600;
volatile uint64_t x114 = 7556040LLU;
volatile int32_t t29 = -15020;
int32_t x126 = 3;
volatile int8_t x127 = 1;
volatile int32_t t32 = 1008280;
int8_t x142 = -1;
int8_t x144 = INT8_MIN;
int32_t t36 = 595001301;
static int32_t x152 = INT32_MAX;
int64_t x155 = -1LL;
int32_t t40 = -83;
int64_t x165 = INT64_MIN;
volatile int32_t t41 = -28050;
volatile uint64_t x171 = 18653401568LLU;
int16_t x172 = INT16_MAX;
uint16_t x176 = 69U;
volatile int8_t x178 = INT8_MIN;
static volatile int32_t x180 = INT32_MAX;
volatile uint32_t x181 = UINT32_MAX;
volatile uint8_t x198 = 15U;
volatile int16_t x200 = 6398;
int32_t t49 = 55289452;
int16_t x207 = INT16_MAX;
static int64_t x208 = INT64_MIN;
volatile uint8_t x211 = 0U;
uint32_t x216 = 916353258U;
int16_t x218 = 7;
static volatile uint32_t x220 = UINT32_MAX;
volatile int32_t t55 = 1032337736;
uint8_t x226 = 9U;
int16_t x228 = INT16_MIN;
int16_t x230 = 13193;
int16_t x231 = -1;
int64_t x233 = 1484LL;
static volatile int64_t x236 = INT64_MIN;
static uint32_t x244 = 3U;
int32_t x246 = INT32_MIN;
int8_t x248 = INT8_MAX;
static int32_t x250 = INT32_MAX;
static uint16_t x252 = 2U;
int32_t x257 = -1;
int32_t x263 = -1;
volatile int32_t t66 = 4700249;
int16_t x269 = 1;
static int64_t x275 = 733LL;
volatile int32_t t68 = 1;
uint16_t x277 = UINT16_MAX;
uint16_t x283 = 1U;
volatile int32_t t70 = -195;
static volatile int16_t x285 = -1;
volatile int64_t x295 = INT64_MAX;
int16_t x301 = -1;
int32_t t75 = 3;
uint64_t x308 = 13452LLU;
int32_t t76 = -1962;
int8_t x311 = INT8_MAX;
static int32_t x312 = INT32_MAX;
uint16_t x313 = UINT16_MAX;
int32_t t79 = 1;
uint16_t x328 = 1890U;
int32_t t81 = -6746;
volatile int32_t t85 = -8;
uint64_t x355 = 449LLU;
uint16_t x359 = 44U;
static int16_t x363 = -385;
int32_t x368 = INT32_MIN;
int64_t x380 = -1LL;
volatile uint16_t x382 = 25U;
static uint8_t x388 = 2U;
volatile int32_t t98 = 321312;
int16_t x397 = INT16_MAX;
volatile int32_t t99 = -442082;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	int8_t x2 = 20;
	int32_t x3 = 14209175;
	static int8_t x4 = -1;
	volatile int32_t t0 = 255896693;

	t0 = ((x1<(x2|x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	uint64_t x7 = 11220LLU;
	int8_t x8 = 1;
	volatile int32_t t1 = -32104853;

	t1 = ((x5<(x6|x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int16_t x11 = INT16_MAX;
	volatile int64_t x12 = INT64_MIN;

	t2 = ((x9<(x10|x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MIN;
	volatile int32_t t3 = -19371285;

	t3 = ((x13<(x14|x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	volatile int64_t x18 = -1LL;
	uint64_t x19 = 2942LLU;
	int32_t t4 = -6460;

	t4 = ((x17<(x18|x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 29;
	uint16_t x22 = 0U;

	t5 = ((x21<(x22|x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = 23259;
	uint32_t x26 = 12U;
	volatile uint32_t x27 = 1651U;
	int32_t x28 = -965664;
	volatile int32_t t6 = 57386;

	t6 = ((x25<(x26|x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int8_t x30 = -1;
	int64_t x31 = -195769576LL;
	volatile int64_t x32 = -115992525905264662LL;
	int32_t t7 = 19745;

	t7 = ((x29<(x30|x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 26U;
	uint16_t x34 = 4412U;
	static volatile int32_t t8 = 116908;

	t8 = ((x33<(x34|x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 1U;
	int16_t x38 = -1;
	int32_t x39 = 169;
	uint64_t x40 = 443LLU;

	t9 = ((x37<(x38|x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x42 = -1;
	int64_t x43 = INT64_MAX;
	volatile uint32_t x44 = 491549799U;
	volatile int32_t t10 = -122788;

	t10 = ((x41<(x42|x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 425432933098LLU;
	volatile int8_t x47 = INT8_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t11 = 0;

	t11 = ((x45<(x46|x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile int32_t x51 = INT32_MAX;
	static uint16_t x52 = 7U;

	t12 = ((x49<(x50|x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	uint32_t x54 = 31790U;
	uint16_t x55 = 5U;
	int8_t x56 = 0;
	int32_t t13 = 355561;

	t13 = ((x53<(x54|x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 9;
	int64_t x58 = -1LL;
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 14251629;

	t14 = ((x57<(x58|x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = 120;
	uint8_t x63 = UINT8_MAX;
	int32_t t15 = 412610;

	t15 = ((x61<(x62|x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int16_t x66 = INT16_MAX;
	int16_t x67 = -1;
	uint64_t x68 = 349187499927024LLU;
	volatile int32_t t16 = -13768;

	t16 = ((x65<(x66|x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MAX;
	int32_t x70 = -2;
	static int16_t x71 = 7;
	static volatile int32_t t17 = 44;

	t17 = ((x69<(x70|x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = INT64_MAX;
	int16_t x75 = INT16_MIN;
	int32_t x76 = INT32_MIN;
	static volatile int32_t t18 = 1;

	t18 = ((x73<(x74|x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -1LL;
	int64_t x79 = INT64_MIN;
	int8_t x80 = 0;
	static int32_t t19 = -349;

	t19 = ((x77<(x78|x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = 13;
	int64_t x83 = -1LL;
	volatile int16_t x84 = -1;

	t20 = ((x81<(x82|x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -5001355;
	static uint32_t x86 = 8190623U;
	uint16_t x87 = UINT16_MAX;
	volatile int8_t x88 = -51;
	int32_t t21 = 1813;

	t21 = ((x85<(x86|x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = 146;
	int32_t x91 = 529;
	uint16_t x92 = UINT16_MAX;

	t22 = ((x89<(x90|x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = UINT16_MAX;
	uint64_t x94 = UINT64_MAX;
	int64_t x96 = -1LL;

	t23 = ((x93<(x94|x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MAX;
	int16_t x98 = INT16_MAX;
	int32_t x99 = INT32_MIN;
	int32_t t24 = -3808;

	t24 = ((x97<(x98|x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = 0;
	static int16_t x103 = -1;
	volatile int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -62290;

	t25 = ((x101<(x102|x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 170;
	int16_t x106 = INT16_MIN;
	volatile uint16_t x108 = 0U;

	t26 = ((x105<(x106|x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -424164LL;
	int16_t x110 = 1;
	volatile uint32_t x112 = UINT32_MAX;

	t27 = ((x109<(x110|x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	volatile int16_t x115 = -1;
	int16_t x116 = 18;
	volatile int32_t t28 = 16988542;

	t28 = ((x113<(x114|x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint8_t x118 = 12U;
	static uint16_t x119 = UINT16_MAX;
	int32_t x120 = -2092;

	t29 = ((x117<(x118|x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 23595U;
	int8_t x122 = -1;
	uint32_t x123 = UINT32_MAX;
	static int64_t x124 = INT64_MIN;
	volatile int32_t t30 = -122490;

	t30 = ((x121<(x122|x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = UINT64_MAX;
	uint64_t x128 = UINT64_MAX;
	int32_t t31 = -4348378;

	t31 = ((x125<(x126|x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -441339903946LL;
	int64_t x130 = INT64_MIN;
	static int32_t x131 = INT32_MIN;
	uint16_t x132 = UINT16_MAX;

	t32 = ((x129<(x130|x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = INT8_MIN;
	volatile int32_t x134 = 216330511;
	volatile int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MIN;
	static int32_t t33 = 22;

	t33 = ((x133<(x134|x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x137 = 2000U;
	volatile int16_t x138 = 2435;
	int32_t x139 = -1;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t34 = -190149;

	t34 = ((x137<(x138|x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1020;
	int16_t x143 = -1;
	volatile int32_t t35 = 23714670;

	t35 = ((x141<(x142|x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	int64_t x146 = -1LL;
	volatile uint64_t x147 = 458LLU;
	uint64_t x148 = UINT64_MAX;

	t36 = ((x145<(x146|x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 112;
	int64_t x150 = -12450823819LL;
	int16_t x151 = -1335;
	static int32_t t37 = -5188;

	t37 = ((x149<(x150|x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MAX;
	int32_t x154 = -1;
	int8_t x156 = INT8_MIN;
	int32_t t38 = -4860466;

	t38 = ((x153<(x154|x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = -1;
	static volatile int64_t x158 = -1382356LL;
	uint32_t x159 = UINT32_MAX;
	uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = 17069490;

	t39 = ((x157<(x158|x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 7906739U;
	static volatile int8_t x162 = INT8_MAX;
	static int32_t x163 = -1;
	uint8_t x164 = 3U;

	t40 = ((x161<(x162|x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = UINT8_MAX;
	static int8_t x167 = 11;
	int32_t x168 = 87;

	t41 = ((x165<(x166|x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	uint16_t x170 = UINT16_MAX;
	volatile int32_t t42 = -5278929;

	t42 = ((x169<(x170|x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 767618227;
	int16_t x174 = -1;
	volatile int8_t x175 = 2;
	volatile int32_t t43 = -390;

	t43 = ((x173<(x174|x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	uint8_t x179 = 2U;
	int32_t t44 = 1881592;

	t44 = ((x177<(x178|x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = -1LL;
	static int64_t x183 = INT64_MIN;
	volatile uint16_t x184 = 4744U;
	volatile int32_t t45 = 1;

	t45 = ((x181<(x182|x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 34728869293998LL;
	static uint16_t x186 = UINT16_MAX;
	int8_t x187 = -1;
	int32_t x188 = INT32_MAX;
	volatile int32_t t46 = 262301;

	t46 = ((x185<(x186|x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 16U;
	volatile uint64_t x190 = 1LLU;
	static int16_t x191 = INT16_MIN;
	static int64_t x192 = -429965464400604478LL;
	volatile int32_t t47 = 854946102;

	t47 = ((x189<(x190|x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x194 = -872384279976939332LL;
	static uint16_t x195 = UINT16_MAX;
	int64_t x196 = 2484810089200201562LL;
	static int32_t t48 = -575524627;

	t48 = ((x193<(x194|x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x197 = UINT16_MAX;
	uint32_t x199 = 68U;

	t49 = ((x197<(x198|x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 41401705U;
	uint32_t x202 = 26769713U;
	static volatile uint16_t x203 = UINT16_MAX;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t50 = 2991104;

	t50 = ((x201<(x202|x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	uint8_t x206 = UINT8_MAX;
	int32_t t51 = 1410597;

	t51 = ((x205<(x206|x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x209 = -1;
	int8_t x210 = 0;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 2316186;

	t52 = ((x209<(x210|x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 6;
	int64_t x214 = -2123LL;
	uint32_t x215 = 91088U;
	volatile int32_t t53 = -29866;

	t53 = ((x213<(x214|x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x217 = UINT32_MAX;
	int8_t x219 = -1;
	volatile int32_t t54 = 164;

	t54 = ((x217<(x218|x219))<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 15;
	static int8_t x222 = -1;
	int32_t x223 = -1;
	int32_t x224 = INT32_MIN;

	t55 = ((x221<(x222|x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x225 = 149014174285LLU;
	int32_t x227 = INT32_MAX;
	static int32_t t56 = -81276917;

	t56 = ((x225<(x226|x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = 1;
	volatile int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -706;

	t57 = ((x229<(x230|x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = -1;
	int32_t x235 = -1;
	volatile int32_t t58 = 1;

	t58 = ((x233<(x234|x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 433180U;
	uint32_t x238 = 80991711U;
	int32_t x239 = INT32_MIN;
	volatile int32_t x240 = INT32_MAX;
	int32_t t59 = 5007552;

	t59 = ((x237<(x238|x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	static uint8_t x242 = UINT8_MAX;
	int16_t x243 = 1;
	int32_t t60 = 1232225;

	t60 = ((x241<(x242|x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int8_t x247 = INT8_MIN;
	volatile int32_t t61 = 14484152;

	t61 = ((x245<(x246|x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = -42;
	int16_t x251 = -36;
	static volatile int32_t t62 = -1063931280;

	t62 = ((x249<(x250|x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 318309815U;
	uint16_t x254 = 43U;
	int8_t x255 = -48;
	uint32_t x256 = UINT32_MAX;
	static int32_t t63 = -89431527;

	t63 = ((x253<(x254|x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x258 = UINT8_MAX;
	static int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	volatile int32_t t64 = 0;

	t64 = ((x257<(x258|x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 52;
	int8_t x262 = INT8_MIN;
	int8_t x264 = -1;
	volatile int32_t t65 = 934;

	t65 = ((x261<(x262|x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 77486588618889002LLU;
	int64_t x266 = -1LL;
	int16_t x267 = 1;
	uint32_t x268 = 2683329U;

	t66 = ((x265<(x266|x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = -1;
	uint32_t x271 = 7U;
	uint8_t x272 = 0U;
	static int32_t t67 = -579185;

	t67 = ((x269<(x270|x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	static int32_t x274 = 195965689;
	static int64_t x276 = -26LL;

	t68 = ((x273<(x274|x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = -1;
	volatile uint8_t x279 = 28U;
	uint8_t x280 = UINT8_MAX;
	static volatile int32_t t69 = -341495;

	t69 = ((x277<(x278|x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 8U;
	int8_t x282 = INT8_MAX;
	int32_t x284 = INT32_MIN;

	t70 = ((x281<(x282|x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x286 = 1U;
	int8_t x287 = INT8_MIN;
	static int16_t x288 = -1;
	static int32_t t71 = -104;

	t71 = ((x285<(x286|x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MIN;
	uint16_t x292 = 652U;
	volatile int32_t t72 = 10101;

	t72 = ((x289<(x290|x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	static uint16_t x294 = 2U;
	int32_t x296 = INT32_MIN;
	volatile int32_t t73 = 0;

	t73 = ((x293<(x294|x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	static int32_t x298 = -1;
	static uint16_t x299 = 2U;
	volatile uint8_t x300 = 2U;
	int32_t t74 = -438119742;

	t74 = ((x297<(x298|x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x302 = -1;
	uint8_t x303 = UINT8_MAX;
	int8_t x304 = INT8_MIN;

	t75 = ((x301<(x302|x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 16U;
	uint64_t x306 = UINT64_MAX;
	uint64_t x307 = UINT64_MAX;

	t76 = ((x305<(x306|x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = UINT64_MAX;
	int8_t x310 = -1;
	static int32_t t77 = 0;

	t77 = ((x309<(x310|x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x314 = INT64_MIN;
	int16_t x315 = -16;
	static int32_t x316 = INT32_MIN;
	volatile int32_t t78 = -1283661;

	t78 = ((x313<(x314|x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -3346;
	int8_t x318 = 1;
	static int8_t x319 = -1;
	static uint64_t x320 = UINT64_MAX;

	t79 = ((x317<(x318|x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x321 = 6U;
	int16_t x322 = INT16_MAX;
	static int8_t x323 = INT8_MIN;
	uint32_t x324 = UINT32_MAX;
	int32_t t80 = -4948;

	t80 = ((x321<(x322|x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -241788;
	volatile int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MAX;

	t81 = ((x325<(x326|x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = -440379038948268LL;
	volatile uint32_t x330 = UINT32_MAX;
	int16_t x331 = INT16_MIN;
	int32_t x332 = -12731;
	volatile int32_t t82 = 10;

	t82 = ((x329<(x330|x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	int64_t x334 = INT64_MIN;
	volatile uint8_t x335 = UINT8_MAX;
	int16_t x336 = 17;
	static volatile int32_t t83 = -21087216;

	t83 = ((x333<(x334|x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 93176;
	static int16_t x338 = 1;
	volatile uint64_t x339 = 365456570900283795LLU;
	uint8_t x340 = 14U;
	volatile int32_t t84 = -3;

	t84 = ((x337<(x338|x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = 12685U;
	static int16_t x342 = INT16_MIN;
	int32_t x343 = 140868;
	int64_t x344 = -958184LL;

	t85 = ((x341<(x342|x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	int8_t x346 = -1;
	static volatile int8_t x347 = INT8_MAX;
	volatile int64_t x348 = INT64_MIN;
	static volatile int32_t t86 = -7;

	t86 = ((x345<(x346|x347))<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = INT32_MIN;
	uint8_t x350 = UINT8_MAX;
	uint64_t x351 = 107277004LLU;
	volatile int64_t x352 = INT64_MAX;
	int32_t t87 = 1;

	t87 = ((x349<(x350|x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x353 = -1;
	int8_t x354 = -1;
	volatile uint32_t x356 = 3050U;
	int32_t t88 = 5766134;

	t88 = ((x353<(x354|x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MIN;
	int16_t x358 = 1;
	static int64_t x360 = 1048190142410833LL;
	int32_t t89 = -7;

	t89 = ((x357<(x358|x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 1U;
	int16_t x362 = -1;
	volatile uint64_t x364 = UINT64_MAX;
	volatile int32_t t90 = -1;

	t90 = ((x361<(x362|x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = -1LL;
	int32_t x366 = 24;
	int32_t x367 = INT32_MAX;
	int32_t t91 = -31233;

	t91 = ((x365<(x366|x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = INT32_MAX;
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = 1;
	volatile uint64_t x372 = 15LLU;
	volatile int32_t t92 = -171718;

	t92 = ((x369<(x370|x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x373 = INT16_MAX;
	int16_t x374 = 15;
	int32_t x375 = INT32_MIN;
	volatile int8_t x376 = 51;
	int32_t t93 = 170;

	t93 = ((x373<(x374|x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x377 = 10U;
	int64_t x378 = -1LL;
	int16_t x379 = 4558;
	int32_t t94 = 11988372;

	t94 = ((x377<(x378|x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	int64_t x383 = 106083343061164LL;
	int16_t x384 = INT16_MIN;
	int32_t t95 = 19;

	t95 = ((x381<(x382|x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int32_t x386 = -71;
	uint8_t x387 = UINT8_MAX;
	volatile int32_t t96 = 65;

	t96 = ((x385<(x386|x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	static volatile int8_t x390 = INT8_MAX;
	uint64_t x391 = UINT64_MAX;
	uint8_t x392 = 45U;
	int32_t t97 = -1;

	t97 = ((x389<(x390|x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 3LL;
	volatile int16_t x394 = INT16_MIN;
	int16_t x395 = INT16_MIN;
	static int64_t x396 = 25496LL;

	t98 = ((x393<(x394|x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x398 = -1;
	volatile uint16_t x399 = UINT16_MAX;
	static volatile int64_t x400 = -3961452LL;

	t99 = ((x397<(x398|x399))<x400);

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

