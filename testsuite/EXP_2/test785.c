#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
static int64_t t1 = 453875403389LL;
int16_t x14 = -1;
int32_t x15 = 867;
int16_t x16 = INT16_MAX;
int32_t x19 = INT32_MAX;
static int8_t x24 = INT8_MIN;
int64_t t5 = 965763930LL;
uint64_t x33 = 48213802LLU;
volatile int8_t x36 = -1;
static int16_t x40 = INT16_MIN;
int8_t x42 = INT8_MIN;
int64_t t9 = 13LL;
int8_t x47 = -1;
volatile int16_t x56 = INT16_MIN;
int32_t t12 = 183;
int64_t x57 = -2011345528LL;
int64_t x63 = INT64_MIN;
static int16_t x66 = INT16_MIN;
uint8_t x70 = 27U;
uint8_t x72 = UINT8_MAX;
uint16_t x74 = 157U;
static volatile uint16_t x78 = UINT16_MAX;
int8_t x92 = -2;
int32_t t22 = 159535790;
uint32_t x109 = 5927U;
volatile int64_t t25 = -1615507720241615LL;
static volatile int32_t x122 = INT32_MIN;
int8_t x126 = -1;
int8_t x128 = INT8_MAX;
int32_t t29 = 426826;
uint16_t x134 = 45U;
volatile int32_t t32 = -15854;
int64_t x148 = INT64_MAX;
static uint16_t x154 = 10U;
uint32_t x156 = 49538086U;
static uint16_t x161 = 2085U;
int32_t x163 = 1;
uint64_t t38 = 1667LLU;
static int16_t x177 = 14499;
int32_t x196 = INT32_MIN;
uint8_t x201 = UINT8_MAX;
uint32_t x223 = UINT32_MAX;
int32_t x232 = -1;
int32_t x234 = INT32_MIN;
uint32_t x236 = 256660U;
volatile int16_t x241 = INT16_MAX;
int64_t t56 = -1818975603416325LL;
uint32_t x253 = 79874986U;
static volatile int32_t x270 = INT32_MAX;
static uint16_t x271 = 5U;
volatile uint32_t t62 = 3447U;
int16_t x273 = -1;
volatile int32_t t63 = -272;
uint64_t x284 = 11LLU;
volatile int32_t t66 = 323327;
static int64_t x294 = -1LL;
int64_t x295 = 4694848LL;
int8_t x303 = 56;
volatile int64_t x305 = INT64_MIN;
int32_t t71 = 175168;
int64_t t72 = -1358659745LL;
int16_t x313 = INT16_MIN;
uint64_t x315 = UINT64_MAX;
int16_t x324 = INT16_MAX;
int32_t t74 = -4384616;
int16_t x326 = INT16_MAX;
int32_t x328 = INT32_MIN;
static uint32_t x348 = 1U;
uint8_t x363 = UINT8_MAX;
int32_t x364 = INT32_MAX;
uint8_t x366 = UINT8_MAX;
static int32_t t84 = -2763;
static volatile int64_t x369 = INT64_MAX;
static uint16_t x372 = 5U;
static volatile int64_t x374 = INT64_MIN;
static volatile uint16_t x376 = 3U;
volatile int64_t x381 = -121LL;
uint32_t x383 = 2792U;
int16_t x390 = -190;
volatile int32_t t91 = -14;
uint32_t t92 = 193U;
static int32_t x404 = INT32_MIN;
static volatile int16_t x415 = INT16_MIN;
int16_t x416 = -1;
static int32_t x423 = INT32_MAX;
int32_t x428 = INT32_MIN;
volatile int32_t t99 = 0;


void f0(void) {
	int16_t x6 = 1;
	volatile int32_t x7 = -140186;
	volatile int16_t x8 = -1;
	int32_t t0 = 40369518;

	t0 = ((x5<(x6%x7))%x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 474;
	int32_t x10 = 8;
	int16_t x11 = -1;
	static int64_t x12 = INT64_MIN;

	t1 = ((x9<(x10%x11))%x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int32_t t2 = 21605502;

	t2 = ((x13<(x14%x15))%x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x17 = 14452961LLU;
	int16_t x18 = -1;
	static volatile int16_t x20 = -6716;
	volatile int32_t t3 = -14009891;

	t3 = ((x17<(x18%x19))%x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -1LL;
	uint32_t x22 = 440815U;
	uint64_t x23 = 346486240377016LLU;
	volatile int32_t t4 = 14818;

	t4 = ((x21<(x22%x23))%x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	static uint8_t x26 = 54U;
	int16_t x27 = INT16_MAX;
	int64_t x28 = INT64_MIN;

	t5 = ((x25<(x26%x27))%x28);

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -827615930LL;
	static int8_t x30 = INT8_MAX;
	int8_t x31 = INT8_MIN;
	int8_t x32 = -11;
	static int32_t t6 = -344003959;

	t6 = ((x29<(x30%x31))%x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = 2915LL;
	int8_t x35 = -20;
	static volatile int32_t t7 = -178017655;

	t7 = ((x33<(x34%x35))%x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	volatile uint8_t x38 = UINT8_MAX;
	uint8_t x39 = 21U;
	int32_t t8 = -897752;

	t8 = ((x37<(x38%x39))%x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	static int16_t x43 = -1;
	static int64_t x44 = -1LL;

	t9 = ((x41<(x42%x43))%x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x45 = UINT64_MAX;
	int64_t x46 = -1LL;
	uint64_t x48 = 32329LLU;
	static uint64_t t10 = 739139LLU;

	t10 = ((x45<(x46%x47))%x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	volatile int32_t x50 = 498093285;
	static int64_t x51 = 293446671845671338LL;
	int16_t x52 = INT16_MIN;
	volatile int32_t t11 = 414;

	t11 = ((x49<(x50%x51))%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MAX;
	int64_t x55 = 1186849309220LL;

	t12 = ((x53<(x54%x55))%x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x58 = -1;
	volatile uint8_t x59 = 1U;
	int32_t x60 = 255;
	int32_t t13 = -811;

	t13 = ((x57<(x58%x59))%x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = UINT16_MAX;
	static volatile int32_t x62 = INT32_MAX;
	uint32_t x64 = 340631594U;
	volatile uint32_t t14 = 0U;

	t14 = ((x61<(x62%x63))%x64);

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MAX;
	int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MIN;
	volatile int32_t t15 = 63;

	t15 = ((x65<(x66%x67))%x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = 42;
	int8_t x71 = INT8_MIN;
	static volatile int32_t t16 = 3381;

	t16 = ((x69<(x70%x71))%x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x73 = -1;
	static volatile uint8_t x75 = 24U;
	uint16_t x76 = 2096U;
	volatile int32_t t17 = 0;

	t17 = ((x73<(x74%x75))%x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	static int16_t x79 = INT16_MAX;
	uint8_t x80 = 51U;
	volatile int32_t t18 = 0;

	t18 = ((x77<(x78%x79))%x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x81 = 400U;
	volatile int64_t x82 = INT64_MAX;
	int8_t x83 = 30;
	static int16_t x84 = INT16_MIN;
	int32_t t19 = 5259594;

	t19 = ((x81<(x82%x83))%x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 5U;
	static volatile uint32_t x90 = 136052671U;
	int32_t x91 = INT32_MAX;
	volatile int32_t t20 = -2868325;

	t20 = ((x89<(x90%x91))%x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	volatile int64_t x94 = INT64_MAX;
	int64_t x95 = -17LL;
	int32_t x96 = INT32_MIN;
	int32_t t21 = 2597555;

	t21 = ((x93<(x94%x95))%x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -1;
	static int32_t x98 = INT32_MAX;
	uint8_t x99 = 1U;
	int16_t x100 = INT16_MIN;

	t22 = ((x97<(x98%x99))%x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	static volatile int64_t x102 = INT64_MAX;
	int64_t x103 = 13955519255LL;
	static uint64_t x104 = 236128LLU;
	uint64_t t23 = 1LLU;

	t23 = ((x101<(x102%x103))%x104);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	static volatile int16_t x107 = -26;
	int8_t x108 = INT8_MIN;
	int32_t t24 = -1;

	t24 = ((x105<(x106%x107))%x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x110 = -1LL;
	int32_t x111 = 14;
	int64_t x112 = -1LL;

	t25 = ((x109<(x110%x111))%x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = INT8_MAX;
	int16_t x114 = -146;
	uint8_t x115 = UINT8_MAX;
	uint64_t x116 = 643492LLU;
	uint64_t t26 = 1957286569637LLU;

	t26 = ((x113<(x114%x115))%x116);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x117 = INT16_MAX;
	int64_t x118 = -1125021022LL;
	uint16_t x119 = UINT16_MAX;
	int8_t x120 = -17;
	volatile int32_t t27 = -12;

	t27 = ((x117<(x118%x119))%x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MIN;
	int8_t x123 = 6;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t28 = 60082318;

	t28 = ((x121<(x122%x123))%x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MIN;
	uint16_t x127 = 13152U;

	t29 = ((x125<(x126%x127))%x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x129 = 10U;
	volatile uint32_t x130 = UINT32_MAX;
	int8_t x131 = INT8_MIN;
	uint8_t x132 = 1U;
	volatile int32_t t30 = 390;

	t30 = ((x129<(x130%x131))%x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	int64_t x135 = -1LL;
	volatile int64_t x136 = -1LL;
	static volatile int64_t t31 = -1118597980382095959LL;

	t31 = ((x133<(x134%x135))%x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = -1;
	int16_t x138 = INT16_MIN;
	int64_t x139 = -1LL;
	static int8_t x140 = INT8_MIN;

	t32 = ((x137<(x138%x139))%x140);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x141 = -1LL;
	uint64_t x142 = UINT64_MAX;
	static volatile uint32_t x143 = UINT32_MAX;
	static volatile int32_t x144 = INT32_MIN;
	volatile int32_t t33 = 188290;

	t33 = ((x141<(x142%x143))%x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = 123LLU;
	static uint16_t x146 = 141U;
	int16_t x147 = INT16_MIN;
	volatile int64_t t34 = 256143674441LL;

	t34 = ((x145<(x146%x147))%x148);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = UINT32_MAX;
	int8_t x155 = 1;
	volatile uint32_t t35 = 1808912U;

	t35 = ((x153<(x154%x155))%x156);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MAX;
	uint16_t x158 = 26U;
	int8_t x159 = INT8_MIN;
	int32_t x160 = -1;
	volatile int32_t t36 = 1381;

	t36 = ((x157<(x158%x159))%x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x162 = INT8_MIN;
	int32_t x164 = -1;
	volatile int32_t t37 = 3964;

	t37 = ((x161<(x162%x163))%x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = 0;
	int8_t x166 = -4;
	int8_t x167 = 29;
	uint64_t x168 = UINT64_MAX;

	t38 = ((x165<(x166%x167))%x168);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x169 = 463U;
	static int64_t x170 = -1LL;
	volatile int16_t x171 = -1327;
	uint16_t x172 = 126U;
	int32_t t39 = -216858;

	t39 = ((x169<(x170%x171))%x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x173 = -61780LL;
	int16_t x174 = INT16_MIN;
	volatile int64_t x175 = -33953180088LL;
	int32_t x176 = -154907464;
	volatile int32_t t40 = 17353;

	t40 = ((x173<(x174%x175))%x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x178 = 3935578946357109838LLU;
	int64_t x179 = 6842196458409214LL;
	static int16_t x180 = INT16_MIN;
	int32_t t41 = -3765885;

	t41 = ((x177<(x178%x179))%x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = -1;
	volatile uint8_t x182 = 1U;
	int16_t x183 = INT16_MIN;
	static volatile uint64_t x184 = 33933008137932659LLU;
	volatile uint64_t t42 = 4135093041475761686LLU;

	t42 = ((x181<(x182%x183))%x184);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = -1;
	uint8_t x186 = 15U;
	int32_t x187 = INT32_MIN;
	int32_t x188 = -18580;
	static volatile int32_t t43 = -61466935;

	t43 = ((x185<(x186%x187))%x188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MAX;
	int8_t x191 = INT8_MAX;
	static volatile uint8_t x192 = UINT8_MAX;
	static volatile int32_t t44 = -13;

	t44 = ((x189<(x190%x191))%x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = 2U;
	static volatile uint32_t x194 = UINT32_MAX;
	static uint64_t x195 = 455664556226LLU;
	int32_t t45 = -23;

	t45 = ((x193<(x194%x195))%x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = 20U;
	uint16_t x198 = 5151U;
	int16_t x199 = -14;
	uint32_t x200 = 145U;
	uint32_t t46 = 92728967U;

	t46 = ((x197<(x198%x199))%x200);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x202 = 17642718414939063LL;
	int16_t x203 = INT16_MAX;
	volatile uint64_t x204 = 161486584124027558LLU;
	volatile uint64_t t47 = 3373691LLU;

	t47 = ((x201<(x202%x203))%x204);

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x209 = 1U;
	int16_t x210 = INT16_MIN;
	volatile uint64_t x211 = UINT64_MAX;
	uint64_t x212 = UINT64_MAX;
	static volatile uint64_t t48 = 0LLU;

	t48 = ((x209<(x210%x211))%x212);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x213 = 0U;
	uint8_t x214 = UINT8_MAX;
	uint8_t x215 = UINT8_MAX;
	int32_t x216 = 96998;
	static int32_t t49 = -21946;

	t49 = ((x213<(x214%x215))%x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = -15;
	int64_t x218 = INT64_MIN;
	static int32_t x219 = INT32_MIN;
	static volatile uint64_t x220 = UINT64_MAX;
	volatile uint64_t t50 = 233617975066547LLU;

	t50 = ((x217<(x218%x219))%x220);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = 402098121LLU;
	int8_t x222 = INT8_MAX;
	int64_t x224 = INT64_MAX;
	static int64_t t51 = 1540752541LL;

	t51 = ((x221<(x222%x223))%x224);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x225 = 1;
	int64_t x226 = INT64_MIN;
	int32_t x227 = -1;
	static uint16_t x228 = 213U;
	volatile int32_t t52 = -3518877;

	t52 = ((x225<(x226%x227))%x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = 5714LLU;
	int16_t x230 = 2;
	int64_t x231 = INT64_MAX;
	int32_t t53 = -110;

	t53 = ((x229<(x230%x231))%x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x233 = INT16_MIN;
	volatile int32_t x235 = INT32_MIN;
	uint32_t t54 = 3U;

	t54 = ((x233<(x234%x235))%x236);

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x237 = INT32_MIN;
	int32_t x238 = -1;
	int8_t x239 = INT8_MIN;
	volatile int32_t x240 = 436;
	static volatile int32_t t55 = -2;

	t55 = ((x237<(x238%x239))%x240);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x242 = 34215U;
	uint32_t x243 = 230U;
	volatile int64_t x244 = -1LL;

	t56 = ((x241<(x242%x243))%x244);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x245 = INT16_MIN;
	int16_t x246 = -1;
	volatile int8_t x247 = 3;
	int32_t x248 = -1;
	int32_t t57 = 1734174;

	t57 = ((x245<(x246%x247))%x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = 4U;
	uint16_t x250 = 969U;
	uint8_t x251 = 73U;
	volatile uint8_t x252 = 7U;
	volatile int32_t t58 = -5552;

	t58 = ((x249<(x250%x251))%x252);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x254 = 2;
	int32_t x255 = INT32_MIN;
	static int32_t x256 = -1;
	int32_t t59 = -856;

	t59 = ((x253<(x254%x255))%x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x261 = UINT16_MAX;
	uint16_t x262 = UINT16_MAX;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = 23;
	int32_t t60 = -2048;

	t60 = ((x261<(x262%x263))%x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = -995LL;
	int8_t x266 = 14;
	volatile int8_t x267 = INT8_MIN;
	int64_t x268 = -1LL;
	volatile int64_t t61 = -126LL;

	t61 = ((x265<(x266%x267))%x268);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = 997168421640LLU;
	uint32_t x272 = UINT32_MAX;

	t62 = ((x269<(x270%x271))%x272);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x274 = 0;
	uint8_t x275 = 2U;
	static int8_t x276 = -1;

	t63 = ((x273<(x274%x275))%x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x277 = 13U;
	volatile int8_t x278 = INT8_MIN;
	uint16_t x279 = UINT16_MAX;
	volatile int16_t x280 = 1;
	int32_t t64 = 2563;

	t64 = ((x277<(x278%x279))%x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = INT16_MIN;
	uint16_t x282 = 2U;
	int8_t x283 = INT8_MIN;
	volatile uint64_t t65 = 312322875233462LLU;

	t65 = ((x281<(x282%x283))%x284);

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x285 = 7324U;
	static uint64_t x286 = 4752118048LLU;
	static uint16_t x287 = UINT16_MAX;
	int8_t x288 = INT8_MIN;

	t66 = ((x285<(x286%x287))%x288);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = -5357;
	int64_t x290 = -616LL;
	int8_t x291 = 1;
	int16_t x292 = 1;
	volatile int32_t t67 = -794699518;

	t67 = ((x289<(x290%x291))%x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x293 = 138924940LLU;
	volatile int32_t x296 = INT32_MAX;
	int32_t t68 = -1894;

	t68 = ((x293<(x294%x295))%x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = 2;
	int32_t x298 = INT32_MIN;
	static uint64_t x299 = 4158151333674830854LLU;
	int16_t x300 = 742;
	int32_t t69 = 2041813;

	t69 = ((x297<(x298%x299))%x300);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = INT64_MIN;
	volatile int64_t x302 = -1LL;
	int16_t x304 = -1;
	static volatile int32_t t70 = -57520;

	t70 = ((x301<(x302%x303))%x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x306 = -1;
	static int64_t x307 = INT64_MIN;
	static int32_t x308 = -8950448;

	t71 = ((x305<(x306%x307))%x308);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MIN;
	int8_t x310 = INT8_MIN;
	volatile int64_t x311 = INT64_MAX;
	volatile int64_t x312 = -1LL;

	t72 = ((x309<(x310%x311))%x312);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x314 = -1;
	int8_t x316 = INT8_MIN;
	static int32_t t73 = -1;

	t73 = ((x313<(x314%x315))%x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = 6;
	uint64_t x322 = UINT64_MAX;
	uint16_t x323 = UINT16_MAX;

	t74 = ((x321<(x322%x323))%x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = INT8_MIN;
	int32_t x327 = -354;
	volatile int32_t t75 = -14992940;

	t75 = ((x325<(x326%x327))%x328);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x329 = 17825U;
	static int64_t x330 = -1LL;
	int8_t x331 = INT8_MIN;
	uint16_t x332 = 1U;
	int32_t t76 = 2;

	t76 = ((x329<(x330%x331))%x332);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = -1;
	volatile int64_t x334 = INT64_MAX;
	uint32_t x335 = 5363U;
	static int16_t x336 = INT16_MAX;
	int32_t t77 = 1;

	t77 = ((x333<(x334%x335))%x336);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x337 = 67U;
	uint64_t x338 = 3937754299LLU;
	uint64_t x339 = 468972366LLU;
	volatile int16_t x340 = INT16_MAX;
	volatile int32_t t78 = 29171141;

	t78 = ((x337<(x338%x339))%x340);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x341 = UINT32_MAX;
	uint64_t x342 = 41LLU;
	uint16_t x343 = UINT16_MAX;
	int8_t x344 = INT8_MAX;
	static int32_t t79 = -7630;

	t79 = ((x341<(x342%x343))%x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x345 = -1LL;
	volatile uint32_t x346 = UINT32_MAX;
	volatile uint64_t x347 = 137012184102316131LLU;
	uint32_t t80 = 84024U;

	t80 = ((x345<(x346%x347))%x348);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = INT32_MIN;
	volatile int16_t x354 = -3;
	int8_t x355 = INT8_MIN;
	static int16_t x356 = INT16_MIN;
	static int32_t t81 = 159243;

	t81 = ((x353<(x354%x355))%x356);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x357 = 113U;
	uint32_t x358 = 2655557U;
	int8_t x359 = -1;
	uint64_t x360 = 59959613LLU;
	uint64_t t82 = 14549803LLU;

	t82 = ((x357<(x358%x359))%x360);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x361 = -1;
	int64_t x362 = INT64_MAX;
	volatile int32_t t83 = -18;

	t83 = ((x361<(x362%x363))%x364);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = 0;
	static volatile uint8_t x367 = 64U;
	int16_t x368 = 13988;

	t84 = ((x365<(x366%x367))%x368);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x370 = -247842521968284LL;
	volatile int8_t x371 = INT8_MAX;
	int32_t t85 = -13548;

	t85 = ((x369<(x370%x371))%x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x373 = 26450U;
	volatile int64_t x375 = -275529LL;
	volatile int32_t t86 = 759806;

	t86 = ((x373<(x374%x375))%x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x377 = 1U;
	int8_t x378 = 3;
	int16_t x379 = INT16_MIN;
	volatile int64_t x380 = -1LL;
	volatile int64_t t87 = 83895LL;

	t87 = ((x377<(x378%x379))%x380);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x382 = INT8_MIN;
	int8_t x384 = -5;
	int32_t t88 = -82911930;

	t88 = ((x381<(x382%x383))%x384);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x385 = INT32_MIN;
	static uint16_t x386 = 2U;
	static int8_t x387 = 1;
	static int8_t x388 = INT8_MIN;
	int32_t t89 = -5832699;

	t89 = ((x385<(x386%x387))%x388);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x389 = INT16_MIN;
	uint8_t x391 = 9U;
	int64_t x392 = INT64_MIN;
	int64_t t90 = 6554772LL;

	t90 = ((x389<(x390%x391))%x392);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x393 = INT64_MIN;
	static uint32_t x394 = UINT32_MAX;
	int16_t x395 = 386;
	static int16_t x396 = 2393;

	t91 = ((x393<(x394%x395))%x396);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MIN;
	uint8_t x399 = UINT8_MAX;
	volatile uint32_t x400 = 363164U;

	t92 = ((x397<(x398%x399))%x400);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x401 = UINT16_MAX;
	uint64_t x402 = 83380528574LLU;
	int32_t x403 = 11;
	static int32_t t93 = 1631;

	t93 = ((x401<(x402%x403))%x404);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = -1;
	int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t94 = 1;

	t94 = ((x405<(x406%x407))%x408);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x409 = UINT8_MAX;
	uint32_t x410 = 19202U;
	static int32_t x411 = INT32_MIN;
	uint64_t x412 = 239922134LLU;
	volatile uint64_t t95 = 281128206LLU;

	t95 = ((x409<(x410%x411))%x412);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x413 = UINT64_MAX;
	int32_t x414 = INT32_MIN;
	volatile int32_t t96 = -479;

	t96 = ((x413<(x414%x415))%x416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x417 = INT8_MAX;
	volatile int64_t x418 = -75868612194930LL;
	static volatile uint64_t x419 = 36227062953537LLU;
	static int64_t x420 = 3426044337602746281LL;
	static volatile int64_t t97 = 3336LL;

	t97 = ((x417<(x418%x419))%x420);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x421 = 423393553U;
	int8_t x422 = 6;
	static uint64_t x424 = 1LLU;
	volatile uint64_t t98 = 0LLU;

	t98 = ((x421<(x422%x423))%x424);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x425 = INT16_MAX;
	int8_t x426 = INT8_MIN;
	int16_t x427 = INT16_MIN;

	t99 = ((x425<(x426%x427))%x428);

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

