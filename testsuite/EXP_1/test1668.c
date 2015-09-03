#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -834;
volatile uint8_t x7 = UINT8_MAX;
uint8_t x8 = 22U;
volatile uint32_t x11 = 622519U;
static uint16_t x12 = 11136U;
static uint32_t x22 = UINT32_MAX;
volatile int32_t x24 = -1;
int8_t x31 = INT8_MIN;
uint16_t x32 = 6696U;
volatile int64_t x34 = 164969221447826080LL;
volatile uint32_t x38 = 14055049U;
int32_t x40 = INT32_MIN;
int16_t x46 = -373;
int64_t x48 = INT64_MAX;
uint64_t x49 = UINT64_MAX;
static int16_t x51 = -1;
uint8_t x57 = 8U;
static volatile int16_t x59 = 1;
volatile uint64_t t14 = 535937882825LLU;
int16_t x64 = INT16_MAX;
int32_t x65 = INT32_MIN;
int64_t t16 = -477214LL;
static int64_t x69 = INT64_MIN;
int16_t x71 = -1;
uint32_t x82 = 68973910U;
static volatile int64_t t19 = -1470020LL;
int8_t x94 = INT8_MIN;
volatile int64_t t24 = -363570643636LL;
static uint16_t x106 = 0U;
static volatile int8_t x112 = INT8_MAX;
int8_t x116 = -63;
static int64_t x119 = INT64_MIN;
static volatile uint64_t x121 = UINT64_MAX;
uint32_t x123 = UINT32_MAX;
int64_t x130 = -1LL;
volatile uint32_t t31 = 6575U;
static uint16_t x144 = UINT16_MAX;
static volatile int8_t x154 = INT8_MIN;
volatile int64_t t37 = 352LL;
volatile int16_t x159 = INT16_MAX;
volatile uint64_t t39 = 142815LLU;
int64_t x165 = INT64_MIN;
static int16_t x166 = -1;
int64_t t40 = -2053735339LL;
static int16_t x170 = INT16_MIN;
volatile int8_t x173 = INT8_MIN;
int8_t x177 = -62;
int16_t x178 = INT16_MAX;
int64_t x180 = -1LL;
uint16_t x181 = UINT16_MAX;
volatile uint32_t x184 = UINT32_MAX;
int64_t t46 = -685366485LL;
static uint32_t x199 = 114U;
volatile uint32_t t48 = 130438U;
int64_t x202 = -238850537428823LL;
int8_t x215 = 0;
uint64_t x216 = UINT64_MAX;
volatile uint64_t t52 = 2077438983148135991LLU;
uint8_t x221 = UINT8_MAX;
int64_t x222 = INT64_MAX;
int16_t x226 = 13048;
int64_t x229 = -31706328LL;
uint32_t t57 = 7112U;
static int8_t x243 = -1;
volatile int32_t x244 = INT32_MAX;
volatile int32_t t59 = 28793145;
uint64_t x255 = UINT64_MAX;
int32_t x256 = -20902;
static volatile int16_t x262 = 4202;
int16_t x264 = INT16_MIN;
volatile int32_t x275 = INT32_MAX;
uint16_t x277 = 2U;
int64_t x282 = -3457LL;
int16_t x285 = INT16_MIN;
int16_t x286 = 51;
uint64_t x288 = 3702376416694417LLU;
static uint64_t x289 = 191563LLU;
int64_t x298 = INT64_MIN;
int16_t x300 = INT16_MAX;
int32_t t72 = 40;
int64_t x303 = -1LL;
uint32_t x306 = 2U;
uint16_t x311 = UINT16_MAX;
uint32_t t75 = 88U;
int32_t x313 = -14;
int32_t x316 = INT32_MAX;
uint8_t x322 = 4U;
volatile int64_t t78 = 229990637682496LL;
static int32_t x326 = INT32_MIN;
int8_t x327 = -50;
int16_t x334 = INT16_MIN;
int64_t x340 = INT64_MAX;
volatile uint32_t x341 = 187883146U;
static int32_t x344 = INT32_MIN;
volatile uint64_t t86 = 11193028286134708LLU;
static uint64_t t87 = 38LLU;
int64_t x363 = 9LL;
int16_t x366 = 0;
int16_t x367 = -2;
volatile int64_t t90 = -105704765LL;
static uint64_t x374 = 3873556438124LLU;
volatile int64_t x380 = INT64_MIN;
volatile int64_t t92 = -8430827LL;
int32_t t93 = 26;
volatile uint16_t x387 = 364U;
static int32_t x391 = INT32_MIN;
volatile int32_t x393 = -5;
uint32_t x396 = 1928U;
int8_t x400 = INT8_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int32_t x2 = INT32_MIN;
	static int8_t x3 = INT8_MAX;
	static int32_t x4 = -699409;

	t0 = (((x1<=x2)|x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	volatile uint32_t x6 = UINT32_MAX;
	volatile int32_t t1 = 7;

	t1 = (((x5<=x6)|x7)/x8);

	if (t1 != 11) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 4;
	int8_t x10 = INT8_MIN;
	uint32_t t2 = 12U;

	t2 = (((x9<=x10)|x11)/x12);

	if (t2 != 55U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int8_t x14 = -3;
	uint8_t x15 = 46U;
	int64_t x16 = INT64_MAX;
	volatile int64_t t3 = 17122052LL;

	t3 = (((x13<=x14)|x15)/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int32_t x18 = INT32_MIN;
	int8_t x19 = INT8_MAX;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -5858;

	t4 = (((x17<=x18)|x19)/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 114U;
	int8_t x23 = 3;
	int32_t t5 = -3;

	t5 = (((x21<=x22)|x23)/x24);

	if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 16U;
	int32_t x26 = INT32_MIN;
	uint32_t x27 = 8U;
	int8_t x28 = -1;
	uint32_t t6 = 13U;

	t6 = (((x25<=x26)|x27)/x28);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 31;
	uint8_t x30 = 127U;
	volatile int32_t t7 = -270782076;

	t7 = (((x29<=x30)|x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	static int8_t x35 = -1;
	int16_t x36 = -1;
	int32_t t8 = -843188;

	t8 = (((x33<=x34)|x35)/x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -1;
	volatile int8_t x39 = INT8_MIN;
	int32_t t9 = 0;

	t9 = (((x37<=x38)|x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	int32_t x42 = INT32_MIN;
	int32_t x43 = -909612995;
	int16_t x44 = -7;
	int32_t t10 = 79785878;

	t10 = (((x41<=x42)|x43)/x44);

	if (t10 != 129944713) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 22822U;
	int8_t x47 = INT8_MIN;
	int64_t t11 = 175LL;

	t11 = (((x45<=x46)|x47)/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x50 = INT32_MIN;
	int8_t x52 = INT8_MAX;
	int32_t t12 = -21457;

	t12 = (((x49<=x50)|x51)/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -3;
	int32_t x54 = 170;
	uint16_t x55 = 0U;
	static volatile int64_t x56 = -1LL;
	int64_t t13 = 362357554LL;

	t13 = (((x53<=x54)|x55)/x56);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = UINT64_MAX;
	uint64_t x60 = UINT64_MAX;

	t14 = (((x57<=x58)|x59)/x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 4151851U;
	int16_t x62 = INT16_MIN;
	int64_t x63 = -1LL;
	static volatile int64_t t15 = -10021494LL;

	t15 = (((x61<=x62)|x63)/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = 15LLU;
	int64_t x67 = INT64_MIN;
	uint32_t x68 = 1825U;

	t16 = (((x65<=x66)|x67)/x68);

	if (t16 != -5053902485947822LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x70 = -62;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = 0;

	t17 = (((x69<=x70)|x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x77 = INT32_MIN;
	int16_t x78 = INT16_MIN;
	uint32_t x79 = 5523U;
	static volatile int32_t x80 = -9274;
	uint32_t t18 = 13035226U;

	t18 = (((x77<=x78)|x79)/x80);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	volatile int64_t x83 = -165LL;
	volatile uint32_t x84 = 1267326454U;

	t19 = (((x81<=x82)|x83)/x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 0U;
	int8_t x86 = INT8_MIN;
	int64_t x87 = INT64_MAX;
	uint16_t x88 = 786U;
	int64_t t20 = 92745514618677933LL;

	t20 = (((x85<=x86)|x87)/x88);

	if (t20 != 11734570021443735LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x89 = -1;
	static uint8_t x90 = 4U;
	int16_t x91 = INT16_MAX;
	volatile uint64_t x92 = 5LLU;
	uint64_t t21 = 677530847060030LLU;

	t21 = (((x89<=x90)|x91)/x92);

	if (t21 != 6553LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 35696413U;
	int8_t x95 = INT8_MAX;
	static uint16_t x96 = UINT16_MAX;
	int32_t t22 = -182456;

	t22 = (((x93<=x94)|x95)/x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = -7290979;
	uint16_t x98 = 17671U;
	int32_t x99 = 13;
	uint8_t x100 = 29U;
	static volatile int32_t t23 = 32509937;

	t23 = (((x97<=x98)|x99)/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = UINT32_MAX;
	static uint32_t x102 = 19U;
	int8_t x103 = INT8_MIN;
	volatile int64_t x104 = -447828LL;

	t24 = (((x101<=x102)|x103)/x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x105 = 13952395518039139LLU;
	uint8_t x107 = UINT8_MAX;
	static int16_t x108 = 30;
	static int32_t t25 = -175;

	t25 = (((x105<=x106)|x107)/x108);

	if (t25 != 8) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -1LL;
	uint64_t x110 = 8232LLU;
	int16_t x111 = INT16_MIN;
	volatile int32_t t26 = -2;

	t26 = (((x109<=x110)|x111)/x112);

	if (t26 != -258) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 0U;
	static int16_t x114 = INT16_MIN;
	volatile uint16_t x115 = 1087U;
	volatile int32_t t27 = 0;

	t27 = (((x113<=x114)|x115)/x116);

	if (t27 != -17) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 1986204695U;
	static uint8_t x118 = 63U;
	int64_t x120 = INT64_MIN;
	int64_t t28 = 13LL;

	t28 = (((x117<=x118)|x119)/x120);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x122 = UINT32_MAX;
	uint32_t x124 = 10875U;
	volatile uint32_t t29 = 18854U;

	t29 = (((x121<=x122)|x123)/x124);

	if (t29 != 394939U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	int16_t x126 = -13;
	uint32_t x127 = UINT32_MAX;
	volatile int8_t x128 = 13;
	volatile uint32_t t30 = 3U;

	t30 = (((x125<=x126)|x127)/x128);

	if (t30 != 330382099U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	uint8_t x131 = 2U;
	uint32_t x132 = 5U;

	t31 = (((x129<=x130)|x131)/x132);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = 7;
	static int8_t x134 = INT8_MIN;
	volatile int16_t x135 = INT16_MIN;
	int8_t x136 = 17;
	int32_t t32 = 901890;

	t32 = (((x133<=x134)|x135)/x136);

	if (t32 != -1927) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = 3035033U;
	int32_t x138 = 663010;
	volatile int8_t x139 = INT8_MIN;
	static int32_t x140 = INT32_MIN;
	volatile int32_t t33 = 351792;

	t33 = (((x137<=x138)|x139)/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	volatile int8_t x142 = -1;
	uint8_t x143 = 31U;
	static volatile int32_t t34 = -32675884;

	t34 = (((x141<=x142)|x143)/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = INT16_MIN;
	int64_t x146 = -110305035670211410LL;
	uint16_t x147 = 490U;
	static volatile int16_t x148 = 2;
	int32_t t35 = 107918;

	t35 = (((x145<=x146)|x147)/x148);

	if (t35 != 245) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MAX;
	uint32_t x150 = 7671822U;
	int8_t x151 = -1;
	uint16_t x152 = 5U;
	int32_t t36 = -60998;

	t36 = (((x149<=x150)|x151)/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x153 = INT64_MIN;
	int64_t x155 = 245021609LL;
	int8_t x156 = INT8_MAX;

	t37 = (((x153<=x154)|x155)/x156);

	if (t37 != 1929304LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x157 = INT64_MIN;
	int32_t x158 = -1;
	volatile int32_t x160 = INT32_MAX;
	volatile int32_t t38 = 15976;

	t38 = (((x157<=x158)|x159)/x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = INT8_MIN;
	static int8_t x162 = 59;
	uint64_t x163 = 7528094019685LLU;
	volatile int32_t x164 = INT32_MIN;

	t39 = (((x161<=x162)|x163)/x164);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x167 = 0;
	static int64_t x168 = -13217508764LL;

	t40 = (((x165<=x166)|x167)/x168);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MAX;
	static int8_t x171 = INT8_MIN;
	int64_t x172 = -270322830276LL;
	int64_t t41 = 35992369998LL;

	t41 = (((x169<=x170)|x171)/x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x174 = UINT32_MAX;
	uint64_t x175 = 14237LLU;
	volatile int8_t x176 = 1;
	uint64_t t42 = 72LLU;

	t42 = (((x173<=x174)|x175)/x176);

	if (t42 != 14237LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x179 = INT16_MAX;
	volatile int64_t t43 = 120LL;

	t43 = (((x177<=x178)|x179)/x180);

	if (t43 != -32767LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x182 = 16762252LLU;
	int64_t x183 = INT64_MAX;
	int64_t t44 = -135804LL;

	t44 = (((x181<=x182)|x183)/x184);

	if (t44 != 2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x185 = UINT16_MAX;
	int64_t x186 = INT64_MIN;
	static int8_t x187 = -3;
	uint64_t x188 = 1720044LLU;
	uint64_t t45 = 14LLU;

	t45 = (((x185<=x186)|x187)/x188);

	if (t45 != 10724576856004LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = -1LL;
	int16_t x190 = 782;
	int8_t x191 = INT8_MAX;
	int64_t x192 = INT64_MIN;

	t46 = (((x189<=x190)|x191)/x192);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x193 = INT16_MIN;
	int16_t x194 = INT16_MAX;
	volatile int64_t x195 = 12997161LL;
	int64_t x196 = INT64_MAX;
	int64_t t47 = -22855625851LL;

	t47 = (((x193<=x194)|x195)/x196);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x197 = -1;
	volatile int16_t x198 = INT16_MIN;
	int32_t x200 = INT32_MAX;

	t48 = (((x197<=x198)|x199)/x200);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = -1;
	int16_t x203 = INT16_MIN;
	int8_t x204 = -1;
	int32_t t49 = 1;

	t49 = (((x201<=x202)|x203)/x204);

	if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x205 = 5701484;
	uint8_t x206 = UINT8_MAX;
	volatile uint8_t x207 = UINT8_MAX;
	uint16_t x208 = 2268U;
	int32_t t50 = 15151;

	t50 = (((x205<=x206)|x207)/x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x209 = INT16_MIN;
	static uint64_t x210 = 146807LLU;
	int16_t x211 = INT16_MIN;
	uint8_t x212 = 5U;
	volatile int32_t t51 = 246403029;

	t51 = (((x209<=x210)|x211)/x212);

	if (t51 != -6553) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MIN;
	static int8_t x214 = -6;

	t52 = (((x213<=x214)|x215)/x216);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 477LLU;
	uint8_t x218 = 77U;
	static volatile int32_t x219 = 7;
	uint16_t x220 = UINT16_MAX;
	int32_t t53 = -19;

	t53 = (((x217<=x218)|x219)/x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x223 = 49;
	uint32_t x224 = 44934U;
	volatile uint32_t t54 = 207763707U;

	t54 = (((x221<=x222)|x223)/x224);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MIN;
	uint16_t x227 = UINT16_MAX;
	uint64_t x228 = 49027326LLU;
	uint64_t t55 = 122165936LLU;

	t55 = (((x225<=x226)|x227)/x228);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x230 = INT64_MIN;
	int32_t x231 = -1;
	int8_t x232 = INT8_MAX;
	int32_t t56 = -16123760;

	t56 = (((x229<=x230)|x231)/x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x233 = 7U;
	volatile uint8_t x234 = 18U;
	uint32_t x235 = 11317061U;
	uint16_t x236 = UINT16_MAX;

	t57 = (((x233<=x234)|x235)/x236);

	if (t57 != 172U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MAX;
	uint16_t x238 = 0U;
	volatile int64_t x239 = INT64_MAX;
	volatile uint64_t x240 = 5001932214653LLU;
	uint64_t t58 = 7534LLU;

	t58 = (((x237<=x238)|x239)/x240);

	if (t58 != 1843961LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = UINT32_MAX;
	int16_t x242 = 6;

	t59 = (((x241<=x242)|x243)/x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x249 = -1;
	uint64_t x250 = UINT64_MAX;
	static uint64_t x251 = UINT64_MAX;
	static volatile int16_t x252 = INT16_MIN;
	uint64_t t60 = 122861651322LLU;

	t60 = (((x249<=x250)|x251)/x252);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = 5081U;
	int32_t x254 = -469121377;
	volatile uint64_t t61 = 260821380157LLU;

	t61 = (((x253<=x254)|x255)/x256);

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x257 = 2380242027421378LLU;
	volatile uint8_t x258 = 20U;
	int16_t x259 = 1;
	uint64_t x260 = UINT64_MAX;
	static volatile uint64_t t62 = 8LLU;

	t62 = (((x257<=x258)|x259)/x260);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = -1;
	uint16_t x263 = UINT16_MAX;
	static int32_t t63 = 119079602;

	t63 = (((x261<=x262)|x263)/x264);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = 13778191074495178LLU;
	int8_t x266 = INT8_MIN;
	int64_t x267 = -1LL;
	volatile int32_t x268 = INT32_MAX;
	int64_t t64 = 8543643LL;

	t64 = (((x265<=x266)|x267)/x268);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x269 = -3;
	int8_t x270 = INT8_MAX;
	volatile uint64_t x271 = UINT64_MAX;
	uint32_t x272 = UINT32_MAX;
	volatile uint64_t t65 = 97LLU;

	t65 = (((x269<=x270)|x271)/x272);

	if (t65 != 4294967297LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = -1;
	int64_t x274 = INT64_MIN;
	static int32_t x276 = INT32_MAX;
	int32_t t66 = 16;

	t66 = (((x273<=x274)|x275)/x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x278 = INT64_MAX;
	static int32_t x279 = INT32_MIN;
	volatile int16_t x280 = INT16_MIN;
	int32_t t67 = 29100940;

	t67 = (((x277<=x278)|x279)/x280);

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x281 = UINT32_MAX;
	static int8_t x283 = INT8_MIN;
	int32_t x284 = -100;
	static int32_t t68 = 1;

	t68 = (((x281<=x282)|x283)/x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x287 = INT32_MAX;
	uint64_t t69 = 257573117LLU;

	t69 = (((x285<=x286)|x287)/x288);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x290 = INT16_MIN;
	int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	static volatile int64_t t70 = 19LL;

	t70 = (((x289<=x290)|x291)/x292);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x293 = 254U;
	static volatile int8_t x294 = INT8_MAX;
	volatile uint16_t x295 = 5230U;
	uint64_t x296 = 2586647100LLU;
	uint64_t t71 = 41321972605LLU;

	t71 = (((x293<=x294)|x295)/x296);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x297 = 7U;
	int16_t x299 = INT16_MIN;

	t72 = (((x297<=x298)|x299)/x300);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	uint16_t x302 = 19U;
	int8_t x304 = INT8_MAX;
	int64_t t73 = 3841219478766546772LL;

	t73 = (((x301<=x302)|x303)/x304);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x305 = INT32_MAX;
	int16_t x307 = -1;
	uint32_t x308 = 1541986507U;
	static volatile uint32_t t74 = 197317421U;

	t74 = (((x305<=x306)|x307)/x308);

	if (t74 != 2U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x309 = 83U;
	uint16_t x310 = 716U;
	uint32_t x312 = 15826143U;

	t75 = (((x309<=x310)|x311)/x312);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x314 = INT8_MAX;
	uint64_t x315 = 827384356032089LLU;
	volatile uint64_t t76 = 46840844185309LLU;

	t76 = (((x313<=x314)|x315)/x316);

	if (t76 != 385280LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = INT16_MAX;
	int64_t x318 = INT64_MAX;
	uint64_t x319 = 653961976426793414LLU;
	int64_t x320 = INT64_MAX;
	volatile uint64_t t77 = 131046973162825025LLU;

	t77 = (((x317<=x318)|x319)/x320);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x321 = -1LL;
	int64_t x323 = -1LL;
	volatile int32_t x324 = INT32_MIN;

	t78 = (((x321<=x322)|x323)/x324);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x325 = INT16_MIN;
	static int64_t x328 = INT64_MIN;
	int64_t t79 = 451LL;

	t79 = (((x325<=x326)|x327)/x328);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MAX;
	static int8_t x330 = INT8_MIN;
	static int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;
	static int32_t t80 = 63;

	t80 = (((x329<=x330)|x331)/x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = -8585424;
	int32_t x335 = INT32_MAX;
	uint16_t x336 = UINT16_MAX;
	int32_t t81 = 183;

	t81 = (((x333<=x334)|x335)/x336);

	if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = INT32_MAX;
	int16_t x338 = -1;
	uint64_t x339 = 46631LLU;
	uint64_t t82 = 11807777439767LLU;

	t82 = (((x337<=x338)|x339)/x340);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x342 = INT16_MIN;
	static uint32_t x343 = UINT32_MAX;
	static volatile uint32_t t83 = 182612U;

	t83 = (((x341<=x342)|x343)/x344);

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = INT32_MIN;
	volatile uint16_t x346 = UINT16_MAX;
	uint64_t x347 = 3469574160584LLU;
	volatile int8_t x348 = -1;
	uint64_t t84 = 824451052LLU;

	t84 = (((x345<=x346)|x347)/x348);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = 25040802U;
	uint32_t x350 = 1374912168U;
	static int64_t x351 = 223LL;
	uint8_t x352 = 8U;
	static int64_t t85 = 3LL;

	t85 = (((x349<=x350)|x351)/x352);

	if (t85 != 27LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x353 = INT32_MIN;
	uint32_t x354 = 7U;
	uint64_t x355 = UINT64_MAX;
	int16_t x356 = INT16_MIN;

	t86 = (((x353<=x354)|x355)/x356);

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x357 = 259419U;
	int64_t x358 = INT64_MAX;
	volatile uint64_t x359 = 1639711LLU;
	uint32_t x360 = 51671U;

	t87 = (((x357<=x358)|x359)/x360);

	if (t87 != 31LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x361 = UINT8_MAX;
	volatile uint64_t x362 = 215678LLU;
	volatile int64_t x364 = -1LL;
	int64_t t88 = -125720102962239558LL;

	t88 = (((x361<=x362)|x363)/x364);

	if (t88 != -9LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x365 = 2U;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t89 = 10029011;

	t89 = (((x365<=x366)|x367)/x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = INT32_MAX;
	uint32_t x370 = 507652950U;
	volatile int64_t x371 = 5396786LL;
	int8_t x372 = INT8_MAX;

	t90 = (((x369<=x370)|x371)/x372);

	if (t90 != 42494LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = 1LLU;
	uint8_t x375 = 3U;
	int16_t x376 = INT16_MAX;
	static volatile int32_t t91 = 5430142;

	t91 = (((x373<=x374)|x375)/x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x377 = -11014444439195317LL;
	static volatile int16_t x378 = INT16_MIN;
	uint16_t x379 = UINT16_MAX;

	t92 = (((x377<=x378)|x379)/x380);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = INT16_MAX;
	static volatile int16_t x382 = -12318;
	static int8_t x383 = 0;
	static uint8_t x384 = UINT8_MAX;

	t93 = (((x381<=x382)|x383)/x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x385 = UINT16_MAX;
	uint32_t x386 = 1556915622U;
	static volatile int32_t x388 = -9;
	int32_t t94 = 858971;

	t94 = (((x385<=x386)|x387)/x388);

	if (t94 != -40) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x389 = 11U;
	uint32_t x390 = 11600U;
	volatile int32_t x392 = 9;
	int32_t t95 = -276;

	t95 = (((x389<=x390)|x391)/x392);

	if (t95 != -238609294) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x394 = INT32_MIN;
	volatile uint64_t x395 = 115197385674937190LLU;
	uint64_t t96 = 391954LLU;

	t96 = (((x393<=x394)|x395)/x396);

	if (t96 != 59749681366668LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x397 = UINT8_MAX;
	uint32_t x398 = 3U;
	volatile int64_t x399 = 1663803024930176LL;
	int64_t t97 = -3473610629LL;

	t97 = (((x397<=x398)|x399)/x400);

	if (t97 != 13100811219922LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x401 = UINT32_MAX;
	uint32_t x402 = 0U;
	static uint8_t x403 = 3U;
	uint64_t x404 = 402018828LLU;
	uint64_t t98 = 581541639696LLU;

	t98 = (((x401<=x402)|x403)/x404);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = -1;
	int32_t x406 = 15875;
	int8_t x407 = INT8_MIN;
	int16_t x408 = -1333;
	volatile int32_t t99 = -5;

	t99 = (((x405<=x406)|x407)/x408);

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

