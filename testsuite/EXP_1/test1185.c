#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = 12;
int32_t x20 = -1;
static volatile uint64_t x21 = 127476LLU;
int32_t x24 = INT32_MIN;
int8_t x26 = 3;
volatile int32_t t4 = -1;
uint8_t x31 = 4U;
static uint32_t x39 = 2019077779U;
int16_t x42 = INT16_MIN;
int32_t t11 = -249;
static volatile uint64_t t12 = 939LLU;
int16_t x73 = 148;
int16_t x74 = INT16_MIN;
uint64_t x75 = 108265LLU;
volatile int32_t t14 = -1;
uint8_t x89 = 6U;
static int8_t x92 = 2;
int8_t x97 = -18;
int64_t t20 = 3992298390767809LL;
int8_t x119 = 0;
uint16_t x126 = 1U;
volatile uint32_t t27 = 1554275770U;
int32_t t32 = -284696;
static int16_t x165 = INT16_MIN;
volatile int64_t x166 = INT64_MIN;
int32_t t35 = 525430;
int32_t x174 = 33091409;
int8_t x176 = -1;
uint8_t x179 = 5U;
static volatile uint32_t x184 = 2194058U;
static uint32_t t38 = 2053U;
volatile int32_t t39 = -31;
volatile int32_t t41 = -1;
int8_t x197 = INT8_MIN;
int64_t t42 = 21923310LL;
int64_t x206 = -1LL;
uint8_t x210 = 36U;
uint16_t x213 = 40U;
static int16_t x215 = INT16_MIN;
volatile int32_t t48 = 193046056;
volatile int32_t x229 = -1;
volatile uint64_t t49 = 16372137185LLU;
static volatile int32_t t50 = -7384037;
int64_t x237 = 27460990531567014LL;
int64_t x239 = -1LL;
int64_t t51 = 748167LL;
int64_t t52 = 11LL;
uint64_t x252 = 262180427LLU;
int32_t x256 = INT32_MAX;
int16_t x261 = INT16_MAX;
int8_t x262 = INT8_MIN;
int64_t x263 = 40208499625763813LL;
volatile int64_t t57 = 22836582593263LL;
static int64_t x266 = -17743778LL;
uint16_t x270 = UINT16_MAX;
static int32_t x271 = -1;
int16_t x273 = INT16_MIN;
uint16_t x277 = UINT16_MAX;
volatile uint64_t x292 = 27162946420974LLU;
uint64_t t63 = 7168913594397274LLU;
volatile int32_t t64 = 12836;
int16_t x300 = -9;
int32_t x304 = INT32_MIN;
volatile int32_t x305 = INT32_MIN;
volatile uint64_t x307 = 72388645097LLU;
int8_t x309 = INT8_MIN;
int32_t x311 = -233;
int8_t x312 = 13;
static int8_t x315 = INT8_MAX;
uint32_t x316 = UINT32_MAX;
uint32_t t69 = 73540329U;
static uint32_t x318 = UINT32_MAX;
int16_t x319 = -1425;
static int64_t t70 = -1LL;
volatile int16_t x323 = -1;
int64_t x324 = INT64_MIN;
volatile int32_t x337 = INT32_MIN;
static int8_t x338 = -6;
uint8_t x343 = 97U;
static int32_t t73 = 283798;
uint32_t x347 = UINT32_MAX;
int8_t x349 = 3;
static int16_t x357 = INT16_MIN;
int8_t x360 = INT8_MAX;
volatile int32_t t77 = 0;
int8_t x362 = INT8_MAX;
volatile uint16_t x364 = UINT16_MAX;
int16_t x370 = 0;
int64_t x380 = INT64_MAX;
int64_t t82 = -11LL;
int64_t x382 = INT64_MAX;
uint8_t x400 = 1U;
volatile int32_t t88 = -29255505;
int32_t x419 = 213;
static uint8_t x421 = UINT8_MAX;
volatile int64_t t92 = 48LL;
static int8_t x426 = INT8_MAX;
volatile int16_t x430 = -1;
uint32_t x433 = 221336196U;
int32_t t95 = 335;
int8_t x440 = -56;
int8_t x443 = INT8_MIN;
static uint32_t x444 = UINT32_MAX;
uint32_t t97 = 18515526U;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile uint16_t x2 = 31701U;
	volatile int8_t x3 = INT8_MAX;
	int32_t t0 = 13;

	t0 = (((x1==x2)+x3)-x4);

	if (t0 != 115) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x9 = 26U;
	int64_t x10 = INT64_MAX;
	static int32_t x11 = -12;
	uint32_t x12 = 8116U;
	uint32_t t1 = 1405221U;

	t1 = (((x9==x10)+x11)-x12);

	if (t1 != 4294959168U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = UINT32_MAX;
	volatile uint16_t x18 = 0U;
	uint32_t x19 = 2U;
	uint32_t t2 = 24U;

	t2 = (((x17==x18)+x19)-x20);

	if (t2 != 3U) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x22 = -5115LL;
	static uint32_t x23 = 37468U;
	static volatile uint32_t t3 = 14923U;

	t3 = (((x21==x22)+x23)-x24);

	if (t3 != 2147521116U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x25 = INT8_MAX;
	volatile uint8_t x27 = 2U;
	volatile uint8_t x28 = 7U;

	t4 = (((x25==x26)+x27)-x28);

	if (t4 != -5) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = 1U;
	int8_t x30 = -1;
	int8_t x32 = INT8_MIN;
	static int32_t t5 = 8373588;

	t5 = (((x29==x30)+x31)-x32);

	if (t5 != 132) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x33 = 14LLU;
	uint64_t x34 = 5032815772543528LLU;
	int32_t x35 = -1;
	int64_t x36 = INT64_MAX;
	int64_t t6 = INT64_MIN;

	t6 = (((x33==x34)+x35)-x36);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 1U;
	uint64_t x38 = UINT64_MAX;
	uint16_t x40 = UINT16_MAX;
	volatile uint32_t t7 = 8400U;

	t7 = (((x37==x38)+x39)-x40);

	if (t7 != 2019012244U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MIN;
	volatile uint8_t x43 = UINT8_MAX;
	int16_t x44 = INT16_MIN;
	static int32_t t8 = -3298433;

	t8 = (((x41==x42)+x43)-x44);

	if (t8 != 33023) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x45 = 53U;
	uint32_t x46 = 2121U;
	uint64_t x47 = 250910607272LLU;
	uint8_t x48 = 119U;
	uint64_t t9 = 2291896346LLU;

	t9 = (((x45==x46)+x47)-x48);

	if (t9 != 250910607153LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x53 = INT16_MIN;
	uint8_t x54 = 35U;
	volatile int16_t x55 = INT16_MAX;
	int16_t x56 = INT16_MAX;
	volatile int32_t t10 = -21001378;

	t10 = (((x53==x54)+x55)-x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = -258;
	volatile int64_t x66 = 2LL;
	static int16_t x67 = -1115;
	static uint16_t x68 = UINT16_MAX;

	t11 = (((x65==x66)+x67)-x68);

	if (t11 != -66650) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = -28;
	uint32_t x70 = UINT32_MAX;
	static int32_t x71 = INT32_MIN;
	uint64_t x72 = 141527175684175538LLU;

	t12 = (((x69==x70)+x71)-x72);

	if (t12 != 18305216895877892430LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x76 = INT16_MIN;
	static uint64_t t13 = 725LLU;

	t13 = (((x73==x74)+x75)-x76);

	if (t13 != 141033LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x77 = UINT8_MAX;
	uint64_t x78 = UINT64_MAX;
	int32_t x79 = -111352967;
	int32_t x80 = INT32_MIN;

	t14 = (((x77==x78)+x79)-x80);

	if (t14 != 2036130681) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = INT32_MAX;
	int32_t x82 = 6;
	static int8_t x83 = -1;
	int16_t x84 = INT16_MAX;
	volatile int32_t t15 = 3243206;

	t15 = (((x81==x82)+x83)-x84);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = INT32_MIN;
	uint8_t x86 = 5U;
	volatile int8_t x87 = INT8_MIN;
	uint16_t x88 = 20U;
	int32_t t16 = 2157;

	t16 = (((x85==x86)+x87)-x88);

	if (t16 != -148) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x90 = -2LL;
	uint8_t x91 = 1U;
	volatile int32_t t17 = -644152;

	t17 = (((x89==x90)+x91)-x92);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = INT32_MIN;
	static uint64_t x94 = 99LLU;
	int16_t x95 = INT16_MIN;
	volatile int8_t x96 = INT8_MAX;
	int32_t t18 = 37050;

	t18 = (((x93==x94)+x95)-x96);

	if (t18 != -32895) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x98 = INT64_MAX;
	int32_t x99 = -1;
	uint16_t x100 = 237U;
	static int32_t t19 = -1;

	t19 = (((x97==x98)+x99)-x100);

	if (t19 != -238) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x101 = 43754U;
	uint64_t x102 = 3829774407683LLU;
	int64_t x103 = -1310479LL;
	volatile int8_t x104 = INT8_MAX;

	t20 = (((x101==x102)+x103)-x104);

	if (t20 != -1310606LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = 1;
	int64_t x106 = -6682803158694144LL;
	static uint8_t x107 = 0U;
	static int16_t x108 = INT16_MAX;
	static volatile int32_t t21 = -100154;

	t21 = (((x105==x106)+x107)-x108);

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = INT8_MAX;
	int32_t x110 = 7114448;
	uint8_t x111 = UINT8_MAX;
	int16_t x112 = INT16_MIN;
	int32_t t22 = 305;

	t22 = (((x109==x110)+x111)-x112);

	if (t22 != 33023) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x113 = -3;
	int32_t x114 = INT32_MAX;
	volatile int64_t x115 = INT64_MIN;
	uint64_t x116 = 2LLU;
	volatile uint64_t t23 = 5590297409106LLU;

	t23 = (((x113==x114)+x115)-x116);

	if (t23 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MIN;
	int64_t x118 = -1387772024996LL;
	int16_t x120 = INT16_MAX;
	static int32_t t24 = 3060;

	t24 = (((x117==x118)+x119)-x120);

	if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = 166510357LLU;
	volatile int8_t x122 = INT8_MAX;
	uint16_t x123 = 8727U;
	static int16_t x124 = INT16_MIN;
	static int32_t t25 = 1858343;

	t25 = (((x121==x122)+x123)-x124);

	if (t25 != 41495) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = 1;
	volatile int16_t x127 = -1;
	int8_t x128 = INT8_MAX;
	int32_t t26 = 6;

	t26 = (((x125==x126)+x127)-x128);

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = -61971227419285039LL;
	static int16_t x131 = -11;
	uint32_t x132 = 158170U;

	t27 = (((x129==x130)+x131)-x132);

	if (t27 != 4294809115U) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x133 = -1;
	int8_t x134 = INT8_MAX;
	int64_t x135 = -238070262855202315LL;
	int8_t x136 = INT8_MIN;
	volatile int64_t t28 = -16771344LL;

	t28 = (((x133==x134)+x135)-x136);

	if (t28 != -238070262855202187LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = 2403034718403393704LL;
	int32_t x138 = -6419;
	int16_t x139 = INT16_MIN;
	static int16_t x140 = -1708;
	volatile int32_t t29 = -3174900;

	t29 = (((x137==x138)+x139)-x140);

	if (t29 != -31060) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = UINT16_MAX;
	int32_t x142 = -1;
	int16_t x143 = INT16_MIN;
	static uint64_t x144 = UINT64_MAX;
	uint64_t t30 = 18851263LLU;

	t30 = (((x141==x142)+x143)-x144);

	if (t30 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x145 = 1786936606U;
	uint16_t x146 = 1U;
	volatile uint64_t x147 = UINT64_MAX;
	int32_t x148 = -2;
	volatile uint64_t t31 = 6682108LLU;

	t31 = (((x145==x146)+x147)-x148);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = INT64_MIN;
	volatile int64_t x150 = -202LL;
	static uint8_t x151 = 15U;
	static uint16_t x152 = 1U;

	t32 = (((x149==x150)+x151)-x152);

	if (t32 != 14) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x157 = 6074U;
	uint16_t x158 = UINT16_MAX;
	int16_t x159 = INT16_MAX;
	int16_t x160 = INT16_MAX;
	int32_t t33 = -113;

	t33 = (((x157==x158)+x159)-x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = 32;
	static uint16_t x162 = 897U;
	int32_t x163 = INT32_MIN;
	int64_t x164 = INT64_MIN;
	int64_t t34 = -3862253355326209LL;

	t34 = (((x161==x162)+x163)-x164);

	if (t34 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x167 = 309U;
	volatile uint8_t x168 = UINT8_MAX;

	t35 = (((x165==x166)+x167)-x168);

	if (t35 != 54) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = 5;
	int8_t x175 = INT8_MAX;
	volatile int32_t t36 = 0;

	t36 = (((x173==x174)+x175)-x176);

	if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = -18;
	static volatile int16_t x178 = INT16_MIN;
	uint32_t x180 = 31651684U;
	volatile uint32_t t37 = 26787U;

	t37 = (((x177==x178)+x179)-x180);

	if (t37 != 4263315617U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = -1062951982984593457LL;
	int8_t x182 = -1;
	int8_t x183 = INT8_MIN;

	t38 = (((x181==x182)+x183)-x184);

	if (t38 != 4292773110U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x185 = 24880828LLU;
	int8_t x186 = -1;
	volatile int16_t x187 = 8979;
	int16_t x188 = INT16_MAX;

	t39 = (((x185==x186)+x187)-x188);

	if (t39 != -23788) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = INT32_MAX;
	volatile uint32_t x190 = 1123683207U;
	int16_t x191 = INT16_MIN;
	int8_t x192 = -11;
	int32_t t40 = -813;

	t40 = (((x189==x190)+x191)-x192);

	if (t40 != -32757) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x193 = INT64_MIN;
	int16_t x194 = -1;
	static int16_t x195 = INT16_MAX;
	static int16_t x196 = -1;

	t41 = (((x193==x194)+x195)-x196);

	if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x198 = -1;
	int64_t x199 = INT64_MAX;
	static int32_t x200 = INT32_MAX;

	t42 = (((x197==x198)+x199)-x200);

	if (t42 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x201 = 7U;
	int16_t x202 = -1;
	int32_t x203 = -78055881;
	uint64_t x204 = 515609054620335LLU;
	volatile uint64_t t43 = 3289084LLU;

	t43 = (((x201==x202)+x203)-x204);

	if (t43 != 18446228464576875400LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x205 = UINT8_MAX;
	uint32_t x207 = UINT32_MAX;
	volatile int64_t x208 = -1LL;
	volatile int64_t t44 = 13431LL;

	t44 = (((x205==x206)+x207)-x208);

	if (t44 != 4294967296LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x209 = UINT64_MAX;
	static int32_t x211 = INT32_MIN;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t45 = 4847083258647979051LLU;

	t45 = (((x209==x210)+x211)-x212);

	if (t45 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x214 = INT32_MAX;
	volatile int8_t x216 = 7;
	volatile int32_t t46 = 14943;

	t46 = (((x213==x214)+x215)-x216);

	if (t46 != -32775) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = INT64_MIN;
	uint8_t x218 = 2U;
	volatile int32_t x219 = -2120352;
	volatile int16_t x220 = INT16_MIN;
	volatile int32_t t47 = 1421;

	t47 = (((x217==x218)+x219)-x220);

	if (t47 != -2087584) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x225 = UINT64_MAX;
	int8_t x226 = INT8_MIN;
	int32_t x227 = INT32_MAX;
	int8_t x228 = INT8_MAX;

	t48 = (((x225==x226)+x227)-x228);

	if (t48 != 2147483520) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x230 = 8296499;
	uint64_t x231 = UINT64_MAX;
	uint8_t x232 = UINT8_MAX;

	t49 = (((x229==x230)+x231)-x232);

	if (t49 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x233 = -1;
	int64_t x234 = INT64_MIN;
	int32_t x235 = -1;
	int8_t x236 = -4;

	t50 = (((x233==x234)+x235)-x236);

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x238 = 0U;
	int16_t x240 = -1;

	t51 = (((x237==x238)+x239)-x240);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x241 = INT32_MIN;
	int64_t x242 = 17LL;
	int64_t x243 = INT64_MIN;
	int64_t x244 = -1LL;

	t52 = (((x241==x242)+x243)-x244);

	if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x245 = 1U;
	uint8_t x246 = 29U;
	int32_t x247 = INT32_MAX;
	uint16_t x248 = UINT16_MAX;
	int32_t t53 = -1;

	t53 = (((x245==x246)+x247)-x248);

	if (t53 != 2147418112) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x249 = -29199818LL;
	static volatile int32_t x250 = 1044447896;
	int32_t x251 = -1;
	static uint64_t t54 = 14089116200971937LLU;

	t54 = (((x249==x250)+x251)-x252);

	if (t54 != 18446744073447371188LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = 687;
	int32_t x254 = INT32_MAX;
	volatile uint64_t x255 = 3895954372296LLU;
	uint64_t t55 = 24452051614361LLU;

	t55 = (((x253==x254)+x255)-x256);

	if (t55 != 3893806888649LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x257 = UINT8_MAX;
	uint64_t x258 = 177LLU;
	int64_t x259 = -24073048079851875LL;
	uint32_t x260 = 3U;
	volatile int64_t t56 = 4640LL;

	t56 = (((x257==x258)+x259)-x260);

	if (t56 != -24073048079851878LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x264 = UINT32_MAX;

	t57 = (((x261==x262)+x263)-x264);

	if (t57 != 40208495330796518LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x265 = UINT8_MAX;
	int64_t x267 = -1LL;
	volatile int16_t x268 = INT16_MIN;
	static volatile int64_t t58 = 2050052LL;

	t58 = (((x265==x266)+x267)-x268);

	if (t58 != 32767LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = 1;
	volatile int16_t x272 = INT16_MAX;
	static int32_t t59 = -493;

	t59 = (((x269==x270)+x271)-x272);

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x274 = INT32_MAX;
	volatile uint32_t x275 = 2U;
	int32_t x276 = INT32_MAX;
	uint32_t t60 = 968U;

	t60 = (((x273==x274)+x275)-x276);

	if (t60 != 2147483651U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x278 = -223;
	uint16_t x279 = 13054U;
	uint16_t x280 = 4823U;
	static volatile int32_t t61 = 86;

	t61 = (((x277==x278)+x279)-x280);

	if (t61 != 8231) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = 7LL;
	uint64_t x286 = 8590370937713486672LLU;
	volatile int64_t x287 = -1LL;
	uint64_t x288 = 719448101LLU;
	uint64_t t62 = 369LLU;

	t62 = (((x285==x286)+x287)-x288);

	if (t62 != 18446744072990103514LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x289 = -1;
	int32_t x290 = INT32_MIN;
	uint16_t x291 = 44U;

	t63 = (((x289==x290)+x291)-x292);

	if (t63 != 18446716910763130686LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x293 = 29U;
	static int32_t x294 = INT32_MIN;
	int8_t x295 = INT8_MIN;
	static int8_t x296 = 22;

	t64 = (((x293==x294)+x295)-x296);

	if (t64 != -150) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x297 = INT64_MAX;
	int64_t x298 = 76431519668535LL;
	volatile int64_t x299 = -1LL;
	volatile int64_t t65 = -3133495451986LL;

	t65 = (((x297==x298)+x299)-x300);

	if (t65 != 8LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = 182;
	static int64_t x302 = -1LL;
	static uint32_t x303 = 689904770U;
	uint32_t t66 = 99969062U;

	t66 = (((x301==x302)+x303)-x304);

	if (t66 != 2837388418U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x306 = 161U;
	uint64_t x308 = UINT64_MAX;
	uint64_t t67 = 140598LLU;

	t67 = (((x305==x306)+x307)-x308);

	if (t67 != 72388645098LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x310 = 8966934LLU;
	int32_t t68 = -2093193;

	t68 = (((x309==x310)+x311)-x312);

	if (t68 != -246) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x313 = -1;
	int32_t x314 = INT32_MIN;

	t69 = (((x313==x314)+x315)-x316);

	if (t69 != 128U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x317 = INT16_MAX;
	volatile int64_t x320 = INT64_MIN;

	t70 = (((x317==x318)+x319)-x320);

	if (t70 != 9223372036854774383LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x321 = 50024531097859515LL;
	uint16_t x322 = UINT16_MAX;
	volatile int64_t t71 = INT64_MAX;

	t71 = (((x321==x322)+x323)-x324);

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x339 = -205;
	static int8_t x340 = -1;
	volatile int32_t t72 = 1;

	t72 = (((x337==x338)+x339)-x340);

	if (t72 != -204) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x341 = UINT64_MAX;
	volatile uint8_t x342 = 0U;
	int8_t x344 = INT8_MIN;

	t73 = (((x341==x342)+x343)-x344);

	if (t73 != 225) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = -1;
	volatile uint8_t x346 = 0U;
	uint64_t x348 = 4854415393305LLU;
	volatile uint64_t t74 = 331553729695628LLU;

	t74 = (((x345==x346)+x347)-x348);

	if (t74 != 18446739223589125606LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x350 = UINT32_MAX;
	uint16_t x351 = 25056U;
	uint8_t x352 = 4U;
	int32_t t75 = 2;

	t75 = (((x349==x350)+x351)-x352);

	if (t75 != 25052) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = INT8_MIN;
	volatile int16_t x354 = -1;
	uint16_t x355 = 11U;
	volatile int64_t x356 = 21LL;
	volatile int64_t t76 = -4LL;

	t76 = (((x353==x354)+x355)-x356);

	if (t76 != -10LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x358 = INT32_MIN;
	volatile int16_t x359 = INT16_MAX;

	t77 = (((x357==x358)+x359)-x360);

	if (t77 != 32640) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x361 = UINT16_MAX;
	volatile uint8_t x363 = 6U;
	int32_t t78 = 0;

	t78 = (((x361==x362)+x363)-x364);

	if (t78 != -65529) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x365 = 1956U;
	int32_t x366 = -1;
	int8_t x367 = INT8_MAX;
	static uint8_t x368 = UINT8_MAX;
	int32_t t79 = -77316778;

	t79 = (((x365==x366)+x367)-x368);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x369 = 966722954103LL;
	uint16_t x371 = UINT16_MAX;
	uint64_t x372 = 469555399LLU;
	uint64_t t80 = 3025627473286142373LLU;

	t80 = (((x369==x370)+x371)-x372);

	if (t80 != 18446744073240061752LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x373 = INT32_MAX;
	int64_t x374 = INT64_MIN;
	int8_t x375 = 1;
	int16_t x376 = -5046;
	int32_t t81 = 478848250;

	t81 = (((x373==x374)+x375)-x376);

	if (t81 != 5047) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x377 = INT32_MAX;
	volatile int64_t x378 = 3176928787210LL;
	uint32_t x379 = 3356U;

	t82 = (((x377==x378)+x379)-x380);

	if (t82 != -9223372036854772451LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x381 = UINT8_MAX;
	volatile uint8_t x383 = UINT8_MAX;
	uint16_t x384 = 9U;
	int32_t t83 = -525107884;

	t83 = (((x381==x382)+x383)-x384);

	if (t83 != 246) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x385 = INT32_MAX;
	uint32_t x386 = 15922U;
	int64_t x387 = INT64_MIN;
	volatile int8_t x388 = -1;
	int64_t t84 = 6920727LL;

	t84 = (((x385==x386)+x387)-x388);

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x389 = 3U;
	int64_t x390 = 197120553108LL;
	static int8_t x391 = INT8_MIN;
	uint16_t x392 = 10806U;
	static volatile int32_t t85 = -2633736;

	t85 = (((x389==x390)+x391)-x392);

	if (t85 != -10934) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x397 = -1;
	static int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	int32_t t86 = 7546793;

	t86 = (((x397==x398)+x399)-x400);

	if (t86 != -32769) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x401 = UINT64_MAX;
	uint64_t x402 = 779427317LLU;
	int8_t x403 = INT8_MAX;
	uint32_t x404 = 30U;
	uint32_t t87 = 662657U;

	t87 = (((x401==x402)+x403)-x404);

	if (t87 != 97U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x405 = UINT64_MAX;
	int16_t x406 = -13;
	int32_t x407 = -1;
	volatile int32_t x408 = -1;

	t88 = (((x405==x406)+x407)-x408);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x409 = 29U;
	int64_t x410 = INT64_MIN;
	int8_t x411 = -1;
	int8_t x412 = INT8_MIN;
	volatile int32_t t89 = -60113653;

	t89 = (((x409==x410)+x411)-x412);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x413 = -1;
	int64_t x414 = INT64_MIN;
	int32_t x415 = 112515877;
	volatile uint32_t x416 = UINT32_MAX;
	uint32_t t90 = 0U;

	t90 = (((x413==x414)+x415)-x416);

	if (t90 != 112515878U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x417 = -1;
	int16_t x418 = INT16_MIN;
	uint16_t x420 = 4U;
	int32_t t91 = 15283128;

	t91 = (((x417==x418)+x419)-x420);

	if (t91 != 209) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x422 = -905214981LL;
	static volatile int8_t x423 = 2;
	static int64_t x424 = INT64_MAX;

	t92 = (((x421==x422)+x423)-x424);

	if (t92 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x425 = 2090479;
	int32_t x427 = INT32_MIN;
	uint32_t x428 = 62558U;
	volatile uint32_t t93 = 52677U;

	t93 = (((x425==x426)+x427)-x428);

	if (t93 != 2147421090U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x429 = -375802;
	volatile uint16_t x431 = UINT16_MAX;
	uint16_t x432 = 0U;
	static volatile int32_t t94 = -16;

	t94 = (((x429==x430)+x431)-x432);

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x434 = INT16_MIN;
	int8_t x435 = 0;
	int8_t x436 = -3;

	t95 = (((x433==x434)+x435)-x436);

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x437 = -1;
	uint16_t x438 = 62U;
	int32_t x439 = INT32_MIN;
	volatile int32_t t96 = -476;

	t96 = (((x437==x438)+x439)-x440);

	if (t96 != -2147483592) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x441 = UINT8_MAX;
	static int16_t x442 = INT16_MAX;

	t97 = (((x441==x442)+x443)-x444);

	if (t97 != 4294967169U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x449 = INT32_MIN;
	uint64_t x450 = 4569429696591053770LLU;
	int32_t x451 = 201447;
	static volatile int16_t x452 = INT16_MIN;
	volatile int32_t t98 = 56;

	t98 = (((x449==x450)+x451)-x452);

	if (t98 != 234215) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x453 = 2113U;
	int32_t x454 = INT32_MIN;
	int8_t x455 = INT8_MAX;
	static uint16_t x456 = 4U;
	volatile int32_t t99 = 4;

	t99 = (((x453==x454)+x455)-x456);

	if (t99 != 123) { NG(); } else { ; }
	
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

