#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x4 = UINT32_MAX;
static uint32_t x5 = UINT32_MAX;
uint16_t x6 = UINT16_MAX;
int32_t x8 = -1;
int8_t x12 = 42;
int32_t x14 = INT32_MIN;
int64_t x15 = INT64_MIN;
int64_t x17 = INT64_MIN;
volatile int32_t x20 = INT32_MIN;
int32_t x25 = INT32_MAX;
volatile int32_t t6 = 7074;
static int16_t x31 = INT16_MAX;
volatile int64_t x33 = INT64_MIN;
volatile int32_t t8 = -55881292;
int16_t x38 = 93;
volatile int16_t x39 = -536;
int32_t x46 = INT32_MIN;
uint16_t x49 = 0U;
volatile int16_t x50 = 0;
uint32_t x53 = 7707887U;
int32_t x70 = INT32_MIN;
int64_t x79 = -1LL;
int8_t x82 = 12;
volatile int8_t x86 = INT8_MIN;
volatile int64_t t21 = -31294763LL;
uint32_t x90 = 25992U;
volatile int32_t t22 = 921651848;
int8_t x94 = INT8_MAX;
int32_t t23 = 30278277;
volatile int32_t t24 = 20966;
volatile int32_t x103 = -206;
int8_t x106 = 52;
volatile int16_t x110 = -3657;
uint32_t x112 = 1651638U;
static int64_t x115 = -217579643456659280LL;
uint16_t x116 = 1U;
uint64_t x119 = UINT64_MAX;
volatile uint32_t x122 = 8U;
int16_t x123 = INT16_MIN;
static int16_t x127 = 10;
uint64_t x141 = 403212LLU;
volatile int32_t t38 = 272951;
int16_t x160 = -1;
int64_t x170 = INT64_MAX;
volatile int16_t x172 = INT16_MIN;
volatile int64_t x178 = -177750482728688LL;
static int16_t x188 = INT16_MIN;
int16_t x189 = 13;
volatile int64_t t48 = 1627691LL;
uint8_t x199 = 2U;
int32_t x202 = 164;
volatile uint64_t x206 = UINT64_MAX;
int8_t x214 = -1;
static int16_t x215 = INT16_MAX;
volatile uint64_t t55 = 1598814956604847530LLU;
int32_t t56 = 1113023;
int32_t x229 = INT32_MIN;
uint64_t t58 = 35547799LLU;
static int16_t x249 = -1;
static int8_t x254 = 1;
volatile int32_t t63 = -8;
int64_t t64 = 71348LL;
uint8_t x262 = UINT8_MAX;
int64_t x264 = INT64_MIN;
static int8_t x271 = 0;
static int16_t x272 = INT16_MIN;
int32_t x277 = -1;
int8_t x279 = INT8_MIN;
int16_t x280 = -1;
int32_t x286 = INT32_MIN;
uint8_t x289 = 3U;
int64_t x291 = INT64_MAX;
uint8_t x295 = 2U;
volatile int64_t x297 = INT64_MIN;
int32_t t74 = -3;
volatile int8_t x312 = INT8_MIN;
static volatile uint32_t x319 = 0U;
uint8_t x323 = UINT8_MAX;
int16_t x326 = -1;
static volatile int32_t t82 = 24283;
static int64_t x335 = INT64_MIN;
uint16_t x338 = 2U;
int64_t x349 = -1LL;
volatile int64_t x351 = INT64_MIN;
int64_t x364 = -21498LL;
static volatile uint8_t x372 = 7U;
int8_t x373 = -1;
volatile int8_t x378 = 1;
uint8_t x388 = UINT8_MAX;
int32_t t96 = -1;
volatile uint8_t x391 = 1U;
int16_t x396 = 53;


void f0(void) {
	volatile uint64_t x1 = 25819149LLU;
	int16_t x2 = -8259;
	int16_t x3 = INT16_MIN;
	uint32_t t0 = 2U;

	t0 = ((x1<=(x2|x3))&x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x7 = 2U;
	volatile int32_t t1 = 54480;

	t1 = ((x5<=(x6|x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static volatile int64_t x10 = INT64_MIN;
	int64_t x11 = -160LL;
	int32_t t2 = 457;

	t2 = ((x9<=(x10|x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int64_t x16 = 6727284058852LL;
	int64_t t3 = 20689088538444LL;

	t3 = ((x13<=(x14|x15))&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x18 = INT16_MIN;
	int64_t x19 = -517769486736440LL;
	int32_t t4 = -824985040;

	t4 = ((x17<=(x18|x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	int64_t x22 = INT64_MAX;
	int32_t x23 = -1;
	volatile int32_t x24 = INT32_MAX;
	int32_t t5 = 1013;

	t5 = ((x21<=(x22|x23))&x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = UINT16_MAX;
	int16_t x27 = -1;
	static uint8_t x28 = 4U;

	t6 = ((x25<=(x26|x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -61660688LL;
	int32_t x30 = 135;
	volatile int8_t x32 = -3;
	int32_t t7 = 322935898;

	t7 = ((x29<=(x30|x31))&x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x34 = 9;
	volatile int64_t x35 = -1LL;
	volatile int8_t x36 = INT8_MAX;

	t8 = ((x33<=(x34|x35))&x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static uint32_t x40 = 1U;
	uint32_t t9 = 102022637U;

	t9 = ((x37<=(x38|x39))&x40);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	volatile int16_t x42 = INT16_MAX;
	int8_t x43 = -1;
	int16_t x44 = INT16_MIN;
	int32_t t10 = -831;

	t10 = ((x41<=(x42|x43))&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = 3U;
	uint16_t x47 = UINT16_MAX;
	int32_t x48 = INT32_MIN;
	int32_t t11 = -64;

	t11 = ((x45<=(x46|x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x51 = -125;
	volatile int16_t x52 = -1;
	int32_t t12 = -2;

	t12 = ((x49<=(x50|x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = -30853LL;
	uint16_t x55 = 0U;
	int32_t x56 = INT32_MIN;
	static volatile int32_t t13 = -15;

	t13 = ((x53<=(x54|x55))&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	static int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MIN;
	int16_t x60 = -1;
	static int32_t t14 = 54;

	t14 = ((x57<=(x58|x59))&x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MIN;
	uint32_t x63 = UINT32_MAX;
	int32_t x64 = -16;
	int32_t t15 = -123151432;

	t15 = ((x61<=(x62|x63))&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -1;
	uint64_t x66 = 370120473516LLU;
	volatile uint32_t x67 = UINT32_MAX;
	volatile uint16_t x68 = UINT16_MAX;
	static int32_t t16 = 26059;

	t16 = ((x65<=(x66|x67))&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = 8341052945LLU;
	int32_t x71 = -1029;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -1262;

	t17 = ((x69<=(x70|x71))&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 400U;
	int8_t x74 = INT8_MIN;
	static int16_t x75 = 13785;
	volatile int32_t x76 = 55;
	int32_t t18 = 39577;

	t18 = ((x73<=(x74|x75))&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x77 = INT16_MIN;
	static uint64_t x78 = 1354738764589154LLU;
	int64_t x80 = INT64_MAX;
	static volatile int64_t t19 = 76610990435451879LL;

	t19 = ((x77<=(x78|x79))&x80);

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 685356847LL;
	int64_t x83 = INT64_MIN;
	static volatile uint16_t x84 = 141U;
	static int32_t t20 = 402888;

	t20 = ((x81<=(x82|x83))&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	uint8_t x87 = 123U;
	static int64_t x88 = -1LL;

	t21 = ((x85<=(x86|x87))&x88);

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 2U;
	int64_t x91 = INT64_MAX;
	volatile int16_t x92 = 59;

	t22 = ((x89<=(x90|x91))&x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 2LLU;
	int8_t x95 = INT8_MIN;
	int32_t x96 = -248207824;

	t23 = ((x93<=(x94|x95))&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	int64_t x98 = -1LL;
	int32_t x99 = INT32_MIN;
	int32_t x100 = -4;

	t24 = ((x97<=(x98|x99))&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int8_t x102 = 7;
	uint64_t x104 = 103LLU;
	volatile uint64_t t25 = 290112294054LLU;

	t25 = ((x101<=(x102|x103))&x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	volatile uint16_t x107 = 17326U;
	static int8_t x108 = -1;
	static volatile int32_t t26 = -18;

	t26 = ((x105<=(x106|x107))&x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int16_t x111 = INT16_MIN;
	uint32_t t27 = 3420U;

	t27 = ((x109<=(x110|x111))&x112);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MAX;
	int32_t t28 = -44547049;

	t28 = ((x113<=(x114|x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = 3;
	int8_t x118 = INT8_MAX;
	int8_t x120 = -3;
	volatile int32_t t29 = -5405;

	t29 = ((x117<=(x118|x119))&x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = 14U;
	static int16_t x124 = INT16_MIN;
	static int32_t t30 = 1;

	t30 = ((x121<=(x122|x123))&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -2;
	int32_t x126 = 393;
	volatile int16_t x128 = -1859;
	int32_t t31 = 0;

	t31 = ((x125<=(x126|x127))&x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	int8_t x130 = INT8_MAX;
	static uint32_t x131 = 61114155U;
	static uint64_t x132 = 261LLU;
	volatile uint64_t t32 = 11LLU;

	t32 = ((x129<=(x130|x131))&x132);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	int8_t x134 = -1;
	int8_t x135 = 0;
	volatile int32_t x136 = -1;
	int32_t t33 = 7738;

	t33 = ((x133<=(x134|x135))&x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -39;
	volatile uint32_t x138 = 5U;
	int8_t x139 = INT8_MAX;
	static int64_t x140 = INT64_MIN;
	volatile int64_t t34 = -7474846LL;

	t34 = ((x137<=(x138|x139))&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = -1;
	int8_t x143 = -1;
	uint8_t x144 = UINT8_MAX;
	int32_t t35 = 306;

	t35 = ((x141<=(x142|x143))&x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -19;
	uint32_t x146 = UINT32_MAX;
	int16_t x147 = -1;
	int16_t x148 = -1;
	volatile int32_t t36 = 321;

	t36 = ((x145<=(x146|x147))&x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = 120;
	int8_t x150 = INT8_MIN;
	static int16_t x151 = INT16_MIN;
	int32_t x152 = -1;
	int32_t t37 = -595769;

	t37 = ((x149<=(x150|x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = INT32_MAX;
	int8_t x154 = -6;
	int8_t x155 = INT8_MAX;
	static volatile uint16_t x156 = 372U;

	t38 = ((x153<=(x154|x155))&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int32_t x158 = 237402;
	int16_t x159 = 24;
	int32_t t39 = -5084;

	t39 = ((x157<=(x158|x159))&x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -800;
	int16_t x162 = -1;
	int16_t x163 = INT16_MIN;
	int16_t x164 = -77;
	static volatile int32_t t40 = 1;

	t40 = ((x161<=(x162|x163))&x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	static int8_t x166 = INT8_MAX;
	uint8_t x167 = 33U;
	uint8_t x168 = 11U;
	volatile int32_t t41 = 0;

	t41 = ((x165<=(x166|x167))&x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 57;
	int8_t x171 = INT8_MIN;
	static int32_t t42 = 284567446;

	t42 = ((x169<=(x170|x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 95U;
	int16_t x174 = 0;
	int16_t x175 = -1;
	volatile int16_t x176 = INT16_MIN;
	static volatile int32_t t43 = 2;

	t43 = ((x173<=(x174|x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int64_t x179 = -999792148415LL;
	int64_t x180 = -1394850104965582LL;
	int64_t t44 = -475280887LL;

	t44 = ((x177<=(x178|x179))&x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	volatile int32_t x182 = INT32_MIN;
	int32_t x183 = INT32_MAX;
	volatile int8_t x184 = 0;
	static volatile int32_t t45 = 93893;

	t45 = ((x181<=(x182|x183))&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 3U;
	static uint8_t x186 = UINT8_MAX;
	int16_t x187 = -1541;
	static int32_t t46 = 1;

	t46 = ((x185<=(x186|x187))&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x190 = UINT64_MAX;
	volatile int32_t x191 = INT32_MAX;
	int8_t x192 = 23;
	volatile int32_t t47 = -4;

	t47 = ((x189<=(x190|x191))&x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int32_t x194 = 7;
	static int64_t x195 = -383799LL;
	static volatile int64_t x196 = -1LL;

	t48 = ((x193<=(x194|x195))&x196);

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = -1;
	static int64_t x198 = -1LL;
	int64_t x200 = INT64_MAX;
	int64_t t49 = 2435526224LL;

	t49 = ((x197<=(x198|x199))&x200);

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	volatile uint32_t x203 = 909256583U;
	int32_t x204 = -182282;
	volatile int32_t t50 = 0;

	t50 = ((x201<=(x202|x203))&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = UINT64_MAX;
	uint8_t x207 = 7U;
	int8_t x208 = INT8_MAX;
	volatile int32_t t51 = -155;

	t51 = ((x205<=(x206|x207))&x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 499U;
	int8_t x210 = 0;
	int16_t x211 = 313;
	int32_t x212 = 49841640;
	static int32_t t52 = 1222;

	t52 = ((x209<=(x210|x211))&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	int64_t x216 = 145341603LL;
	volatile int64_t t53 = -2150378835052LL;

	t53 = ((x213<=(x214|x215))&x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	int64_t x218 = 2627783LL;
	int64_t x219 = INT64_MAX;
	uint8_t x220 = UINT8_MAX;
	volatile int32_t t54 = 1418963;

	t54 = ((x217<=(x218|x219))&x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MIN;
	uint32_t x222 = 95U;
	int64_t x223 = -121514356388LL;
	volatile uint64_t x224 = 125777423285038828LLU;

	t55 = ((x221<=(x222|x223))&x224);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 0;
	uint32_t x226 = UINT32_MAX;
	uint64_t x227 = UINT64_MAX;
	static volatile int32_t x228 = INT32_MAX;

	t56 = ((x225<=(x226|x227))&x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x230 = 1;
	volatile int64_t x231 = -1LL;
	int8_t x232 = -1;
	static volatile int32_t t57 = 398;

	t57 = ((x229<=(x230|x231))&x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	uint32_t x234 = UINT32_MAX;
	int32_t x235 = INT32_MAX;
	volatile uint64_t x236 = 1LLU;

	t58 = ((x233<=(x234|x235))&x236);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 1;
	int16_t x238 = 0;
	volatile int64_t x239 = INT64_MIN;
	static volatile int16_t x240 = INT16_MIN;
	volatile int32_t t59 = -104344;

	t59 = ((x237<=(x238|x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = -1LL;
	static uint32_t x242 = 8842448U;
	int16_t x243 = INT16_MAX;
	static uint32_t x244 = UINT32_MAX;
	volatile uint32_t t60 = 21U;

	t60 = ((x241<=(x242|x243))&x244);

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 2240U;
	int16_t x246 = -1;
	static int8_t x247 = INT8_MIN;
	static int32_t x248 = INT32_MAX;
	static volatile int32_t t61 = 12140;

	t61 = ((x245<=(x246|x247))&x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = -1;
	static uint16_t x251 = 187U;
	int64_t x252 = 2662218642438903299LL;
	int64_t t62 = 71962238488379965LL;

	t62 = ((x249<=(x250|x251))&x252);

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 1897021074LL;
	int16_t x255 = INT16_MIN;
	uint8_t x256 = 0U;

	t63 = ((x253<=(x254|x255))&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	static int32_t x258 = -677;
	static uint64_t x259 = 5LLU;
	int64_t x260 = 792689137942334LL;

	t64 = ((x257<=(x258|x259))&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = -1;
	int8_t x263 = INT8_MAX;
	int64_t t65 = -1270LL;

	t65 = ((x261<=(x262|x263))&x264);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	static uint8_t x266 = UINT8_MAX;
	volatile uint16_t x267 = 14U;
	int8_t x268 = -1;
	volatile int32_t t66 = 0;

	t66 = ((x265<=(x266|x267))&x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = -324;
	int8_t x270 = INT8_MAX;
	volatile int32_t t67 = -6111;

	t67 = ((x269<=(x270|x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	uint32_t x274 = 0U;
	int16_t x275 = -1;
	volatile uint32_t x276 = UINT32_MAX;
	uint32_t t68 = 329U;

	t68 = ((x273<=(x274|x275))&x276);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x278 = 9083296LLU;
	int32_t t69 = -19701176;

	t69 = ((x277<=(x278|x279))&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = 1570858;
	int32_t x282 = INT32_MIN;
	volatile int16_t x283 = 58;
	uint8_t x284 = 2U;
	volatile int32_t t70 = -487263;

	t70 = ((x281<=(x282|x283))&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	uint16_t x287 = UINT16_MAX;
	uint8_t x288 = UINT8_MAX;
	int32_t t71 = 30785;

	t71 = ((x285<=(x286|x287))&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x290 = 0U;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = -9374;

	t72 = ((x289<=(x290|x291))&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = 1;
	static int16_t x294 = INT16_MIN;
	uint32_t x296 = 1U;
	static volatile uint32_t t73 = 20252U;

	t73 = ((x293<=(x294|x295))&x296);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x298 = 18;
	volatile int64_t x299 = INT64_MAX;
	int32_t x300 = INT32_MAX;

	t74 = ((x297<=(x298|x299))&x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -2;
	uint64_t x302 = UINT64_MAX;
	volatile int32_t x303 = INT32_MIN;
	uint32_t x304 = UINT32_MAX;
	volatile uint32_t t75 = 888U;

	t75 = ((x301<=(x302|x303))&x304);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	uint8_t x306 = 102U;
	uint16_t x307 = 6164U;
	volatile int8_t x308 = INT8_MAX;
	int32_t t76 = 3;

	t76 = ((x305<=(x306|x307))&x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -183408820LL;
	int32_t x310 = INT32_MAX;
	volatile int32_t x311 = INT32_MIN;
	static int32_t t77 = 1;

	t77 = ((x309<=(x310|x311))&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	int16_t x314 = -1;
	volatile int64_t x315 = -1LL;
	volatile uint32_t x316 = UINT32_MAX;
	uint32_t t78 = 1986994646U;

	t78 = ((x313<=(x314|x315))&x316);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	int64_t x318 = INT64_MIN;
	int16_t x320 = INT16_MIN;
	int32_t t79 = -1405773;

	t79 = ((x317<=(x318|x319))&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 12;
	int8_t x322 = INT8_MIN;
	static int8_t x324 = INT8_MAX;
	int32_t t80 = 142493187;

	t80 = ((x321<=(x322|x323))&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	volatile int64_t x327 = -3LL;
	uint8_t x328 = 11U;
	int32_t t81 = -1;

	t81 = ((x325<=(x326|x327))&x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = 3454230U;
	uint64_t x330 = 26LLU;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = -1;

	t82 = ((x329<=(x330|x331))&x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = UINT16_MAX;
	static int64_t x334 = -414369035659LL;
	uint16_t x336 = 12U;
	static volatile int32_t t83 = -20;

	t83 = ((x333<=(x334|x335))&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	int8_t x339 = -21;
	uint64_t x340 = UINT64_MAX;
	uint64_t t84 = 43706398262LLU;

	t84 = ((x337<=(x338|x339))&x340);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -6005907409730988LL;
	int8_t x342 = -1;
	static volatile int8_t x343 = INT8_MIN;
	volatile int64_t x344 = INT64_MIN;
	int64_t t85 = 2685795288LL;

	t85 = ((x341<=(x342|x343))&x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x345 = 933210003LLU;
	static int32_t x346 = 9;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = 14942U;
	int32_t t86 = 546307701;

	t86 = ((x345<=(x346|x347))&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x350 = INT16_MAX;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t87 = 196070105;

	t87 = ((x349<=(x350|x351))&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = 15577301510661371LLU;
	uint8_t x354 = 98U;
	uint64_t x355 = 1LLU;
	int32_t x356 = INT32_MIN;
	static volatile int32_t t88 = -5686;

	t88 = ((x353<=(x354|x355))&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 15249197;
	volatile uint32_t x358 = 18413U;
	int64_t x359 = 179327LL;
	uint16_t x360 = 22U;
	volatile int32_t t89 = 124676086;

	t89 = ((x357<=(x358|x359))&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = 2;
	int8_t x362 = -1;
	volatile int16_t x363 = INT16_MIN;
	static int64_t t90 = -432291282048LL;

	t90 = ((x361<=(x362|x363))&x364);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1354;
	static int16_t x366 = INT16_MAX;
	uint16_t x367 = UINT16_MAX;
	uint16_t x368 = 111U;
	int32_t t91 = 49021968;

	t91 = ((x365<=(x366|x367))&x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x369 = 6U;
	uint8_t x370 = 9U;
	int64_t x371 = INT64_MAX;
	volatile int32_t t92 = -1464579;

	t92 = ((x369<=(x370|x371))&x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x374 = 7U;
	int16_t x375 = INT16_MIN;
	static int64_t x376 = INT64_MIN;
	volatile int64_t t93 = 9LL;

	t93 = ((x373<=(x374|x375))&x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -144784231;
	int16_t x379 = INT16_MIN;
	volatile int8_t x380 = INT8_MIN;
	static volatile int32_t t94 = 1;

	t94 = ((x377<=(x378|x379))&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	uint16_t x382 = UINT16_MAX;
	static int32_t x383 = 1901788;
	uint32_t x384 = 6030U;
	volatile uint32_t t95 = 394U;

	t95 = ((x381<=(x382|x383))&x384);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 6;
	int16_t x386 = INT16_MIN;
	int32_t x387 = -1;

	t96 = ((x385<=(x386|x387))&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	int16_t x390 = INT16_MIN;
	int64_t x392 = 6108400460731398LL;
	volatile int64_t t97 = -748744LL;

	t97 = ((x389<=(x390|x391))&x392);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	int64_t x394 = INT64_MIN;
	static int8_t x395 = INT8_MIN;
	volatile int32_t t98 = 6;

	t98 = ((x393<=(x394|x395))&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	volatile uint32_t x398 = 34U;
	int16_t x399 = -3;
	int64_t x400 = 488411LL;
	int64_t t99 = 121523259476238038LL;

	t99 = ((x397<=(x398|x399))&x400);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

