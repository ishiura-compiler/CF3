#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x5 = -270562662LL;
uint64_t x9 = 2836719079604336457LLU;
uint32_t x12 = 66124U;
static int32_t t3 = 691;
volatile int32_t x18 = INT32_MIN;
volatile int64_t t4 = INT64_MIN;
uint16_t x21 = 7967U;
int32_t x23 = -1;
uint64_t x41 = UINT64_MAX;
volatile int64_t x42 = INT64_MIN;
uint32_t x46 = 74583016U;
volatile int32_t t11 = 208;
static volatile uint16_t x56 = UINT16_MAX;
static int32_t t13 = 281;
volatile int32_t t14 = -3;
int32_t x64 = -1;
volatile int32_t t15 = 6;
volatile uint64_t t16 = 33017753877521LLU;
volatile int32_t x70 = INT32_MAX;
uint32_t x71 = 1U;
uint64_t t17 = UINT64_MAX;
int32_t x74 = 8692;
volatile int32_t t18 = -177637;
int8_t x78 = INT8_MIN;
static uint32_t x79 = UINT32_MAX;
int64_t x84 = 50230164LL;
static int64_t x88 = -1LL;
volatile int64_t t21 = -29385399792302406LL;
static uint16_t x93 = 18387U;
volatile int32_t t24 = -906264;
int32_t x102 = 15179;
int8_t x104 = -16;
static int32_t t25 = 323614394;
static uint16_t x109 = 3009U;
uint8_t x113 = 52U;
uint8_t x118 = UINT8_MAX;
static volatile uint8_t x126 = UINT8_MAX;
volatile int32_t t31 = -1;
uint16_t x132 = 15733U;
static int8_t x133 = INT8_MAX;
int64_t x135 = -2262518LL;
uint64_t x144 = UINT64_MAX;
uint16_t x148 = 93U;
int16_t x151 = 4;
int64_t x152 = INT64_MIN;
volatile uint16_t x156 = UINT16_MAX;
static volatile int64_t x162 = -33489332874LL;
int32_t t40 = 12220513;
uint16_t x172 = 1454U;
static uint8_t x178 = UINT8_MAX;
volatile int8_t x179 = -1;
static uint16_t x189 = UINT16_MAX;
volatile int32_t t48 = 135;
int32_t x205 = -563;
int8_t x207 = INT8_MAX;
int64_t x209 = INT64_MIN;
volatile int64_t t52 = 1217464331LL;
int64_t x220 = 4284794630977921LL;
int64_t t54 = 1586797173148LL;
int64_t x224 = INT64_MAX;
int16_t x227 = -1;
static uint64_t x231 = 3443923649766500LLU;
volatile int32_t x243 = INT32_MIN;
volatile int32_t t60 = INT32_MIN;
int32_t t62 = -3485;
uint8_t x261 = UINT8_MAX;
static volatile int32_t t65 = 8;
uint32_t x265 = 1025714081U;
int64_t x266 = -1LL;
uint64_t x273 = 2642541LLU;
uint16_t x276 = UINT16_MAX;
uint8_t x281 = UINT8_MAX;
static volatile int32_t t71 = -247409;
volatile uint32_t t72 = 981965U;
int32_t t76 = 507;
int32_t x310 = INT32_MIN;
static int8_t x311 = INT8_MAX;
uint64_t x312 = UINT64_MAX;
uint8_t x313 = UINT8_MAX;
int32_t t79 = -202687703;
uint32_t x323 = 0U;
int32_t x328 = -1;
volatile int32_t t82 = 0;
int16_t x335 = 20;
int64_t x336 = INT64_MIN;
int64_t x340 = 0LL;
int64_t x349 = INT64_MIN;
static int8_t x350 = INT8_MAX;
int16_t x362 = -1;
int16_t x366 = INT16_MIN;
static int8_t x376 = 3;
int32_t t93 = -692972;
int8_t x382 = -1;
uint32_t x386 = UINT32_MAX;
int32_t t96 = 81;
int64_t x394 = -1LL;
int32_t x396 = -1;
int16_t x400 = INT16_MIN;
int32_t t99 = -1410;


void f0(void) {
	int32_t x1 = 65831647;
	uint16_t x2 = UINT16_MAX;
	volatile int8_t x3 = -3;
	static int16_t x4 = -1;
	volatile int32_t t0 = 58;

	t0 = ((x1==(x2|x3))^x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	int32_t x7 = -1;
	uint16_t x8 = 17981U;
	int32_t t1 = 21511;

	t1 = ((x5==(x6|x7))^x8);

	if (t1 != 17981) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = -332094102;
	static uint16_t x11 = 92U;
	uint32_t t2 = 10747U;

	t2 = ((x9==(x10|x11))^x12);

	if (t2 != 66124U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 1;
	uint64_t x14 = 73681467970711129LLU;
	int16_t x15 = 833;
	int16_t x16 = INT16_MAX;

	t3 = ((x13==(x14|x15))^x16);

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int64_t x19 = 7295525650140LL;
	int64_t x20 = INT64_MIN;

	t4 = ((x17==(x18|x19))^x20);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -5;
	int8_t x24 = -1;
	int32_t t5 = 183420301;

	t5 = ((x21==(x22|x23))^x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int16_t x26 = -1;
	static volatile uint64_t x27 = UINT64_MAX;
	volatile int32_t x28 = INT32_MIN;
	static int32_t t6 = INT32_MIN;

	t6 = ((x25==(x26|x27))^x28);

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MAX;
	static int32_t x30 = 166;
	int32_t x31 = INT32_MAX;
	int64_t x32 = -13104LL;
	volatile int64_t t7 = 745LL;

	t7 = ((x29==(x30|x31))^x32);

	if (t7 != -13104LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 2U;
	volatile uint32_t x34 = UINT32_MAX;
	int32_t x35 = -78002;
	static volatile int64_t x36 = 4950806453795LL;
	volatile int64_t t8 = 954396994342LL;

	t8 = ((x33==(x34|x35))^x36);

	if (t8 != 4950806453795LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	volatile int16_t x38 = INT16_MAX;
	static uint64_t x39 = UINT64_MAX;
	int64_t x40 = -1LL;
	volatile int64_t t9 = 165540814266LL;

	t9 = ((x37==(x38|x39))^x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x43 = INT32_MIN;
	int64_t x44 = INT64_MIN;
	static int64_t t10 = INT64_MIN;

	t10 = ((x41==(x42|x43))^x44);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	uint8_t x47 = UINT8_MAX;
	volatile int8_t x48 = INT8_MAX;

	t11 = ((x45==(x46|x47))^x48);

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x49 = INT16_MIN;
	int8_t x50 = -1;
	int8_t x51 = INT8_MIN;
	int8_t x52 = 0;
	int32_t t12 = 750;

	t12 = ((x49==(x50|x51))^x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	uint8_t x54 = 41U;
	uint32_t x55 = UINT32_MAX;

	t13 = ((x53==(x54|x55))^x56);

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = UINT32_MAX;
	volatile int64_t x58 = -1LL;
	uint64_t x59 = UINT64_MAX;
	volatile int16_t x60 = -2836;

	t14 = ((x57==(x58|x59))^x60);

	if (t14 != -2836) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 507U;
	static volatile int16_t x62 = INT16_MIN;
	int16_t x63 = -1;

	t15 = ((x61==(x62|x63))^x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x65 = UINT8_MAX;
	volatile int64_t x66 = INT64_MAX;
	uint32_t x67 = 355783U;
	uint64_t x68 = 43110482298559LLU;

	t16 = ((x65==(x66|x67))^x68);

	if (t16 != 43110482298559LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MAX;
	static uint64_t x72 = UINT64_MAX;

	t17 = ((x69==(x70|x71))^x72);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	int32_t x75 = -1;
	uint8_t x76 = 5U;

	t18 = ((x73==(x74|x75))^x76);

	if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -1667197744816386LL;
	volatile int64_t x80 = 21LL;
	volatile int64_t t19 = -1537LL;

	t19 = ((x77==(x78|x79))^x80);

	if (t19 != 21LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MAX;
	volatile int16_t x82 = -714;
	static int16_t x83 = INT16_MIN;
	volatile int64_t t20 = -13642618LL;

	t20 = ((x81==(x82|x83))^x84);

	if (t20 != 50230164LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 479821LLU;
	int8_t x86 = INT8_MIN;
	volatile int8_t x87 = INT8_MAX;

	t21 = ((x85==(x86|x87))^x88);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 3126U;
	static int32_t x90 = INT32_MIN;
	uint32_t x91 = UINT32_MAX;
	uint8_t x92 = 76U;
	int32_t t22 = 22875599;

	t22 = ((x89==(x90|x91))^x92);

	if (t22 != 76) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = INT8_MIN;
	static volatile int16_t x95 = INT16_MIN;
	int8_t x96 = 16;
	volatile int32_t t23 = -11747;

	t23 = ((x93==(x94|x95))^x96);

	if (t23 != 16) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int64_t x98 = INT64_MIN;
	static int16_t x99 = INT16_MIN;
	static int16_t x100 = INT16_MIN;

	t24 = ((x97==(x98|x99))^x100);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	static uint64_t x103 = 129730421635LLU;

	t25 = ((x101==(x102|x103))^x104);

	if (t25 != -16) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 877897536U;
	volatile int64_t x106 = INT64_MIN;
	int16_t x107 = INT16_MIN;
	volatile int32_t x108 = 14;
	static volatile int32_t t26 = -28153;

	t26 = ((x105==(x106|x107))^x108);

	if (t26 != 14) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = 32959690464LLU;
	uint32_t x111 = 1715U;
	volatile uint16_t x112 = UINT16_MAX;
	int32_t t27 = 387461;

	t27 = ((x109==(x110|x111))^x112);

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MIN;
	static int16_t x115 = INT16_MIN;
	uint16_t x116 = UINT16_MAX;
	static volatile int32_t t28 = -4373568;

	t28 = ((x113==(x114|x115))^x116);

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	static uint8_t x119 = UINT8_MAX;
	uint8_t x120 = 3U;
	int32_t t29 = -24;

	t29 = ((x117==(x118|x119))^x120);

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MIN;
	int32_t x123 = INT32_MAX;
	volatile uint8_t x124 = 117U;
	volatile int32_t t30 = -242513764;

	t30 = ((x121==(x122|x123))^x124);

	if (t30 != 117) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = UINT8_MAX;
	static int8_t x127 = 54;
	static int16_t x128 = 260;

	t31 = ((x125==(x126|x127))^x128);

	if (t31 != 261) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = 3;
	int32_t x130 = INT32_MIN;
	static volatile int64_t x131 = INT64_MAX;
	int32_t t32 = 1;

	t32 = ((x129==(x130|x131))^x132);

	if (t32 != 15733) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = INT8_MIN;
	int8_t x136 = -1;
	int32_t t33 = -3;

	t33 = ((x133==(x134|x135))^x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 9530U;
	uint32_t x138 = 48U;
	int64_t x139 = 6335259416LL;
	int32_t x140 = INT32_MIN;
	static int32_t t34 = INT32_MIN;

	t34 = ((x137==(x138|x139))^x140);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	uint16_t x142 = 2U;
	int16_t x143 = 96;
	uint64_t t35 = UINT64_MAX;

	t35 = ((x141==(x142|x143))^x144);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	uint32_t x146 = 87213U;
	int64_t x147 = INT64_MIN;
	int32_t t36 = -30016648;

	t36 = ((x145==(x146|x147))^x148);

	if (t36 != 93) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = 1832001506953LL;
	int64_t x150 = INT64_MIN;
	int64_t t37 = INT64_MIN;

	t37 = ((x149==(x150|x151))^x152);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 6U;
	static int64_t x154 = INT64_MAX;
	static int8_t x155 = -1;
	volatile int32_t t38 = 71261519;

	t38 = ((x153==(x154|x155))^x156);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	uint32_t x158 = 18884U;
	uint16_t x159 = 8093U;
	volatile uint8_t x160 = 62U;
	volatile int32_t t39 = 745497;

	t39 = ((x157==(x158|x159))^x160);

	if (t39 != 62) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	static uint64_t x163 = 5307329471529486LLU;
	int8_t x164 = INT8_MIN;

	t40 = ((x161==(x162|x163))^x164);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 1U;
	uint8_t x166 = 82U;
	int32_t x167 = INT32_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t41 = 124262;

	t41 = ((x165==(x166|x167))^x168);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MIN;
	volatile int32_t x170 = INT32_MAX;
	uint8_t x171 = 13U;
	volatile int32_t t42 = 10745;

	t42 = ((x169==(x170|x171))^x172);

	if (t42 != 1454) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MIN;
	volatile uint64_t x176 = 47293516394LLU;
	volatile uint64_t t43 = 3381LLU;

	t43 = ((x173==(x174|x175))^x176);

	if (t43 != 47293516394LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	static volatile uint8_t x180 = 3U;
	int32_t t44 = -1739;

	t44 = ((x177==(x178|x179))^x180);

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 104029;
	static uint64_t x182 = UINT64_MAX;
	static int8_t x183 = 14;
	int32_t x184 = -1;
	volatile int32_t t45 = 966509096;

	t45 = ((x181==(x182|x183))^x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x185 = 3461LLU;
	uint16_t x186 = 0U;
	int16_t x187 = INT16_MIN;
	int64_t x188 = -1LL;
	int64_t t46 = 120177LL;

	t46 = ((x185==(x186|x187))^x188);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = INT32_MIN;
	uint32_t x191 = 9888345U;
	int8_t x192 = -34;
	int32_t t47 = 58;

	t47 = ((x189==(x190|x191))^x192);

	if (t47 != -34) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -57553144;
	int32_t x194 = INT32_MIN;
	int32_t x195 = 1;
	int8_t x196 = 0;

	t48 = ((x193==(x194|x195))^x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = -1LL;
	uint16_t x198 = 113U;
	static int16_t x199 = INT16_MIN;
	int32_t x200 = 2065594;
	int32_t t49 = -1;

	t49 = ((x197==(x198|x199))^x200);

	if (t49 != 2065594) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	static int8_t x202 = INT8_MAX;
	volatile int64_t x203 = -1LL;
	int16_t x204 = INT16_MIN;
	int32_t t50 = -14;

	t50 = ((x201==(x202|x203))^x204);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x206 = INT16_MIN;
	int16_t x208 = 1;
	volatile int32_t t51 = 72456;

	t51 = ((x205==(x206|x207))^x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = INT32_MAX;
	uint64_t x211 = 15516719LLU;
	volatile int64_t x212 = -23750737569224LL;

	t52 = ((x209==(x210|x211))^x212);

	if (t52 != -23750737569224LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 421159506U;
	uint16_t x214 = 15224U;
	volatile uint16_t x215 = 1U;
	volatile int8_t x216 = INT8_MIN;
	int32_t t53 = 598848;

	t53 = ((x213==(x214|x215))^x216);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 10971;
	int64_t x218 = 52LL;
	int16_t x219 = INT16_MAX;

	t54 = ((x217==(x218|x219))^x220);

	if (t54 != 4284794630977921LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 642U;
	int16_t x222 = -1;
	int8_t x223 = INT8_MAX;
	volatile int64_t t55 = INT64_MAX;

	t55 = ((x221==(x222|x223))^x224);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MAX;
	int8_t x226 = 1;
	volatile int8_t x228 = INT8_MIN;
	volatile int32_t t56 = 543721683;

	t56 = ((x225==(x226|x227))^x228);

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 3U;
	int16_t x230 = -5821;
	int64_t x232 = -1LL;
	int64_t t57 = 0LL;

	t57 = ((x229==(x230|x231))^x232);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = -70;
	int32_t x234 = INT32_MAX;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = UINT64_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = ((x233==(x234|x235))^x236);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x237 = 60LLU;
	uint32_t x238 = UINT32_MAX;
	volatile int8_t x239 = -15;
	static volatile int64_t x240 = -1LL;
	static volatile int64_t t59 = -7265LL;

	t59 = ((x237==(x238|x239))^x240);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -3117;
	int32_t x242 = INT32_MIN;
	int32_t x244 = INT32_MIN;

	t60 = ((x241==(x242|x243))^x244);

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 897661U;
	volatile int16_t x246 = -618;
	int16_t x247 = INT16_MAX;
	static uint16_t x248 = 3U;
	int32_t t61 = -84669513;

	t61 = ((x245==(x246|x247))^x248);

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = -1;
	int8_t x250 = -12;
	static uint32_t x251 = 56569181U;
	static int8_t x252 = -1;

	t62 = ((x249==(x250|x251))^x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MIN;
	int32_t x255 = INT32_MIN;
	int8_t x256 = -1;
	static int32_t t63 = -190449;

	t63 = ((x253==(x254|x255))^x256);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 3U;
	uint8_t x258 = 50U;
	static uint8_t x259 = UINT8_MAX;
	uint32_t x260 = 1809U;
	uint32_t t64 = 415150U;

	t64 = ((x257==(x258|x259))^x260);

	if (t64 != 1809U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x262 = INT16_MAX;
	volatile uint8_t x263 = 1U;
	volatile int16_t x264 = INT16_MIN;

	t65 = ((x261==(x262|x263))^x264);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x267 = -4;
	int8_t x268 = -1;
	static int32_t t66 = -2320;

	t66 = ((x265==(x266|x267))^x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = UINT8_MAX;
	int16_t x270 = INT16_MAX;
	int16_t x271 = -7;
	volatile int64_t x272 = INT64_MIN;
	int64_t t67 = INT64_MIN;

	t67 = ((x269==(x270|x271))^x272);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MAX;
	int8_t x275 = -1;
	int32_t t68 = 199971398;

	t68 = ((x273==(x274|x275))^x276);

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 3U;
	int16_t x278 = 100;
	int64_t x279 = -13625LL;
	uint8_t x280 = 8U;
	volatile int32_t t69 = -315886;

	t69 = ((x277==(x278|x279))^x280);

	if (t69 != 8) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = 3498;
	int32_t x283 = INT32_MIN;
	volatile int8_t x284 = -1;
	volatile int32_t t70 = 3725713;

	t70 = ((x281==(x282|x283))^x284);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	static int16_t x286 = -1;
	volatile uint64_t x287 = 31LLU;
	int32_t x288 = INT32_MIN;

	t71 = ((x285==(x286|x287))^x288);

	if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = -3288LL;
	int8_t x290 = -52;
	uint8_t x291 = 5U;
	uint32_t x292 = 40732886U;

	t72 = ((x289==(x290|x291))^x292);

	if (t72 != 40732886U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x293 = UINT16_MAX;
	uint16_t x294 = 2U;
	static uint64_t x295 = 3718658950097012530LLU;
	int8_t x296 = INT8_MIN;
	int32_t t73 = -3619270;

	t73 = ((x293==(x294|x295))^x296);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	int64_t x298 = -1LL;
	int8_t x299 = 1;
	int64_t x300 = INT64_MIN;
	int64_t t74 = INT64_MIN;

	t74 = ((x297==(x298|x299))^x300);

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MAX;
	int64_t x302 = INT64_MAX;
	int32_t x303 = INT32_MAX;
	int32_t x304 = -1;
	volatile int32_t t75 = 8027134;

	t75 = ((x301==(x302|x303))^x304);

	if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	int32_t x306 = 383;
	int64_t x307 = INT64_MIN;
	uint8_t x308 = 3U;

	t76 = ((x305==(x306|x307))^x308);

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = 15815;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x309==(x310|x311))^x312);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x314 = 20U;
	volatile int16_t x315 = -1;
	volatile int16_t x316 = -1883;
	int32_t t78 = 178835;

	t78 = ((x313==(x314|x315))^x316);

	if (t78 != -1883) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int16_t x318 = INT16_MAX;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = INT8_MIN;

	t79 = ((x317==(x318|x319))^x320);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	volatile uint64_t x322 = 39998795121916LLU;
	volatile int64_t x324 = INT64_MIN;
	volatile int64_t t80 = INT64_MIN;

	t80 = ((x321==(x322|x323))^x324);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = 1U;
	uint16_t x326 = 909U;
	int32_t x327 = INT32_MIN;
	int32_t t81 = 41669120;

	t81 = ((x325==(x326|x327))^x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	uint16_t x330 = UINT16_MAX;
	uint16_t x331 = 807U;
	uint8_t x332 = UINT8_MAX;

	t82 = ((x329==(x330|x331))^x332);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	int64_t x334 = -108LL;
	static volatile int64_t t83 = INT64_MIN;

	t83 = ((x333==(x334|x335))^x336);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	volatile int16_t x338 = 4;
	int64_t x339 = -15258LL;
	volatile int64_t t84 = 1LL;

	t84 = ((x337==(x338|x339))^x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = -1;
	int8_t x342 = 0;
	volatile int8_t x343 = -35;
	static volatile uint32_t x344 = 24886665U;
	uint32_t t85 = 30U;

	t85 = ((x341==(x342|x343))^x344);

	if (t85 != 24886665U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = -1;
	int8_t x347 = -1;
	int8_t x348 = -1;
	volatile int32_t t86 = 1;

	t86 = ((x345==(x346|x347))^x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x351 = -6452;
	uint32_t x352 = 1138U;
	volatile uint32_t t87 = 964533422U;

	t87 = ((x349==(x350|x351))^x352);

	if (t87 != 1138U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MIN;
	int32_t x354 = -1027783375;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = -15;
	static volatile int32_t t88 = 3;

	t88 = ((x353==(x354|x355))^x356);

	if (t88 != -15) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x357 = 57U;
	uint32_t x358 = 1663797782U;
	int32_t x359 = INT32_MAX;
	static int32_t x360 = INT32_MIN;
	volatile int32_t t89 = INT32_MIN;

	t89 = ((x357==(x358|x359))^x360);

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = 59;
	int32_t x363 = INT32_MIN;
	volatile int32_t x364 = INT32_MIN;
	volatile int32_t t90 = INT32_MIN;

	t90 = ((x361==(x362|x363))^x364);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 4;
	uint64_t x367 = UINT64_MAX;
	int64_t x368 = INT64_MAX;
	static volatile int64_t t91 = INT64_MAX;

	t91 = ((x365==(x366|x367))^x368);

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = UINT32_MAX;
	uint16_t x370 = UINT16_MAX;
	uint8_t x371 = 97U;
	volatile int64_t x372 = 6LL;
	int64_t t92 = 4066744469693LL;

	t92 = ((x369==(x370|x371))^x372);

	if (t92 != 6LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = -1LL;
	int8_t x374 = INT8_MIN;
	int8_t x375 = -15;

	t93 = ((x373==(x374|x375))^x376);

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	int64_t x378 = -57337315965408LL;
	int32_t x379 = 11671;
	volatile int16_t x380 = -1;
	int32_t t94 = -341378007;

	t94 = ((x377==(x378|x379))^x380);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 7U;
	int64_t x383 = INT64_MAX;
	int64_t x384 = INT64_MIN;
	volatile int64_t t95 = INT64_MIN;

	t95 = ((x381==(x382|x383))^x384);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = 1;
	static volatile int8_t x387 = -1;
	volatile int16_t x388 = -1;

	t96 = ((x385==(x386|x387))^x388);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	volatile int16_t x390 = INT16_MIN;
	int64_t x391 = INT64_MIN;
	static int8_t x392 = -61;
	int32_t t97 = 54;

	t97 = ((x389==(x390|x391))^x392);

	if (t97 != -61) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	uint16_t x395 = UINT16_MAX;
	volatile int32_t t98 = -52735002;

	t98 = ((x393==(x394|x395))^x396);

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 121797U;
	volatile int16_t x398 = INT16_MIN;
	int8_t x399 = INT8_MAX;

	t99 = ((x397==(x398|x399))^x400);

	if (t99 != -32768) { NG(); } else { ; }
	
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

