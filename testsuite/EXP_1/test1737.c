#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x3 = UINT64_MAX;
static uint16_t x15 = UINT16_MAX;
uint8_t x16 = UINT8_MAX;
int64_t x18 = INT64_MAX;
int16_t x22 = -1;
int64_t x30 = INT64_MIN;
volatile int64_t x35 = INT64_MAX;
int16_t x41 = -212;
volatile uint64_t x52 = UINT64_MAX;
static volatile int16_t x55 = INT16_MIN;
static volatile uint32_t x60 = 454857U;
int32_t x66 = INT32_MIN;
int64_t x67 = -23108LL;
int8_t x76 = -1;
static int32_t x79 = -227162865;
uint32_t x83 = 23771U;
int16_t x85 = INT16_MAX;
int32_t t21 = -116238;
int32_t t22 = 20095265;
int32_t x101 = -1;
static int32_t t25 = 682;
int16_t x105 = INT16_MAX;
int64_t x106 = -28244381907483237LL;
int64_t x108 = 21339LL;
int16_t x115 = INT16_MIN;
int32_t x117 = INT32_MIN;
static volatile int32_t x118 = INT32_MIN;
uint16_t x122 = UINT16_MAX;
int32_t x128 = INT32_MIN;
static volatile int32_t t31 = -3;
int8_t x138 = -1;
int8_t x142 = 0;
static int8_t x146 = -1;
volatile int16_t x148 = -107;
int32_t t37 = 8151;
int32_t x155 = 95789044;
static volatile int8_t x156 = 2;
int32_t t38 = 5;
int64_t x157 = INT64_MIN;
int64_t x160 = INT64_MAX;
uint64_t x163 = UINT64_MAX;
static volatile int32_t x172 = -1;
int8_t x173 = INT8_MAX;
int32_t x177 = INT32_MIN;
volatile int32_t t43 = -1427729;
uint32_t x185 = 737U;
static volatile int16_t x188 = INT16_MAX;
int8_t x200 = INT8_MIN;
static int8_t x207 = INT8_MIN;
volatile int8_t x213 = INT8_MIN;
volatile int16_t x215 = -3;
int32_t t55 = 782;
int64_t x233 = -1LL;
int16_t x234 = INT16_MIN;
static int64_t x238 = 99458445788177406LL;
static int32_t t57 = -200704;
uint8_t x242 = 4U;
int64_t x245 = -1LL;
int8_t x246 = -21;
volatile int16_t x247 = 1;
volatile int32_t t62 = -51683;
static volatile int32_t x273 = 13890;
volatile int64_t x275 = INT64_MAX;
static volatile uint32_t x277 = 78570993U;
uint32_t x280 = 1U;
int32_t x289 = -29;
static int8_t x294 = -22;
static int64_t x298 = INT64_MAX;
volatile uint8_t x304 = 3U;
uint8_t x307 = 4U;
int8_t x310 = -1;
int64_t x311 = 840831339759LL;
static volatile int32_t t75 = -21058;
uint8_t x315 = 37U;
uint32_t x316 = UINT32_MAX;
static uint32_t x317 = 1052U;
int32_t t77 = 349;
volatile int32_t t79 = -98;
static uint32_t x336 = 54295276U;
static volatile int32_t t80 = -1391408;
static uint64_t x337 = 261926486597002387LLU;
volatile int64_t x356 = INT64_MIN;
int16_t x366 = -1;
static int32_t t86 = 22037;
int32_t t87 = 396934700;
int64_t x377 = -259353191924LL;
int32_t x378 = -1;
static int16_t x382 = -34;
int16_t x384 = INT16_MIN;
volatile int16_t x385 = -1;
uint16_t x392 = 0U;
volatile int32_t t92 = 43;
volatile int32_t t95 = -18429;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	int32_t x2 = -1;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 71;

	t0 = (((x1&x2)/x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = INT32_MIN;
	uint64_t x7 = 13531LLU;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -6512056;

	t1 = (((x5&x6)/x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	volatile uint8_t x10 = 6U;
	int16_t x11 = INT16_MIN;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 3366236;

	t2 = (((x9&x10)/x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint16_t x14 = UINT16_MAX;
	volatile int32_t t3 = -6861789;

	t3 = (((x13&x14)/x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	uint16_t x19 = 1U;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 303812;

	t4 = (((x17&x18)/x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 6U;
	uint32_t x23 = 533744U;
	int8_t x24 = -1;
	volatile int32_t t5 = -19751115;

	t5 = (((x21&x22)/x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MAX;
	volatile int32_t x26 = -1;
	volatile uint16_t x27 = UINT16_MAX;
	int64_t x28 = 1LL;
	int32_t t6 = 102959594;

	t6 = (((x25&x26)/x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	volatile uint64_t x31 = 215632080751LLU;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 1800450;

	t7 = (((x29&x30)/x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 2U;
	int8_t x34 = INT8_MIN;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -7891;

	t8 = (((x33&x34)/x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	uint16_t x38 = 4309U;
	uint16_t x39 = UINT16_MAX;
	static volatile int64_t x40 = INT64_MIN;
	int32_t t9 = -13147;

	t9 = (((x37&x38)/x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x42 = 62U;
	int8_t x43 = INT8_MIN;
	uint64_t x44 = 1929671LLU;
	volatile int32_t t10 = 7;

	t10 = (((x41&x42)/x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int32_t x46 = INT32_MAX;
	uint32_t x47 = UINT32_MAX;
	static int16_t x48 = INT16_MAX;
	static volatile int32_t t11 = 1;

	t11 = (((x45&x46)/x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = 0;
	uint32_t x50 = 337329U;
	int16_t x51 = -1;
	static volatile int32_t t12 = 12949857;

	t12 = (((x49&x50)/x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	int8_t x54 = -1;
	int8_t x56 = 1;
	int32_t t13 = -63;

	t13 = (((x53&x54)/x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 102U;
	int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MAX;
	static volatile int32_t t14 = -75626001;

	t14 = (((x57&x58)/x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	static int16_t x62 = -23;
	int8_t x63 = 22;
	static int64_t x64 = INT64_MIN;
	volatile int32_t t15 = -490;

	t15 = (((x61&x62)/x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	uint32_t x68 = UINT32_MAX;
	int32_t t16 = -19;

	t16 = (((x65&x66)/x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = -3;
	static uint8_t x70 = UINT8_MAX;
	static int64_t x71 = -160855LL;
	int32_t x72 = -685;
	int32_t t17 = -16295;

	t17 = (((x69&x70)/x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	static int64_t x74 = INT64_MIN;
	int32_t x75 = -7709;
	int32_t t18 = 0;

	t18 = (((x73&x74)/x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -1LL;
	static int8_t x78 = -1;
	int64_t x80 = -53001704LL;
	static int32_t t19 = -104;

	t19 = (((x77&x78)/x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -38;
	static uint16_t x82 = UINT16_MAX;
	int8_t x84 = INT8_MAX;
	volatile int32_t t20 = 126;

	t20 = (((x81&x82)/x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	int32_t x87 = INT32_MAX;
	static uint64_t x88 = UINT64_MAX;

	t21 = (((x85&x86)/x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int64_t x90 = INT64_MIN;
	static uint64_t x91 = 510370637825LLU;
	static volatile int16_t x92 = INT16_MAX;

	t22 = (((x89&x90)/x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = UINT16_MAX;
	static uint32_t x94 = 921533566U;
	uint8_t x95 = 3U;
	uint8_t x96 = 4U;
	int32_t t23 = 2;

	t23 = (((x93&x94)/x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = UINT32_MAX;
	static volatile uint64_t x98 = UINT64_MAX;
	int16_t x99 = -1;
	uint8_t x100 = 1U;
	static volatile int32_t t24 = 8237500;

	t24 = (((x97&x98)/x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = -1044;
	volatile uint64_t x103 = 507LLU;
	int16_t x104 = INT16_MIN;

	t25 = (((x101&x102)/x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x107 = INT32_MIN;
	volatile int32_t t26 = -197716129;

	t26 = (((x105&x106)/x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 651;
	static int8_t x110 = -1;
	int16_t x111 = INT16_MIN;
	uint8_t x112 = 36U;
	int32_t t27 = 130075674;

	t27 = (((x109&x110)/x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	volatile int16_t x114 = INT16_MIN;
	static volatile int16_t x116 = -1;
	static volatile int32_t t28 = 159;

	t28 = (((x113&x114)/x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x119 = INT64_MAX;
	int8_t x120 = -1;
	int32_t t29 = -1;

	t29 = (((x117&x118)/x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 2;
	uint16_t x123 = 1938U;
	static int8_t x124 = INT8_MIN;
	volatile int32_t t30 = 1116;

	t30 = (((x121&x122)/x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = UINT16_MAX;
	static int16_t x126 = -15855;
	int64_t x127 = INT64_MAX;

	t31 = (((x125&x126)/x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	int32_t x130 = INT32_MIN;
	volatile int64_t x131 = INT64_MAX;
	uint16_t x132 = UINT16_MAX;
	int32_t t32 = 1;

	t32 = (((x129&x130)/x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x133 = INT32_MIN;
	volatile int32_t x134 = -1;
	int8_t x135 = -49;
	int8_t x136 = 0;
	static volatile int32_t t33 = 1464870;

	t33 = (((x133&x134)/x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 3382U;
	int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MAX;
	int32_t t34 = -14387;

	t34 = (((x137&x138)/x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 1181247626U;
	int32_t x143 = 76767;
	int16_t x144 = INT16_MAX;
	int32_t t35 = 1140;

	t35 = (((x141&x142)/x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x147 = 2801869U;
	int32_t t36 = 34939633;

	t36 = (((x145&x146)/x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -3;
	static uint16_t x150 = 10U;
	uint64_t x151 = UINT64_MAX;
	int64_t x152 = 3833071060397461995LL;

	t37 = (((x149&x150)/x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	static uint8_t x154 = UINT8_MAX;

	t38 = (((x153&x154)/x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = 715877035U;
	uint32_t x159 = UINT32_MAX;
	volatile int32_t t39 = 1270270;

	t39 = (((x157&x158)/x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = 1;
	uint64_t x162 = UINT64_MAX;
	static volatile int16_t x164 = -1;
	volatile int32_t t40 = 55;

	t40 = (((x161&x162)/x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = -11;
	volatile int8_t x170 = -9;
	static int32_t x171 = INT32_MIN;
	static volatile int32_t t41 = 485936;

	t41 = (((x169&x170)/x171)==x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x174 = INT32_MIN;
	volatile int16_t x175 = INT16_MAX;
	int8_t x176 = -1;
	volatile int32_t t42 = -5206342;

	t42 = (((x173&x174)/x175)==x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x178 = INT16_MIN;
	static uint8_t x179 = 4U;
	uint64_t x180 = 5834944LLU;

	t43 = (((x177&x178)/x179)==x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = UINT8_MAX;
	static int64_t x182 = INT64_MAX;
	uint8_t x183 = UINT8_MAX;
	uint16_t x184 = 105U;
	static volatile int32_t t44 = 235;

	t44 = (((x181&x182)/x183)==x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x186 = 27749U;
	uint32_t x187 = 1897U;
	volatile int32_t t45 = 25794;

	t45 = (((x185&x186)/x187)==x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 0U;
	static uint32_t x190 = 367U;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	volatile int32_t t46 = 252079;

	t46 = (((x189&x190)/x191)==x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x197 = INT64_MAX;
	int64_t x198 = -1LL;
	uint32_t x199 = UINT32_MAX;
	volatile int32_t t47 = 24221;

	t47 = (((x197&x198)/x199)==x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = UINT16_MAX;
	int8_t x202 = INT8_MIN;
	volatile int8_t x203 = INT8_MIN;
	uint64_t x204 = UINT64_MAX;
	int32_t t48 = 660779344;

	t48 = (((x201&x202)/x203)==x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -3339841LL;
	int8_t x206 = -2;
	int32_t x208 = INT32_MIN;
	int32_t t49 = -49157392;

	t49 = (((x205&x206)/x207)==x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = 10660;
	static int64_t x210 = -1LL;
	volatile uint16_t x211 = 13U;
	int8_t x212 = INT8_MIN;
	int32_t t50 = 23854884;

	t50 = (((x209&x210)/x211)==x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x214 = INT8_MIN;
	static uint16_t x216 = 2U;
	static int32_t t51 = -88677935;

	t51 = (((x213&x214)/x215)==x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x217 = INT64_MAX;
	int16_t x218 = INT16_MIN;
	static int32_t x219 = -1;
	int32_t x220 = INT32_MIN;
	static int32_t t52 = 58027067;

	t52 = (((x217&x218)/x219)==x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x221 = 41;
	volatile int32_t x222 = -1;
	volatile uint8_t x223 = 2U;
	uint16_t x224 = 15816U;
	int32_t t53 = -2984;

	t53 = (((x221&x222)/x223)==x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x225 = INT64_MIN;
	uint32_t x226 = 1431U;
	int8_t x227 = -1;
	volatile uint32_t x228 = 281U;
	volatile int32_t t54 = -30;

	t54 = (((x225&x226)/x227)==x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x229 = -1;
	int16_t x230 = -1;
	uint16_t x231 = UINT16_MAX;
	volatile uint16_t x232 = UINT16_MAX;

	t55 = (((x229&x230)/x231)==x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x235 = 23159641U;
	static int16_t x236 = INT16_MIN;
	int32_t t56 = 974512;

	t56 = (((x233&x234)/x235)==x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x237 = 6174174356497136269LLU;
	int8_t x239 = INT8_MIN;
	int32_t x240 = 121;

	t57 = (((x237&x238)/x239)==x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = -1;
	uint16_t x243 = 3U;
	int16_t x244 = INT16_MAX;
	int32_t t58 = 13729297;

	t58 = (((x241&x242)/x243)==x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x248 = 299;
	int32_t t59 = -3209293;

	t59 = (((x245&x246)/x247)==x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = -1;
	int8_t x250 = INT8_MIN;
	int32_t x251 = 8228281;
	int8_t x252 = INT8_MAX;
	int32_t t60 = 7;

	t60 = (((x249&x250)/x251)==x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 0U;
	static uint64_t x254 = 6888474988LLU;
	volatile uint64_t x255 = 1690LLU;
	static int64_t x256 = -5440LL;
	int32_t t61 = -1787;

	t61 = (((x253&x254)/x255)==x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = INT64_MIN;
	volatile uint32_t x258 = 13396130U;
	int32_t x259 = -97934617;
	volatile int64_t x260 = -1LL;

	t62 = (((x257&x258)/x259)==x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MAX;
	int32_t x262 = -1792888;
	int64_t x263 = -3190083766LL;
	int64_t x264 = INT64_MIN;
	volatile int32_t t63 = -10030;

	t63 = (((x261&x262)/x263)==x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x265 = 106LLU;
	volatile int16_t x266 = -1;
	static volatile int64_t x267 = -1LL;
	volatile int32_t x268 = INT32_MIN;
	volatile int32_t t64 = 90368;

	t64 = (((x265&x266)/x267)==x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = UINT16_MAX;
	static int32_t x270 = INT32_MIN;
	static int32_t x271 = -70394;
	uint16_t x272 = UINT16_MAX;
	int32_t t65 = -36;

	t65 = (((x269&x270)/x271)==x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x274 = INT32_MIN;
	volatile int32_t x276 = INT32_MAX;
	volatile int32_t t66 = -31;

	t66 = (((x273&x274)/x275)==x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x278 = INT8_MIN;
	uint8_t x279 = 30U;
	volatile int32_t t67 = -4;

	t67 = (((x277&x278)/x279)==x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = INT16_MAX;
	int64_t x282 = INT64_MIN;
	int8_t x283 = INT8_MIN;
	uint32_t x284 = UINT32_MAX;
	volatile int32_t t68 = -1;

	t68 = (((x281&x282)/x283)==x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x285 = -537853056;
	volatile int32_t x286 = INT32_MAX;
	int32_t x287 = INT32_MIN;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t69 = -33;

	t69 = (((x285&x286)/x287)==x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x290 = 1LL;
	int16_t x291 = -103;
	volatile uint64_t x292 = UINT64_MAX;
	volatile int32_t t70 = 1;

	t70 = (((x289&x290)/x291)==x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = 0;
	uint64_t x295 = UINT64_MAX;
	uint8_t x296 = 4U;
	int32_t t71 = 1719712;

	t71 = (((x293&x294)/x295)==x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = 55;
	static uint32_t x299 = 23311U;
	volatile int64_t x300 = -105262687LL;
	volatile int32_t t72 = -241;

	t72 = (((x297&x298)/x299)==x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x301 = INT64_MIN;
	volatile int8_t x302 = INT8_MAX;
	uint64_t x303 = 261326616414LLU;
	int32_t t73 = -77394198;

	t73 = (((x301&x302)/x303)==x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x305 = UINT32_MAX;
	int16_t x306 = -1;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t74 = 2;

	t74 = (((x305&x306)/x307)==x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = UINT8_MAX;
	int16_t x312 = INT16_MIN;

	t75 = (((x309&x310)/x311)==x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x313 = 485;
	static int32_t x314 = INT32_MIN;
	int32_t t76 = 186567901;

	t76 = (((x313&x314)/x315)==x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x318 = INT8_MIN;
	volatile int8_t x319 = INT8_MIN;
	static volatile int64_t x320 = 134217986035LL;

	t77 = (((x317&x318)/x319)==x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = 645;
	uint64_t x322 = UINT64_MAX;
	volatile uint64_t x323 = 25746055LLU;
	static volatile uint32_t x324 = 1668621887U;
	int32_t t78 = 1;

	t78 = (((x321&x322)/x323)==x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MIN;
	int64_t x327 = -1LL;
	volatile int64_t x328 = 3103LL;

	t79 = (((x325&x326)/x327)==x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = -1;
	uint8_t x334 = UINT8_MAX;
	int32_t x335 = -1;

	t80 = (((x333&x334)/x335)==x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x338 = 5U;
	int8_t x339 = -28;
	volatile uint64_t x340 = 1LLU;
	static int32_t t81 = -60305455;

	t81 = (((x337&x338)/x339)==x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x345 = 33U;
	static int32_t x346 = INT32_MIN;
	static uint32_t x347 = UINT32_MAX;
	uint16_t x348 = 7068U;
	volatile int32_t t82 = 62;

	t82 = (((x345&x346)/x347)==x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = INT8_MAX;
	static uint64_t x350 = 7083193512083LLU;
	volatile int16_t x351 = -1;
	uint32_t x352 = 0U;
	volatile int32_t t83 = -302547116;

	t83 = (((x349&x350)/x351)==x352);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = INT8_MIN;
	uint8_t x354 = 7U;
	uint16_t x355 = 502U;
	int32_t t84 = -1192;

	t84 = (((x353&x354)/x355)==x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x357 = UINT16_MAX;
	static int16_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	static volatile uint64_t x360 = UINT64_MAX;
	volatile int32_t t85 = 466;

	t85 = (((x357&x358)/x359)==x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = -9;
	uint64_t x367 = 7LLU;
	int64_t x368 = -8374384044379LL;

	t86 = (((x365&x366)/x367)==x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = 3433;
	static uint16_t x370 = 1813U;
	uint64_t x371 = 44731071519691LLU;
	static int8_t x372 = INT8_MAX;

	t87 = (((x369&x370)/x371)==x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = 13;
	int8_t x374 = INT8_MIN;
	uint16_t x375 = UINT16_MAX;
	int32_t x376 = -1;
	int32_t t88 = 1141;

	t88 = (((x373&x374)/x375)==x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x379 = INT32_MAX;
	int64_t x380 = INT64_MAX;
	static volatile int32_t t89 = -56;

	t89 = (((x377&x378)/x379)==x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x381 = INT8_MAX;
	uint8_t x383 = UINT8_MAX;
	static int32_t t90 = 10870;

	t90 = (((x381&x382)/x383)==x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x386 = INT16_MIN;
	int64_t x387 = -741692894936LL;
	int32_t x388 = INT32_MIN;
	int32_t t91 = -31;

	t91 = (((x385&x386)/x387)==x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x389 = 117U;
	int8_t x390 = 7;
	int8_t x391 = INT8_MAX;

	t92 = (((x389&x390)/x391)==x392);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x393 = INT32_MAX;
	uint8_t x394 = UINT8_MAX;
	volatile int64_t x395 = INT64_MAX;
	int32_t x396 = INT32_MIN;
	volatile int32_t t93 = 6543335;

	t93 = (((x393&x394)/x395)==x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = INT64_MIN;
	static int8_t x398 = 21;
	int16_t x399 = 41;
	static int64_t x400 = -36567LL;
	int32_t t94 = -958954;

	t94 = (((x397&x398)/x399)==x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x401 = 166U;
	int8_t x402 = INT8_MIN;
	int16_t x403 = -5315;
	int8_t x404 = 1;

	t95 = (((x401&x402)/x403)==x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x405 = 19682136479902734LLU;
	int8_t x406 = INT8_MAX;
	int16_t x407 = -19;
	int32_t x408 = INT32_MIN;
	volatile int32_t t96 = 48918576;

	t96 = (((x405&x406)/x407)==x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x409 = 9U;
	int8_t x410 = INT8_MIN;
	static int16_t x411 = -24;
	uint16_t x412 = 14U;
	volatile int32_t t97 = 894;

	t97 = (((x409&x410)/x411)==x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x413 = 46901LLU;
	uint16_t x414 = 2U;
	static int64_t x415 = -82921086LL;
	volatile int32_t x416 = -1;
	volatile int32_t t98 = -127;

	t98 = (((x413&x414)/x415)==x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = INT8_MIN;
	static int16_t x418 = INT16_MAX;
	volatile int64_t x419 = -3382LL;
	int64_t x420 = -1LL;
	volatile int32_t t99 = -35;

	t99 = (((x417&x418)/x419)==x420);

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

