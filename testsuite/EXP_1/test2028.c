#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
int8_t x2 = INT8_MIN;
uint32_t x20 = 86U;
static uint64_t t6 = 774963LLU;
int16_t x29 = INT16_MAX;
int8_t x35 = INT8_MIN;
int16_t x38 = -1;
int64_t x39 = -1LL;
int8_t x40 = INT8_MIN;
static uint64_t x48 = 2638840986992LLU;
volatile uint32_t x50 = UINT32_MAX;
int32_t x51 = 21;
static int16_t x63 = 2419;
static volatile int64_t t15 = 82405079448LL;
int64_t x66 = INT64_MAX;
volatile uint32_t x71 = 797U;
int64_t x77 = -226975743LL;
static volatile int64_t x78 = -177036251275LL;
static int64_t x92 = INT64_MIN;
static int8_t x95 = INT8_MAX;
uint16_t x96 = 46U;
volatile uint32_t x99 = UINT32_MAX;
static int32_t x104 = -11192755;
int32_t x106 = 122703471;
uint32_t x112 = 152185030U;
volatile int16_t x114 = INT16_MIN;
int32_t x118 = -21278;
uint32_t x120 = 8U;
int16_t x126 = -1;
int8_t x130 = INT8_MIN;
static volatile int64_t t33 = 3150105195LL;
static volatile int64_t x139 = 3699341364742977LL;
static volatile int64_t x141 = -1LL;
volatile int32_t x153 = -1;
uint8_t x155 = 1U;
static uint64_t x158 = 410850694LLU;
volatile uint64_t t39 = 27648213606LLU;
int8_t x163 = -6;
int16_t x170 = INT16_MAX;
int8_t x174 = INT8_MAX;
int8_t x175 = 5;
int16_t x176 = -14358;
volatile int16_t x181 = INT16_MAX;
int16_t x195 = 37;
static uint16_t x202 = 5160U;
int16_t x213 = INT16_MAX;
static volatile int16_t x221 = INT16_MIN;
int32_t t55 = 206;
int32_t t57 = -22;
volatile uint64_t x234 = 6070119686380513LLU;
volatile int64_t x237 = 254606LL;
int8_t x241 = INT8_MIN;
int32_t x243 = INT32_MIN;
volatile int32_t t60 = -509766;
static int16_t x253 = -1;
volatile int16_t x257 = INT16_MIN;
volatile int16_t x260 = 52;
int16_t x261 = INT16_MIN;
volatile uint64_t x263 = 6240646869280457803LLU;
uint16_t x264 = UINT16_MAX;
uint8_t x265 = UINT8_MAX;
static int64_t t66 = -2567176277LL;
volatile int32_t x272 = INT32_MIN;
int16_t x276 = INT16_MAX;
volatile int32_t x296 = -644739;
volatile int64_t x305 = INT64_MAX;
uint64_t t78 = 9LLU;
static uint16_t x319 = UINT16_MAX;
volatile int64_t t80 = 26419LL;
static int32_t x325 = INT32_MAX;
static int8_t x326 = 63;
static volatile uint8_t x332 = 35U;
static volatile uint32_t t82 = 51U;
int32_t x333 = -31;
uint8_t x341 = 3U;
volatile int64_t t86 = -6LL;
static uint64_t t87 = 17LLU;
uint32_t x356 = 198U;
uint8_t x358 = UINT8_MAX;
volatile int64_t t89 = -1996110773203307LL;
volatile uint32_t x364 = 1513744979U;
int32_t x365 = INT32_MIN;
uint32_t x368 = 290369U;
int16_t x369 = INT16_MAX;
static volatile uint32_t t92 = 609U;
int64_t x379 = -1LL;
volatile uint16_t x385 = 8092U;
uint32_t x392 = 174277261U;
int8_t x393 = INT8_MAX;
int16_t x394 = 7582;


void f0(void) {
	volatile int8_t x3 = INT8_MAX;
	volatile int16_t x4 = INT16_MAX;
	static int32_t t0 = -21210343;

	t0 = (((x1|x2)^x3)^x4);

	if (t0 != -32641) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static uint16_t x6 = 19296U;
	uint64_t x7 = 64652801799LLU;
	uint16_t x8 = 1U;
	uint64_t t1 = 2317747557128LLU;

	t1 = (((x5|x6)^x7)^x8);

	if (t1 != 64652786809LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int16_t x10 = -1;
	int16_t x11 = -5339;
	int64_t x12 = 9004002724LL;
	int64_t t2 = -431462112107LL;

	t2 = (((x9|x10)^x11)^x12);

	if (t2 != 9004005758LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = INT16_MAX;
	uint8_t x14 = UINT8_MAX;
	static uint32_t x15 = UINT32_MAX;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = -81082LL;

	t3 = (((x13|x14)^x15)^x16);

	if (t3 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile int64_t x18 = -7575509594LL;
	static volatile int64_t x19 = -1LL;
	volatile int64_t t4 = 164285577LL;

	t4 = (((x17|x18)^x19)^x20);

	if (t4 != 15LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 33345506U;
	uint64_t x22 = 3LLU;
	uint8_t x23 = 7U;
	uint64_t x24 = 133518962723296598LLU;
	uint64_t t5 = 28146623467LLU;

	t5 = (((x21|x22)^x23)^x24);

	if (t5 != 133518962693135026LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 8395U;
	uint8_t x26 = 1U;
	uint64_t x27 = 65981861481789LLU;
	int32_t x28 = INT32_MIN;

	t6 = (((x25|x26)^x27)^x28);

	if (t6 != 18446678090553388534LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = INT16_MIN;
	volatile uint64_t x31 = 3342872430941255578LLU;
	int16_t x32 = INT16_MAX;
	volatile uint64_t t7 = 65438LLU;

	t7 = (((x29|x30)^x31)^x32);

	if (t7 != 15103871642768291738LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	uint64_t x34 = 518105LLU;
	uint32_t x36 = 89456750U;
	volatile uint64_t t8 = 710638014797823LLU;

	t8 = (((x33|x34)^x35)^x36);

	if (t8 != 18446744073620226065LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x37 = 1574164U;
	int64_t t9 = 2455567LL;

	t9 = (((x37|x38)^x39)^x40);

	if (t9 != 4294967168LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 3248U;
	int64_t x42 = INT64_MIN;
	uint64_t x43 = 6702LLU;
	int32_t x44 = -1;
	uint64_t t10 = 1619LLU;

	t10 = (((x41|x42)^x43)^x44);

	if (t10 != 9223372036854770017LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	uint8_t x46 = 0U;
	static volatile int32_t x47 = INT32_MIN;
	volatile uint64_t t11 = 976171LLU;

	t11 = (((x45|x46)^x47)^x48);

	if (t11 != 2637526336240LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -177575159;
	int16_t x52 = -15;
	uint32_t t12 = 220U;

	t12 = (((x49|x50)^x51)^x52);

	if (t12 != 27U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 123U;
	uint32_t x54 = 3421895U;
	volatile int64_t x55 = 23983183714134LL;
	volatile uint8_t x56 = 1U;
	int64_t t13 = 55056211012LL;

	t13 = (((x53|x54)^x55)^x56);

	if (t13 != 23983182406056LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	volatile uint8_t x58 = UINT8_MAX;
	volatile int32_t x59 = INT32_MIN;
	volatile int32_t x60 = INT32_MIN;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (((x57|x58)^x59)^x60);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 1392045601LL;
	int16_t x62 = INT16_MIN;
	uint32_t x64 = UINT32_MAX;

	t15 = (((x61|x62)^x63)^x64);

	if (t15 != -4294960979LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	static int8_t x67 = 3;
	int16_t x68 = INT16_MIN;
	static volatile int64_t t16 = -4091542LL;

	t16 = (((x65|x66)^x67)^x68);

	if (t16 != -9223372036854743044LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int8_t x70 = -1;
	int8_t x72 = INT8_MAX;
	uint32_t t17 = 19104724U;

	t17 = (((x69|x70)^x71)^x72);

	if (t17 != 4294966429U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x73 = INT16_MAX;
	volatile uint64_t x74 = 60044423222829LLU;
	uint16_t x75 = 10U;
	static uint8_t x76 = UINT8_MAX;
	uint64_t t18 = 54578LLU;

	t18 = (((x73|x74)^x75)^x76);

	if (t18 != 60044423233290LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x79 = 702849832827874315LL;
	int8_t x80 = 33;
	int64_t t19 = -408768432LL;

	t19 = (((x77|x78)^x79)^x80);

	if (t19 != -702849832693513377LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x81 = UINT64_MAX;
	static uint16_t x82 = UINT16_MAX;
	int16_t x83 = INT16_MAX;
	int64_t x84 = INT64_MIN;
	uint64_t t20 = 1912238LLU;

	t20 = (((x81|x82)^x83)^x84);

	if (t20 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	uint8_t x86 = 0U;
	int8_t x87 = -1;
	static int16_t x88 = 1;
	int32_t t21 = 33775251;

	t21 = (((x85|x86)^x87)^x88);

	if (t21 != 32766) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MAX;
	volatile int8_t x90 = 40;
	volatile int8_t x91 = INT8_MIN;
	int64_t t22 = 76982445437937LL;

	t22 = (((x89|x90)^x91)^x92);

	if (t22 != 127LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	volatile uint64_t x94 = 37823263LLU;
	uint64_t t23 = 3924LLU;

	t23 = (((x93|x94)^x95)^x96);

	if (t23 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	uint32_t x98 = 2629U;
	uint32_t x100 = 0U;
	int64_t t24 = 1LL;

	t24 = (((x97|x98)^x99)^x100);

	if (t24 != -9223372032559811142LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MIN;
	static uint8_t x103 = UINT8_MAX;
	int32_t t25 = -2;

	t25 = (((x101|x102)^x103)^x104);

	if (t25 != 11187890) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 0LL;
	uint16_t x107 = 1277U;
	volatile uint32_t x108 = UINT32_MAX;
	static int64_t t26 = -172LL;

	t26 = (((x105|x106)^x107)^x108);

	if (t26 != 4172264813LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 3491943LLU;
	int8_t x110 = INT8_MAX;
	volatile int32_t x111 = INT32_MIN;
	volatile uint64_t t27 = 115553276112LLU;

	t27 = (((x109|x110)^x111)^x112);

	if (t27 != 18446744071715643577LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	int8_t x115 = 1;
	int16_t x116 = INT16_MIN;
	uint32_t t28 = 55755U;

	t28 = (((x113|x114)^x115)^x116);

	if (t28 != 32766U) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MIN;
	int32_t x119 = INT32_MIN;
	volatile int64_t t29 = 3373418LL;

	t29 = (((x117|x118)^x119)^x120);

	if (t29 != 2147462378LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = -2;
	int8_t x122 = 2;
	int64_t x123 = INT64_MIN;
	uint8_t x124 = UINT8_MAX;
	volatile int64_t t30 = 284825487371886651LL;

	t30 = (((x121|x122)^x123)^x124);

	if (t30 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int8_t x127 = -1;
	uint16_t x128 = 2U;
	volatile int32_t t31 = -153851509;

	t31 = (((x125|x126)^x127)^x128);

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	int16_t x131 = INT16_MIN;
	static uint16_t x132 = UINT16_MAX;
	static volatile int32_t t32 = -1094353;

	t32 = (((x129|x130)^x131)^x132);

	if (t32 != 32895) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x133 = UINT16_MAX;
	static int32_t x134 = INT32_MIN;
	uint8_t x135 = 3U;
	int64_t x136 = INT64_MIN;

	t33 = (((x133|x134)^x135)^x136);

	if (t33 != 9223372034707357692LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 722;
	uint16_t x138 = 7U;
	volatile uint32_t x140 = 43U;
	volatile int64_t t34 = 1339526824850735111LL;

	t34 = (((x137|x138)^x139)^x140);

	if (t34 != 3699341364742589LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = 14;
	uint32_t x143 = 5633U;
	volatile int8_t x144 = -1;
	int64_t t35 = 216714296532042LL;

	t35 = (((x141|x142)^x143)^x144);

	if (t35 != 5633LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 1;
	uint16_t x146 = 9132U;
	volatile int8_t x147 = 14;
	int32_t x148 = 1835;
	volatile int32_t t36 = -451;

	t36 = (((x145|x146)^x147)^x148);

	if (t36 != 9352) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	uint16_t x150 = 10U;
	int8_t x151 = INT8_MAX;
	volatile int32_t x152 = INT32_MIN;
	static volatile int32_t t37 = -895;

	t37 = (((x149|x150)^x151)^x152);

	if (t37 != -2147451008) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x154 = INT32_MIN;
	static int32_t x156 = 4204397;
	int32_t t38 = 24237;

	t38 = (((x153|x154)^x155)^x156);

	if (t38 != -4204397) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MAX;
	static int64_t x159 = -584561042901LL;
	uint16_t x160 = UINT16_MAX;

	t39 = (((x157|x158)^x159)^x160);

	if (t39 != 18446743489544695851LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 19U;
	volatile int64_t x162 = 37119400906210LL;
	static int16_t x164 = -1;
	static int64_t t40 = -9LL;

	t40 = (((x161|x162)^x163)^x164);

	if (t40 != 37119400906230LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 8;
	int32_t x166 = -213;
	static int8_t x167 = -2;
	int32_t x168 = INT32_MAX;
	volatile int32_t t41 = -52;

	t41 = (((x165|x166)^x167)^x168);

	if (t41 != 2147483434) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = UINT32_MAX;
	int8_t x171 = INT8_MIN;
	volatile int8_t x172 = 0;
	volatile uint32_t t42 = 26594005U;

	t42 = (((x169|x170)^x171)^x172);

	if (t42 != 127U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = INT32_MIN;
	int32_t t43 = -2659;

	t43 = (((x173|x174)^x175)^x176);

	if (t43 != 2147469200) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 44988353U;
	int16_t x178 = INT16_MIN;
	volatile int64_t x179 = 970058488628673632LL;
	uint8_t x180 = 1U;
	volatile int64_t t44 = 319LL;

	t44 = (((x177|x178)^x179)^x180);

	if (t44 != 970058490438454176LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x182 = 254293U;
	volatile uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;
	uint32_t t45 = 2030659765U;

	t45 = (((x181|x182)^x183)^x184);

	if (t45 != 4294737664U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MIN;
	volatile uint32_t x186 = 252636411U;
	static int16_t x187 = 2;
	volatile int16_t x188 = -219;
	volatile uint32_t t46 = 299542582U;

	t46 = (((x185|x186)^x187)^x188);

	if (t46 != 5084U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 1024543387303205LLU;
	int32_t x190 = -1;
	int32_t x191 = INT32_MIN;
	volatile int64_t x192 = INT64_MAX;
	volatile uint64_t t47 = 3169990149LLU;

	t47 = (((x189|x190)^x191)^x192);

	if (t47 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	uint64_t x194 = UINT64_MAX;
	int32_t x196 = INT32_MIN;
	uint64_t t48 = 871757199577706LLU;

	t48 = (((x193|x194)^x195)^x196);

	if (t48 != 2147483610LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	volatile int32_t x198 = INT32_MIN;
	volatile int64_t x199 = -1LL;
	int64_t x200 = -1LL;
	volatile int64_t t49 = 1660LL;

	t49 = (((x197|x198)^x199)^x200);

	if (t49 != -2147483648LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = UINT32_MAX;
	uint16_t x203 = 432U;
	int32_t x204 = INT32_MIN;
	volatile uint32_t t50 = 137U;

	t50 = (((x201|x202)^x203)^x204);

	if (t50 != 2147483215U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MAX;
	uint64_t x206 = 108954LLU;
	int32_t x207 = INT32_MIN;
	int16_t x208 = -1;
	static volatile uint64_t t51 = 0LLU;

	t51 = (((x205|x206)^x207)^x208);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	volatile uint64_t x210 = 4543LLU;
	int16_t x211 = -1;
	int16_t x212 = INT16_MIN;
	static uint64_t t52 = 5332287554LLU;

	t52 = (((x209|x210)^x211)^x212);

	if (t52 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x214 = UINT16_MAX;
	int16_t x215 = INT16_MAX;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t53 = -32548;

	t53 = (((x213|x214)^x215)^x216);

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	volatile int64_t x218 = INT64_MIN;
	uint32_t x219 = 2426354U;
	volatile int16_t x220 = -1;
	int64_t t54 = 21LL;

	t54 = (((x217|x218)^x219)^x220);

	if (t54 != 9223372036852349554LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x222 = INT32_MAX;
	static uint8_t x223 = UINT8_MAX;
	static int16_t x224 = INT16_MIN;

	t55 = (((x221|x222)^x223)^x224);

	if (t55 != 32512) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MAX;
	volatile int8_t x226 = 1;
	int32_t x227 = -532307780;
	static int8_t x228 = INT8_MIN;
	volatile int32_t t56 = -5556;

	t56 = (((x225|x226)^x227)^x228);

	if (t56 != 532291779) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	int16_t x230 = INT16_MIN;
	volatile int8_t x231 = INT8_MIN;
	uint16_t x232 = 17U;

	t57 = (((x229|x230)^x231)^x232);

	if (t57 != 110) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	int16_t x235 = INT16_MIN;
	uint16_t x236 = UINT16_MAX;
	volatile uint64_t t58 = 419173717698LLU;

	t58 = (((x233|x234)^x235)^x236);

	if (t58 != 32768LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x238 = 87959178347LLU;
	int64_t x239 = INT64_MAX;
	volatile int64_t x240 = INT64_MIN;
	static volatile uint64_t t59 = 919197874060LLU;

	t59 = (((x237|x238)^x239)^x240);

	if (t59 != 18446743985750282512LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x242 = -13815581;
	int16_t x244 = -290;

	t60 = (((x241|x242)^x243)^x244);

	if (t60 != -2147483331) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	int32_t x246 = -1;
	volatile int16_t x247 = INT16_MIN;
	volatile int32_t x248 = -257905931;
	volatile int32_t t61 = -386;

	t61 = (((x245|x246)^x247)^x248);

	if (t61 != -257895158) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 54U;
	static int16_t x250 = INT16_MIN;
	uint16_t x251 = UINT16_MAX;
	int32_t x252 = -17275;
	volatile int32_t t62 = -2;

	t62 = (((x249|x250)^x251)^x252);

	if (t62 != 49996) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x254 = UINT64_MAX;
	static volatile int8_t x255 = -58;
	static uint32_t x256 = UINT32_MAX;
	volatile uint64_t t63 = 38598115538LLU;

	t63 = (((x253|x254)^x255)^x256);

	if (t63 != 4294967238LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x258 = 714891802U;
	uint16_t x259 = 14U;
	static uint32_t t64 = 392472414U;

	t64 = (((x257|x258)^x259)^x260);

	if (t64 != 4294959648U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = -127102315;
	volatile uint64_t t65 = 172LLU;

	t65 = (((x261|x262)^x263)^x264);

	if (t65 != 12206097204429121825LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = -1467LL;
	int16_t x267 = INT16_MIN;
	int8_t x268 = 29;

	t66 = (((x265|x266)^x267)^x268);

	if (t66 != 31458LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 181926610LLU;
	int64_t x270 = INT64_MAX;
	static int8_t x271 = -1;
	uint64_t t67 = 1818LLU;

	t67 = (((x269|x270)^x271)^x272);

	if (t67 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = 2399;
	int64_t x274 = 392250582LL;
	uint64_t x275 = UINT64_MAX;
	uint64_t t68 = 25731777LLU;

	t68 = (((x273|x274)^x275)^x276);

	if (t68 != 18446744073317305823LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 1;
	static uint8_t x278 = 79U;
	int32_t x279 = 1295;
	static int16_t x280 = INT16_MAX;
	int32_t t69 = 12;

	t69 = (((x277|x278)^x279)^x280);

	if (t69 != 31423) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = -1LL;
	int8_t x282 = INT8_MIN;
	uint8_t x283 = 1U;
	volatile int16_t x284 = 6;
	int64_t t70 = -705LL;

	t70 = (((x281|x282)^x283)^x284);

	if (t70 != -8LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 14441762594763457LLU;
	uint64_t x286 = UINT64_MAX;
	uint64_t x287 = UINT64_MAX;
	static int16_t x288 = 23;
	volatile uint64_t t71 = 38308976LLU;

	t71 = (((x285|x286)^x287)^x288);

	if (t71 != 23LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	static volatile int16_t x290 = INT16_MIN;
	int64_t x291 = -19440909711324789LL;
	volatile uint64_t x292 = 169419137536174LLU;
	volatile uint64_t t72 = 3LLU;

	t72 = (((x289|x290)^x291)^x292);

	if (t72 != 19575097064331557LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MIN;
	int64_t x294 = -1LL;
	static uint8_t x295 = 0U;
	volatile int64_t t73 = -190153342LL;

	t73 = (((x293|x294)^x295)^x296);

	if (t73 != 644738LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	int16_t x298 = -1;
	uint32_t x299 = 1148376031U;
	volatile uint32_t x300 = 6068U;
	static int64_t t74 = 414055226430LL;

	t74 = (((x297|x298)^x299)^x300);

	if (t74 != -1148372076LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int8_t x302 = -1;
	static uint16_t x303 = UINT16_MAX;
	uint8_t x304 = 0U;
	int32_t t75 = -20;

	t75 = (((x301|x302)^x303)^x304);

	if (t75 != -65536) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -1;
	uint8_t x307 = 7U;
	volatile int8_t x308 = -1;
	volatile int64_t t76 = -7024282299287096LL;

	t76 = (((x305|x306)^x307)^x308);

	if (t76 != 7LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = 3U;
	static volatile uint64_t x310 = UINT64_MAX;
	volatile int64_t x311 = -1LL;
	int8_t x312 = 1;
	uint64_t t77 = 3698022311270118833LLU;

	t77 = (((x309|x310)^x311)^x312);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int64_t x314 = INT64_MIN;
	static int32_t x315 = INT32_MIN;
	uint64_t x316 = 56019737LLU;

	t78 = (((x313|x314)^x315)^x316);

	if (t78 != 9223372034763311897LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = 3;
	int8_t x318 = 0;
	static int32_t x320 = 61;
	int32_t t79 = 2834;

	t79 = (((x317|x318)^x319)^x320);

	if (t79 != 65473) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	static int8_t x322 = INT8_MAX;
	volatile int64_t x323 = INT64_MAX;
	static int64_t x324 = 844960639409LL;

	t80 = (((x321|x322)^x323)^x324);

	if (t80 != -9223371191745784271LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x327 = UINT64_MAX;
	static uint64_t x328 = UINT64_MAX;
	volatile uint64_t t81 = 76015406160825129LLU;

	t81 = (((x325|x326)^x327)^x328);

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = UINT32_MAX;
	uint32_t x330 = 46U;
	static int16_t x331 = INT16_MAX;

	t82 = (((x329|x330)^x331)^x332);

	if (t82 != 4294934563U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x334 = 123759LLU;
	uint8_t x335 = 2U;
	int32_t x336 = INT32_MIN;
	uint64_t t83 = 111804781530611LLU;

	t83 = (((x333|x334)^x335)^x336);

	if (t83 != 2147483629LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	uint16_t x338 = 52U;
	static int8_t x339 = -2;
	uint8_t x340 = 81U;
	volatile int32_t t84 = -2;

	t84 = (((x337|x338)^x339)^x340);

	if (t84 != -176) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = 2;
	uint32_t x343 = 66580634U;
	int8_t x344 = INT8_MAX;
	volatile uint32_t t85 = 0U;

	t85 = (((x341|x342)^x343)^x344);

	if (t85 != 66580710U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	static volatile uint16_t x346 = 7451U;
	int64_t x347 = INT64_MIN;
	int16_t x348 = -1;

	t86 = (((x345|x346)^x347)^x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 485416157687518LLU;
	int64_t x350 = -1LL;
	uint32_t x351 = 715U;
	int32_t x352 = INT32_MAX;

	t87 = (((x349|x350)^x351)^x352);

	if (t87 != 18446744071562068683LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = -1;
	volatile int32_t x354 = INT32_MIN;
	uint64_t x355 = 53332LLU;
	volatile uint64_t t88 = 451LLU;

	t88 = (((x353|x354)^x355)^x356);

	if (t88 != 18446744073709498221LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 1756404U;
	static int8_t x359 = INT8_MIN;
	int64_t x360 = -1LL;

	t89 = (((x357|x358)^x359)^x360);

	if (t89 != -4293211008LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MIN;
	volatile int8_t x362 = -1;
	int16_t x363 = INT16_MIN;
	static volatile int64_t t90 = -5111119LL;

	t90 = (((x361|x362)^x363)^x364);

	if (t90 != 1513723308LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = 7792;
	int8_t x367 = 0;
	volatile uint32_t t91 = 10328U;

	t91 = (((x365|x366)^x367)^x368);

	if (t91 != 2147774513U) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x370 = UINT8_MAX;
	static uint32_t x371 = UINT32_MAX;
	static int8_t x372 = -7;

	t92 = (((x369|x370)^x371)^x372);

	if (t92 != 32761U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	int64_t x374 = INT64_MIN;
	uint8_t x375 = 0U;
	volatile int64_t x376 = -1LL;
	static volatile int64_t t93 = -2854LL;

	t93 = (((x373|x374)^x375)^x376);

	if (t93 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -29447653;
	int32_t x378 = -60093511;
	volatile uint32_t x380 = 862U;
	static int64_t t94 = 0LL;

	t94 = (((x377|x378)^x379)^x380);

	if (t94 != 25188122LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	uint32_t x382 = 148652U;
	int8_t x383 = INT8_MAX;
	uint16_t x384 = 114U;
	uint32_t t95 = 1560266U;

	t95 = (((x381|x382)^x383)^x384);

	if (t95 != 163826U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x386 = INT16_MAX;
	volatile int16_t x387 = 5449;
	static int8_t x388 = 3;
	volatile int32_t t96 = -1;

	t96 = (((x385|x386)^x387)^x388);

	if (t96 != 27317) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	int64_t x390 = INT64_MIN;
	int16_t x391 = INT16_MIN;
	static int64_t t97 = 3440329LL;

	t97 = (((x389|x390)^x391)^x392);

	if (t97 != 9223372036680499826LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x395 = -1;
	uint8_t x396 = 7U;
	int32_t t98 = 9350437;

	t98 = (((x393|x394)^x395)^x396);

	if (t98 != -7673) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	int64_t x400 = 121LL;
	static int64_t t99 = 37710LL;

	t99 = (((x397|x398)^x399)^x400);

	if (t99 != 2147483526LL) { NG(); } else { ; }
	
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

