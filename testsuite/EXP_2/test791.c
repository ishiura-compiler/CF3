#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 4196087058LLU;
uint64_t t0 = 4232152636438LLU;
static int32_t x12 = INT32_MAX;
volatile int64_t t5 = 151031785721860584LL;
static int8_t x30 = -1;
int64_t x31 = INT64_MIN;
int8_t x49 = 3;
uint8_t x55 = 10U;
uint64_t x56 = UINT64_MAX;
int64_t x60 = -3925174391987075LL;
int16_t x62 = -7336;
uint32_t x69 = 1U;
int8_t x74 = -1;
static volatile int32_t t19 = 423960;
volatile int16_t x83 = -1;
int64_t x92 = -634LL;
volatile int64_t x99 = INT64_MIN;
static int32_t t25 = -80076;
int32_t t26 = -89833110;
int16_t x116 = -1;
static volatile int32_t t28 = -47953712;
int64_t x123 = 68590LL;
static volatile int16_t x126 = INT16_MIN;
int32_t x130 = INT32_MIN;
int32_t x131 = INT32_MIN;
int32_t t33 = 15340;
int64_t x138 = 2139271143671864942LL;
uint16_t x142 = 49U;
int32_t x147 = INT32_MAX;
static uint64_t x148 = 6879921LLU;
volatile uint64_t t36 = 5748851LLU;
int16_t x152 = -1;
uint64_t x155 = UINT64_MAX;
static int32_t t38 = 5;
int8_t x159 = INT8_MAX;
int32_t x163 = INT32_MAX;
static int16_t x172 = 120;
int32_t x174 = -41;
uint64_t x193 = UINT64_MAX;
int64_t x194 = 8426LL;
uint32_t x196 = 20893U;
static uint8_t x201 = 117U;
uint16_t x204 = 58U;
volatile int32_t x219 = INT32_MAX;
static int32_t x222 = INT32_MIN;
int32_t x225 = 5;
int8_t x226 = 2;
volatile uint16_t x228 = 7U;
int32_t t56 = -61;
static volatile int64_t x231 = -10736443825LL;
uint32_t x236 = 13U;
uint8_t x239 = UINT8_MAX;
int8_t x251 = INT8_MIN;
static int16_t x252 = 14;
int64_t x257 = 1237455858LL;
static uint64_t x264 = UINT64_MAX;
uint16_t x266 = UINT16_MAX;
int8_t x273 = -1;
int8_t x274 = -1;
volatile uint8_t x279 = 109U;
volatile int64_t x286 = -733350LL;
int32_t t74 = -538;
uint32_t x308 = 6095U;
uint8_t x311 = 56U;
volatile int32_t x317 = INT32_MIN;
int32_t t82 = -425639424;
static int32_t x337 = INT32_MIN;
int16_t x338 = INT16_MIN;
static volatile int32_t t84 = -385;
int32_t x347 = INT32_MIN;
int8_t x357 = -13;
static volatile uint16_t x360 = UINT16_MAX;
volatile uint32_t x362 = 55U;
volatile int64_t x368 = INT64_MIN;
uint8_t x377 = 3U;
static volatile uint32_t x387 = UINT32_MAX;
volatile int8_t x388 = INT8_MIN;
int16_t x390 = -22;
int32_t x391 = 1079;
int16_t x399 = -1;
int32_t t98 = 178192247;
int16_t x406 = 31;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = INT8_MIN;
	static uint16_t x3 = UINT16_MAX;

	t0 = ((x1<(x2%x3))&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int32_t x6 = -1;
	int32_t x7 = -1;
	static int16_t x8 = INT16_MAX;
	static volatile int32_t t1 = -2102;

	t1 = ((x5<(x6%x7))&x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	uint16_t x10 = 14927U;
	int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -17061;

	t2 = ((x9<(x10%x11))&x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 7LL;
	int16_t x14 = -2997;
	uint64_t x15 = 35490561LLU;
	uint32_t x16 = 505U;
	volatile uint32_t t3 = 3U;

	t3 = ((x13<(x14%x15))&x16);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = INT16_MAX;
	volatile uint32_t x18 = 8161U;
	uint64_t x19 = 749109528LLU;
	static int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 1528;

	t4 = ((x17<(x18%x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 553774954477493595LL;
	int16_t x22 = INT16_MIN;
	uint64_t x23 = 9241LLU;
	static int64_t x24 = 33055579LL;

	t5 = ((x21<(x22%x23))&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	int16_t x26 = -1;
	static int64_t x27 = -6492424LL;
	int64_t x28 = INT64_MAX;
	int64_t t6 = -826199579251837LL;

	t6 = ((x25<(x26%x27))&x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = 6417325LLU;

	t7 = ((x29<(x30%x31))&x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 114041U;
	volatile uint16_t x34 = UINT16_MAX;
	static int8_t x35 = -4;
	int16_t x36 = -3709;
	volatile int32_t t8 = -330683016;

	t8 = ((x33<(x34%x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int8_t x38 = 37;
	volatile int32_t x39 = INT32_MIN;
	static int64_t x40 = -21516144329066728LL;
	static volatile int64_t t9 = -6386LL;

	t9 = ((x37<(x38%x39))&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 1LLU;
	int16_t x42 = -50;
	uint8_t x43 = 56U;
	uint64_t x44 = 10038603526357324LLU;
	volatile uint64_t t10 = 283903656197285057LLU;

	t10 = ((x41<(x42%x43))&x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int8_t x46 = -1;
	static uint32_t x47 = 30U;
	static int8_t x48 = INT8_MIN;
	static volatile int32_t t11 = -40469;

	t11 = ((x45<(x46%x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x50 = 14105655LLU;
	int32_t x51 = 3570114;
	int8_t x52 = -62;
	volatile int32_t t12 = -50365920;

	t12 = ((x49<(x50%x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = UINT64_MAX;
	static int8_t x54 = 0;
	uint64_t t13 = 20078535203LLU;

	t13 = ((x53<(x54%x55))&x56);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int64_t x58 = -1446238329LL;
	static uint8_t x59 = 11U;
	int64_t t14 = -1LL;

	t14 = ((x57<(x58%x59))&x60);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	int8_t x63 = -1;
	uint32_t x64 = 3567U;
	volatile uint32_t t15 = 490U;

	t15 = ((x61<(x62%x63))&x64);

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	uint32_t x66 = 7226751U;
	int16_t x67 = -1346;
	volatile int32_t x68 = -513624;
	int32_t t16 = -822885971;

	t16 = ((x65<(x66%x67))&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -1;
	uint64_t x71 = 1592226094LLU;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 253218499;

	t17 = ((x69<(x70%x71))&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 34023769913LLU;
	uint32_t x75 = 4341U;
	int8_t x76 = INT8_MIN;
	int32_t t18 = 794148;

	t18 = ((x73<(x74%x75))&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 19LLU;
	static int64_t x78 = 1815175441155LL;
	int8_t x79 = INT8_MAX;
	static uint16_t x80 = UINT16_MAX;

	t19 = ((x77<(x78%x79))&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 11546U;
	int32_t x82 = -1;
	static volatile uint16_t x84 = 560U;
	volatile int32_t t20 = 2;

	t20 = ((x81<(x82%x83))&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	volatile uint64_t x86 = 32969595602647LLU;
	static int32_t x87 = INT32_MAX;
	int8_t x88 = -6;
	volatile int32_t t21 = 2745;

	t21 = ((x85<(x86%x87))&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	uint32_t x90 = UINT32_MAX;
	volatile uint32_t x91 = 223608722U;
	static volatile int64_t t22 = 1251677542LL;

	t22 = ((x89<(x90%x91))&x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = -31;
	uint32_t x94 = 1697U;
	int32_t x95 = INT32_MAX;
	int64_t x96 = INT64_MIN;
	volatile int64_t t23 = -255943755729678LL;

	t23 = ((x93<(x94%x95))&x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -1;
	int8_t x98 = 0;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t24 = -7221;

	t24 = ((x97<(x98%x99))&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = -1;
	volatile int16_t x102 = INT16_MIN;
	uint16_t x103 = UINT16_MAX;
	int16_t x104 = 1;

	t25 = ((x101<(x102%x103))&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -2963229760102231672LL;
	int16_t x106 = -1;
	volatile uint32_t x107 = UINT32_MAX;
	static volatile uint8_t x108 = UINT8_MAX;

	t26 = ((x105<(x106%x107))&x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 0;
	int16_t x110 = INT16_MIN;
	volatile int64_t x111 = -1LL;
	volatile int16_t x112 = INT16_MIN;
	int32_t t27 = 0;

	t27 = ((x109<(x110%x111))&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	int16_t x114 = -1;
	static uint16_t x115 = 7966U;

	t28 = ((x113<(x114%x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 336365950LL;
	int64_t x118 = 427974176710LL;
	volatile int16_t x119 = INT16_MIN;
	int16_t x120 = INT16_MAX;
	volatile int32_t t29 = -905;

	t29 = ((x117<(x118%x119))&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 9151964752156091572LLU;
	int16_t x122 = INT16_MIN;
	int32_t x124 = -1;
	volatile int32_t t30 = 984053128;

	t30 = ((x121<(x122%x123))&x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -42885300619LL;
	uint64_t x127 = UINT64_MAX;
	int64_t x128 = INT64_MIN;
	static volatile int64_t t31 = 94486577488LL;

	t31 = ((x125<(x126%x127))&x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MIN;
	static uint64_t x132 = 1LLU;
	uint64_t t32 = 1953010374484LLU;

	t32 = ((x129<(x130%x131))&x132);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 6;
	uint64_t x134 = 2317247555LLU;
	int8_t x135 = INT8_MAX;
	uint8_t x136 = UINT8_MAX;

	t33 = ((x133<(x134%x135))&x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MAX;
	uint16_t x139 = 4074U;
	static int8_t x140 = INT8_MIN;
	static volatile int32_t t34 = 24;

	t34 = ((x137<(x138%x139))&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	uint32_t x143 = UINT32_MAX;
	uint64_t x144 = 14619552807514LLU;
	uint64_t t35 = 4608LLU;

	t35 = ((x141<(x142%x143))&x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = -1;
	static uint32_t x146 = 5519U;

	t36 = ((x145<(x146%x147))&x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	uint64_t x150 = 26160080LLU;
	static int8_t x151 = INT8_MIN;
	volatile int32_t t37 = 219727;

	t37 = ((x149<(x150%x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = 37434682U;
	uint8_t x154 = 7U;
	uint8_t x156 = 94U;

	t38 = ((x153<(x154%x155))&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	int8_t x158 = INT8_MIN;
	uint8_t x160 = 19U;
	int32_t t39 = 2141463;

	t39 = ((x157<(x158%x159))&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	volatile int16_t x162 = INT16_MIN;
	static uint16_t x164 = UINT16_MAX;
	volatile int32_t t40 = 43823;

	t40 = ((x161<(x162%x163))&x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	int16_t x166 = INT16_MIN;
	int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MIN;
	static volatile int32_t t41 = 27435;

	t41 = ((x165<(x166%x167))&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 365U;
	int32_t x170 = INT32_MAX;
	uint16_t x171 = 503U;
	int32_t t42 = 5764807;

	t42 = ((x169<(x170%x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = 0LL;
	int64_t x175 = INT64_MIN;
	static int8_t x176 = 3;
	int32_t t43 = -64554;

	t43 = ((x173<(x174%x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	uint32_t x178 = 122U;
	int32_t x179 = -2;
	int8_t x180 = -24;
	int32_t t44 = -46453046;

	t44 = ((x177<(x178%x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	int64_t x182 = INT64_MIN;
	uint32_t x183 = 2680290U;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -1868;

	t45 = ((x181<(x182%x183))&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	int8_t x186 = INT8_MAX;
	int64_t x187 = -1LL;
	uint16_t x188 = 499U;
	int32_t t46 = 85314;

	t46 = ((x185<(x186%x187))&x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	int16_t x190 = INT16_MIN;
	static uint64_t x191 = 1631788412337029372LLU;
	int32_t x192 = INT32_MIN;
	static volatile int32_t t47 = 448507;

	t47 = ((x189<(x190%x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x195 = 60U;
	static uint32_t t48 = 251758629U;

	t48 = ((x193<(x194%x195))&x196);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	static uint32_t x198 = 21568U;
	static uint32_t x199 = 298398150U;
	volatile int8_t x200 = -1;
	volatile int32_t t49 = 0;

	t49 = ((x197<(x198%x199))&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = 7;
	int8_t x203 = INT8_MAX;
	int32_t t50 = -46766;

	t50 = ((x201<(x202%x203))&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 774U;
	static volatile int8_t x206 = -1;
	uint32_t x207 = UINT32_MAX;
	uint8_t x208 = 25U;
	static int32_t t51 = -666;

	t51 = ((x205<(x206%x207))&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = INT32_MAX;
	static int8_t x210 = -4;
	int64_t x211 = -15538091LL;
	int8_t x212 = 1;
	int32_t t52 = 2;

	t52 = ((x209<(x210%x211))&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = -1LL;
	uint16_t x214 = 2496U;
	uint64_t x215 = UINT64_MAX;
	int32_t x216 = INT32_MIN;
	volatile int32_t t53 = -1461477;

	t53 = ((x213<(x214%x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -66388985LL;
	int32_t x218 = 11629163;
	int64_t x220 = INT64_MIN;
	volatile int64_t t54 = -440LL;

	t54 = ((x217<(x218%x219))&x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = 5227U;
	static int8_t x223 = -1;
	uint8_t x224 = 17U;
	static volatile int32_t t55 = -18237;

	t55 = ((x221<(x222%x223))&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x227 = INT16_MIN;

	t56 = ((x225<(x226%x227))&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	static int64_t x230 = INT64_MAX;
	int32_t x232 = INT32_MIN;
	int32_t t57 = -1185;

	t57 = ((x229<(x230%x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = UINT16_MAX;
	int64_t x234 = 6751977LL;
	int16_t x235 = INT16_MIN;
	uint32_t t58 = 1160U;

	t58 = ((x233<(x234%x235))&x236);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 20621999956LLU;
	int64_t x238 = -1LL;
	int16_t x240 = -24;
	static volatile int32_t t59 = 498186;

	t59 = ((x237<(x238%x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	int16_t x242 = -1;
	uint64_t x243 = 337LLU;
	int16_t x244 = -1;
	int32_t t60 = 2;

	t60 = ((x241<(x242%x243))&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 11LLU;
	static int64_t x246 = -1619227753128875LL;
	static int32_t x247 = INT32_MIN;
	int32_t x248 = -10890998;
	int32_t t61 = 365600;

	t61 = ((x245<(x246%x247))&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	volatile uint8_t x250 = 6U;
	volatile int32_t t62 = -76453833;

	t62 = ((x249<(x250%x251))&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x258 = -1;
	static volatile uint16_t x259 = UINT16_MAX;
	static uint32_t x260 = UINT32_MAX;
	volatile uint32_t t63 = 231552999U;

	t63 = ((x257<(x258%x259))&x260);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x261 = UINT32_MAX;
	int16_t x262 = INT16_MIN;
	static int64_t x263 = -1LL;
	uint64_t t64 = 30085769976127LLU;

	t64 = ((x261<(x262%x263))&x264);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = 1;
	static int16_t x267 = -1;
	static uint16_t x268 = 5U;
	int32_t t65 = 0;

	t65 = ((x265<(x266%x267))&x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x269 = INT64_MAX;
	volatile uint8_t x270 = 1U;
	int16_t x271 = -10965;
	int8_t x272 = INT8_MIN;
	static int32_t t66 = 57113;

	t66 = ((x269<(x270%x271))&x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x275 = INT8_MIN;
	int32_t x276 = INT32_MAX;
	int32_t t67 = -223642090;

	t67 = ((x273<(x274%x275))&x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = INT16_MAX;
	int64_t x278 = INT64_MIN;
	int32_t x280 = 65003;
	volatile int32_t t68 = 577488106;

	t68 = ((x277<(x278%x279))&x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x281 = -747119585;
	volatile int8_t x282 = 3;
	volatile uint8_t x283 = 68U;
	int8_t x284 = INT8_MIN;
	volatile int32_t t69 = 1011;

	t69 = ((x281<(x282%x283))&x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = INT64_MIN;
	uint8_t x287 = 1U;
	static volatile uint64_t x288 = 69076LLU;
	uint64_t t70 = 11989058958LLU;

	t70 = ((x285<(x286%x287))&x288);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = INT64_MIN;
	static volatile int64_t x290 = INT64_MIN;
	int32_t x291 = -1;
	volatile uint16_t x292 = UINT16_MAX;
	volatile int32_t t71 = -2676;

	t71 = ((x289<(x290%x291))&x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x293 = 33U;
	volatile uint8_t x294 = UINT8_MAX;
	static int32_t x295 = INT32_MAX;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t72 = 39;

	t72 = ((x293<(x294%x295))&x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x297 = INT16_MIN;
	int64_t x298 = INT64_MAX;
	volatile uint8_t x299 = 15U;
	int16_t x300 = INT16_MIN;
	static int32_t t73 = -900454;

	t73 = ((x297<(x298%x299))&x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = 33;
	int16_t x302 = -1;
	static int8_t x303 = -1;
	static uint8_t x304 = 0U;

	t74 = ((x301<(x302%x303))&x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x305 = INT32_MIN;
	static int32_t x306 = INT32_MIN;
	int16_t x307 = -1;
	uint32_t t75 = 434428U;

	t75 = ((x305<(x306%x307))&x308);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = 780546500LL;
	volatile int16_t x310 = INT16_MAX;
	int32_t x312 = -8258304;
	int32_t t76 = -68;

	t76 = ((x309<(x310%x311))&x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = 1826U;
	uint16_t x314 = 61U;
	int32_t x315 = -8;
	uint32_t x316 = 154366U;
	uint32_t t77 = 4U;

	t77 = ((x313<(x314%x315))&x316);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x318 = -1;
	uint16_t x319 = UINT16_MAX;
	int64_t x320 = 5216414805850LL;
	int64_t t78 = 29383109217443441LL;

	t78 = ((x317<(x318%x319))&x320);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x321 = 4U;
	volatile int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MAX;
	int8_t x324 = -1;
	volatile int32_t t79 = -2;

	t79 = ((x321<(x322%x323))&x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = 18351934LL;
	static volatile uint8_t x326 = UINT8_MAX;
	volatile int16_t x327 = 1;
	int64_t x328 = -242484958LL;
	static volatile int64_t t80 = 50164LL;

	t80 = ((x325<(x326%x327))&x328);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = 104090;
	int32_t x330 = -1;
	int64_t x331 = INT64_MAX;
	int64_t x332 = INT64_MIN;
	int64_t t81 = -46139703LL;

	t81 = ((x329<(x330%x331))&x332);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x333 = INT8_MIN;
	int16_t x334 = -1;
	static int16_t x335 = INT16_MAX;
	int8_t x336 = -1;

	t82 = ((x333<(x334%x335))&x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x339 = UINT8_MAX;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t83 = -63414221;

	t83 = ((x337<(x338%x339))&x340);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = -1;
	int16_t x342 = INT16_MIN;
	int64_t x343 = -1LL;
	static uint16_t x344 = 10156U;

	t84 = ((x341<(x342%x343))&x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = INT64_MAX;
	int8_t x346 = 0;
	int8_t x348 = 11;
	volatile int32_t t85 = 554;

	t85 = ((x345<(x346%x347))&x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = INT32_MAX;
	volatile int8_t x354 = -27;
	int8_t x355 = 6;
	int64_t x356 = -112766365601LL;
	volatile int64_t t86 = -130545LL;

	t86 = ((x353<(x354%x355))&x356);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x358 = 1921087819U;
	volatile int64_t x359 = -1LL;
	int32_t t87 = 5;

	t87 = ((x357<(x358%x359))&x360);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = UINT32_MAX;
	static int8_t x363 = -2;
	volatile uint32_t x364 = 20564U;
	uint32_t t88 = 0U;

	t88 = ((x361<(x362%x363))&x364);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = -1;
	int16_t x366 = INT16_MAX;
	volatile int32_t x367 = INT32_MIN;
	static int64_t t89 = -16749718867038LL;

	t89 = ((x365<(x366%x367))&x368);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x369 = 0U;
	volatile int32_t x370 = INT32_MIN;
	int64_t x371 = -10979LL;
	volatile int64_t x372 = 6485474LL;
	static volatile int64_t t90 = 1725805726371527080LL;

	t90 = ((x369<(x370%x371))&x372);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x373 = INT64_MIN;
	int16_t x374 = -1;
	int8_t x375 = INT8_MIN;
	int32_t x376 = INT32_MIN;
	volatile int32_t t91 = -122417;

	t91 = ((x373<(x374%x375))&x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x378 = INT8_MIN;
	static int16_t x379 = INT16_MAX;
	int16_t x380 = -1;
	static volatile int32_t t92 = 27267774;

	t92 = ((x377<(x378%x379))&x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MIN;
	int8_t x383 = 4;
	int32_t x384 = INT32_MIN;
	volatile int32_t t93 = 957245;

	t93 = ((x381<(x382%x383))&x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = 1;
	uint64_t x386 = 424LLU;
	static volatile int32_t t94 = -1;

	t94 = ((x385<(x386%x387))&x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x389 = INT64_MIN;
	int8_t x392 = INT8_MIN;
	int32_t t95 = -486060;

	t95 = ((x389<(x390%x391))&x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x393 = -1;
	volatile int16_t x394 = -1;
	int32_t x395 = 366339;
	uint8_t x396 = 12U;
	volatile int32_t t96 = -3706;

	t96 = ((x393<(x394%x395))&x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x397 = UINT8_MAX;
	uint8_t x398 = 5U;
	volatile int16_t x400 = -26;
	int32_t t97 = 1645;

	t97 = ((x397<(x398%x399))&x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x401 = INT8_MIN;
	int32_t x402 = INT32_MIN;
	int8_t x403 = 2;
	uint8_t x404 = 121U;

	t98 = ((x401<(x402%x403))&x404);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = INT32_MIN;
	int64_t x407 = 97292LL;
	static uint8_t x408 = 3U;
	int32_t t99 = -7695380;

	t99 = ((x405<(x406%x407))&x408);

	if (t99 != 1) { NG(); } else { ; }
	
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

