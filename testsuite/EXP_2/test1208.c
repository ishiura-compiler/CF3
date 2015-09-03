#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
static volatile int32_t t2 = -1;
int64_t x15 = INT64_MIN;
uint64_t x16 = 5260476879LLU;
int32_t t4 = -4;
int8_t x23 = INT8_MIN;
static int16_t x26 = INT16_MIN;
int32_t x29 = INT32_MIN;
static int64_t x30 = 749975949LL;
uint64_t x33 = 200791916575246669LLU;
uint64_t t8 = UINT64_MAX;
int64_t x37 = INT64_MAX;
int16_t x38 = INT16_MAX;
int32_t x39 = INT32_MIN;
volatile uint16_t x41 = 8451U;
static int16_t x45 = INT16_MIN;
uint16_t x46 = UINT16_MAX;
static volatile int32_t t11 = -408;
uint32_t x53 = 9555U;
int16_t x64 = INT16_MIN;
int32_t t15 = 16;
int64_t x65 = 222447255215268LL;
int64_t x69 = INT64_MAX;
volatile int16_t x76 = -1;
int32_t t18 = 1593310;
int16_t x79 = INT16_MIN;
static int64_t x81 = INT64_MIN;
int32_t x82 = INT32_MIN;
int32_t x92 = 4102;
uint32_t x95 = 30234722U;
volatile int64_t x97 = INT64_MIN;
static int32_t x102 = -1;
int16_t x106 = -1;
uint64_t x111 = 294279261LLU;
int16_t x112 = -373;
static uint8_t x118 = 7U;
int16_t x121 = INT16_MIN;
int32_t t30 = 325;
uint64_t x128 = 31163686LLU;
int64_t x131 = -1LL;
static volatile int32_t x135 = INT32_MIN;
int32_t x140 = INT32_MIN;
volatile uint8_t x141 = 17U;
int16_t x144 = 0;
uint8_t x145 = 39U;
uint8_t x147 = UINT8_MAX;
int32_t t37 = 36;
volatile int16_t x155 = 1;
int32_t x156 = -1;
int16_t x159 = 252;
static int32_t x163 = INT32_MIN;
volatile int16_t x168 = INT16_MAX;
volatile uint16_t x173 = UINT16_MAX;
int64_t x176 = -1LL;
volatile int32_t x178 = INT32_MIN;
uint8_t x179 = 68U;
volatile int32_t x181 = INT32_MAX;
int32_t x188 = -1;
int64_t t47 = 13771349LL;
int32_t x197 = -1;
uint32_t x203 = 1782746576U;
int32_t x204 = 36387;
uint8_t x207 = 1U;
int64_t t51 = -65309LL;
volatile uint64_t x211 = UINT64_MAX;
volatile int32_t x213 = 885;
uint64_t t53 = UINT64_MAX;
uint8_t x217 = UINT8_MAX;
int8_t x218 = INT8_MAX;
static int64_t x220 = -90446972076LL;
uint32_t x221 = UINT32_MAX;
int8_t x229 = -1;
uint8_t x231 = 4U;
static int8_t x234 = -1;
static uint64_t x241 = 249LLU;
uint64_t t60 = 865LLU;
int32_t x248 = -234956571;
static volatile int8_t x252 = -1;
volatile uint64_t t63 = UINT64_MAX;
int64_t x260 = -59LL;
int16_t x264 = -1;
int32_t x267 = INT32_MIN;
volatile int32_t t66 = -11951;
volatile int32_t x279 = -3360;
volatile int16_t x285 = 213;
static volatile int8_t x286 = INT8_MIN;
int64_t x288 = 407292122236945879LL;
volatile int64_t x290 = 380424LL;
int8_t x297 = INT8_MIN;
int16_t x299 = -1;
uint32_t x301 = 1U;
uint64_t x308 = 989884LLU;
uint32_t x311 = 5816U;
uint32_t x314 = 32249419U;
static int64_t t78 = 7722LL;
int32_t t79 = 1;
int8_t x321 = INT8_MIN;
static uint16_t x323 = 2U;
int32_t x325 = INT32_MAX;
static volatile int16_t x331 = -9761;
int32_t x332 = INT32_MIN;
uint32_t x335 = 6505476U;
static int32_t x338 = -19;
static int64_t x342 = -37704497923297338LL;
uint16_t x345 = 528U;
volatile int64_t x348 = 6310121LL;
uint8_t x351 = UINT8_MAX;
static int64_t x353 = -2726LL;
int32_t x358 = -1;
uint8_t x363 = UINT8_MAX;
static uint16_t x364 = 244U;
int8_t x369 = 0;
int32_t x370 = INT32_MIN;
int32_t x373 = -1;
volatile uint8_t x376 = UINT8_MAX;
uint64_t x378 = UINT64_MAX;
static volatile int32_t t94 = 31912;
int8_t x384 = -15;
int64_t t95 = -4343504149707LL;
int8_t x385 = -2;
int16_t x386 = -1;
int32_t x387 = INT32_MIN;
uint32_t x392 = 11U;
int16_t x395 = INT16_MAX;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int64_t x2 = INT64_MIN;
	static int8_t x4 = -48;
	volatile int32_t t0 = -106;

	t0 = ((x1-(x2==x3))|x4);

	if (t0 != -48) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -4;
	int16_t x6 = INT16_MAX;
	int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MIN;
	static int32_t t1 = -1744;

	t1 = ((x5-(x6==x7))|x8);

	if (t1 != -4) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x10 = UINT16_MAX;
	uint64_t x11 = 11380811780597LLU;
	int8_t x12 = 29;

	t2 = ((x9-(x10==x11))|x12);

	if (t2 != -99) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -4LL;
	int64_t x14 = INT64_MIN;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = ((x13-(x14==x15))|x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -7;
	uint8_t x18 = 14U;
	int32_t x19 = 0;
	volatile int32_t x20 = INT32_MIN;

	t4 = ((x17-(x18==x19))|x20);

	if (t4 != -7) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MAX;
	int8_t x22 = 31;
	int8_t x24 = INT8_MIN;
	static int32_t t5 = -1852586;

	t5 = ((x21-(x22==x23))|x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	uint64_t x27 = 180529LLU;
	volatile int8_t x28 = INT8_MAX;
	volatile int64_t t6 = INT64_MAX;

	t6 = ((x25-(x26==x27))|x28);

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x31 = 231383463416LL;
	static uint16_t x32 = 3934U;
	volatile int32_t t7 = -82;

	t7 = ((x29-(x30==x31))|x32);

	if (t7 != -2147479714) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = INT16_MIN;
	volatile int16_t x35 = INT16_MIN;
	static int32_t x36 = -1;

	t8 = ((x33-(x34==x35))|x36);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x40 = 826875672U;
	volatile int64_t t9 = INT64_MAX;

	t9 = ((x37-(x38==x39))|x40);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x42 = UINT64_MAX;
	int8_t x43 = -46;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x41-(x42==x43))|x44);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x47 = -162;
	int32_t x48 = INT32_MIN;

	t11 = ((x45-(x46==x47))|x48);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	static int32_t x50 = INT32_MIN;
	uint64_t x51 = 10532029142LLU;
	int32_t x52 = INT32_MIN;
	int32_t t12 = 731533532;

	t12 = ((x49-(x50==x51))|x52);

	if (t12 != -2147450881) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x54 = -1;
	volatile uint8_t x55 = 3U;
	static int16_t x56 = -1;
	volatile uint32_t t13 = UINT32_MAX;

	t13 = ((x53-(x54==x55))|x56);

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -5983;
	uint64_t x58 = UINT64_MAX;
	volatile int32_t x59 = INT32_MAX;
	volatile int64_t x60 = 27081666655LL;
	int64_t t14 = -89488LL;

	t14 = ((x57-(x58==x59))|x60);

	if (t14 != -1793LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 2;
	volatile int8_t x62 = INT8_MAX;
	int64_t x63 = -1LL;

	t15 = ((x61-(x62==x63))|x64);

	if (t15 != -32766) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 28U;
	uint64_t x67 = UINT64_MAX;
	volatile uint8_t x68 = 43U;
	volatile int64_t t16 = 15591LL;

	t16 = ((x65-(x66==x67))|x68);

	if (t16 != 222447255215279LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = 2U;
	uint64_t x71 = 3289350217582LLU;
	uint64_t x72 = 2467LLU;
	static volatile uint64_t t17 = 55555743953914355LLU;

	t17 = ((x69-(x70==x71))|x72);

	if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1;
	uint64_t x74 = 398697020050064LLU;
	int32_t x75 = 142500388;

	t18 = ((x73-(x74==x75))|x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 14621;
	uint64_t x78 = 53258LLU;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 3;

	t19 = ((x77-(x78==x79))|x80);

	if (t19 != -18147) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x83 = -1;
	int16_t x84 = 254;
	volatile int64_t t20 = -17456LL;

	t20 = ((x81-(x82==x83))|x84);

	if (t20 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = -1LL;
	uint16_t x87 = 6329U;
	uint16_t x88 = 6U;
	static volatile int32_t t21 = -511243154;

	t21 = ((x85-(x86==x87))|x88);

	if (t21 != -122) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	uint8_t x90 = UINT8_MAX;
	int16_t x91 = -1491;
	int32_t t22 = 21;

	t22 = ((x89-(x90==x91))|x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 0U;
	volatile int8_t x94 = INT8_MIN;
	int32_t x96 = INT32_MAX;
	volatile int32_t t23 = INT32_MAX;

	t23 = ((x93-(x94==x95))|x96);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x98 = INT16_MAX;
	static uint16_t x99 = 2547U;
	int8_t x100 = -1;
	int64_t t24 = -99018703735LL;

	t24 = ((x97-(x98==x99))|x100);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	volatile int64_t x103 = INT64_MIN;
	uint64_t x104 = 1LLU;
	volatile uint64_t t25 = 52034766LLU;

	t25 = ((x101-(x102==x103))|x104);

	if (t25 != 2147483647LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 217681LLU;
	uint64_t x107 = UINT64_MAX;
	uint32_t x108 = UINT32_MAX;
	uint64_t t26 = 3627575LLU;

	t26 = ((x105-(x106==x107))|x108);

	if (t26 != 4294967295LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -114LL;
	volatile int32_t x110 = INT32_MAX;
	volatile int64_t t27 = 410513LL;

	t27 = ((x109-(x110==x111))|x112);

	if (t27 != -113LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 46796666138LLU;
	int8_t x114 = INT8_MIN;
	int64_t x115 = 1002695068064LL;
	uint64_t x116 = UINT64_MAX;
	uint64_t t28 = UINT64_MAX;

	t28 = ((x113-(x114==x115))|x116);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = -2LL;
	int16_t x119 = -24;
	static volatile uint8_t x120 = UINT8_MAX;
	static int64_t t29 = 151LL;

	t29 = ((x117-(x118==x119))|x120);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	int16_t x123 = -1;
	static int8_t x124 = INT8_MIN;

	t30 = ((x121-(x122==x123))|x124);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int32_t x126 = INT32_MIN;
	int16_t x127 = -173;
	uint64_t t31 = 183486598452538131LLU;

	t31 = ((x125-(x126==x127))|x128);

	if (t31 != 31195135LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MIN;
	int32_t x130 = -217;
	uint16_t x132 = 13269U;
	volatile int32_t t32 = -19;

	t32 = ((x129-(x130==x131))|x132);

	if (t32 != -43) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	uint32_t x134 = UINT32_MAX;
	uint16_t x136 = UINT16_MAX;
	static int32_t t33 = -9;

	t33 = ((x133-(x134==x135))|x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 1U;
	int16_t x138 = -6277;
	uint64_t x139 = 2960351490587585299LLU;
	volatile int32_t t34 = 1358;

	t34 = ((x137-(x138==x139))|x140);

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = -1LL;
	uint64_t x143 = 11428LLU;
	volatile int32_t t35 = 7021943;

	t35 = ((x141-(x142==x143))|x144);

	if (t35 != 17) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = -1;
	static int64_t x148 = INT64_MIN;
	int64_t t36 = 767354301787576LL;

	t36 = ((x145-(x146==x147))|x148);

	if (t36 != -9223372036854775769LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	volatile uint64_t x150 = 928937283053667014LLU;
	int32_t x151 = INT32_MAX;
	static volatile int16_t x152 = -1;

	t37 = ((x149-(x150==x151))|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -26;
	int16_t x154 = -592;
	volatile int32_t t38 = -35804;

	t38 = ((x153-(x154==x155))|x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 3797380612147LL;
	static uint64_t x158 = 15106762LLU;
	volatile uint16_t x160 = UINT16_MAX;
	int64_t t39 = -29LL;

	t39 = ((x157-(x158==x159))|x160);

	if (t39 != 3797380628479LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	int8_t x162 = -9;
	uint32_t x164 = 1459916U;
	int64_t t40 = -519LL;

	t40 = ((x161-(x162==x163))|x164);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x165 = 998U;
	uint64_t x166 = UINT64_MAX;
	int64_t x167 = -1LL;
	static int32_t t41 = 2;

	t41 = ((x165-(x166==x167))|x168);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 15U;
	volatile int16_t x170 = 281;
	static int16_t x171 = -13424;
	int8_t x172 = INT8_MAX;
	volatile uint32_t t42 = 1U;

	t42 = ((x169-(x170==x171))|x172);

	if (t42 != 127U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x174 = -1;
	int16_t x175 = INT16_MIN;
	int64_t t43 = -1572480946711586LL;

	t43 = ((x173-(x174==x175))|x176);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = 5998U;
	volatile int8_t x180 = INT8_MIN;
	uint32_t t44 = 6980U;

	t44 = ((x177-(x178==x179))|x180);

	if (t44 != 4294967278U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x182 = -3238LL;
	int16_t x183 = 4131;
	uint16_t x184 = UINT16_MAX;
	int32_t t45 = INT32_MAX;

	t45 = ((x181-(x182==x183))|x184);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int32_t x186 = INT32_MAX;
	int16_t x187 = 50;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = ((x185-(x186==x187))|x188);

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = 15;
	volatile uint16_t x190 = 845U;
	uint8_t x191 = 4U;
	static int64_t x192 = INT64_MIN;

	t47 = ((x189-(x190==x191))|x192);

	if (t47 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = INT8_MIN;
	volatile uint8_t x194 = 1U;
	int8_t x195 = INT8_MAX;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = -72678;

	t48 = ((x193-(x194==x195))|x196);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = -13377LL;
	int32_t x199 = -1;
	int64_t x200 = INT64_MAX;
	int64_t t49 = -10463063579319LL;

	t49 = ((x197-(x198==x199))|x200);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = -64361314828488824LL;
	volatile uint64_t x202 = UINT64_MAX;
	volatile int64_t t50 = -1323LL;

	t50 = ((x201-(x202==x203))|x204);

	if (t50 != -64361314828488789LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -31625116868LL;
	int8_t x206 = INT8_MIN;
	uint8_t x208 = 63U;

	t51 = ((x205-(x206==x207))|x208);

	if (t51 != -31625116865LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = INT64_MIN;
	volatile uint32_t x210 = UINT32_MAX;
	static int8_t x212 = 15;
	int64_t t52 = -26069740483519LL;

	t52 = ((x209-(x210==x211))|x212);

	if (t52 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x214 = 2;
	volatile uint16_t x215 = 2U;
	uint64_t x216 = UINT64_MAX;

	t53 = ((x213-(x214==x215))|x216);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x219 = 0;
	volatile int64_t t54 = -584879989235068145LL;

	t54 = ((x217-(x218==x219))|x220);

	if (t54 != -90446971905LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x222 = -1;
	uint16_t x223 = 0U;
	uint64_t x224 = 603305436LLU;
	uint64_t t55 = 323753939230133556LLU;

	t55 = ((x221-(x222==x223))|x224);

	if (t55 != 4294967295LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = INT64_MAX;
	int64_t x226 = -1LL;
	int8_t x227 = INT8_MIN;
	int16_t x228 = -1;
	volatile int64_t t56 = -48263813LL;

	t56 = ((x225-(x226==x227))|x228);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x230 = 10U;
	int8_t x232 = -1;
	volatile int32_t t57 = 4770;

	t57 = ((x229-(x230==x231))|x232);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MIN;
	static int8_t x235 = INT8_MAX;
	int16_t x236 = 7541;
	volatile int32_t t58 = 98;

	t58 = ((x233-(x234==x235))|x236);

	if (t58 != -11) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x237 = 54U;
	int8_t x238 = INT8_MIN;
	volatile int64_t x239 = -1LL;
	int64_t x240 = INT64_MIN;
	int64_t t59 = 255687998107LL;

	t59 = ((x237-(x238==x239))|x240);

	if (t59 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = INT64_MIN;
	uint16_t x243 = UINT16_MAX;
	volatile int32_t x244 = INT32_MIN;

	t60 = ((x241-(x242==x243))|x244);

	if (t60 != 18446744071562068217LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MIN;
	int32_t t61 = -96815303;

	t61 = ((x245-(x246==x247))|x248);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	int32_t x250 = INT32_MAX;
	int32_t x251 = -300910925;
	static int32_t t62 = 942669752;

	t62 = ((x249-(x250==x251))|x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	int64_t x254 = INT64_MIN;
	static uint64_t x255 = 7LLU;
	uint64_t x256 = 126321LLU;

	t63 = ((x253-(x254==x255))|x256);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 60;
	int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MIN;
	int64_t t64 = 3LL;

	t64 = ((x257-(x258==x259))|x260);

	if (t64 != -3LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 149;
	int16_t x262 = INT16_MIN;
	uint32_t x263 = UINT32_MAX;
	volatile int32_t t65 = 242448;

	t65 = ((x261-(x262==x263))|x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	volatile int16_t x266 = INT16_MIN;
	int8_t x268 = -3;

	t66 = ((x265-(x266==x267))|x268);

	if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 3406U;
	int64_t x270 = INT64_MIN;
	uint32_t x271 = 828713U;
	uint16_t x272 = 6048U;
	static volatile uint32_t t67 = 491U;

	t67 = ((x269-(x270==x271))|x272);

	if (t67 != 8174U) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	static int16_t x274 = INT16_MIN;
	volatile int64_t x275 = INT64_MIN;
	int32_t x276 = -1;
	int64_t t68 = -111968354089196LL;

	t68 = ((x273-(x274==x275))|x276);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 6447;
	uint8_t x278 = 101U;
	int64_t x280 = 11681LL;
	int64_t t69 = -6432376672LL;

	t69 = ((x277-(x278==x279))|x280);

	if (t69 != 15791LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = 4U;
	int64_t x282 = -955811076LL;
	volatile int16_t x283 = INT16_MIN;
	static uint64_t x284 = 640012418033442LLU;
	static volatile uint64_t t70 = 1445991109754083740LLU;

	t70 = ((x281-(x282==x283))|x284);

	if (t70 != 640012418033446LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x287 = 1U;
	int64_t t71 = -367793738121119110LL;

	t71 = ((x285-(x286==x287))|x288);

	if (t71 != 407292122236945879LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = 13U;
	int8_t x291 = INT8_MIN;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t72 = -45;

	t72 = ((x289-(x290==x291))|x292);

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = 13U;
	uint32_t x294 = UINT32_MAX;
	volatile int64_t x295 = INT64_MIN;
	volatile uint8_t x296 = 3U;
	int32_t t73 = 59272;

	t73 = ((x293-(x294==x295))|x296);

	if (t73 != 15) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x298 = 23U;
	int16_t x300 = INT16_MAX;
	volatile int32_t t74 = 8296;

	t74 = ((x297-(x298==x299))|x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = INT64_MIN;
	static int32_t x303 = -1;
	int64_t x304 = INT64_MAX;
	volatile int64_t t75 = INT64_MAX;

	t75 = ((x301-(x302==x303))|x304);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = 6;
	uint8_t x307 = UINT8_MAX;
	volatile uint64_t t76 = 126537535LLU;

	t76 = ((x305-(x306==x307))|x308);

	if (t76 != 18446744073709525692LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = -341;
	int8_t x310 = INT8_MIN;
	int32_t x312 = -3;
	volatile int32_t t77 = -25333383;

	t77 = ((x309-(x310==x311))|x312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 3U;
	int16_t x315 = INT16_MIN;
	int64_t x316 = -1LL;

	t78 = ((x313-(x314==x315))|x316);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	uint64_t x318 = 66974839647293LLU;
	int8_t x319 = -15;
	int8_t x320 = -1;

	t79 = ((x317-(x318==x319))|x320);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = -1;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = 4;

	t80 = ((x321-(x322==x323))|x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = 1U;
	int16_t x327 = INT16_MIN;
	int8_t x328 = -60;
	int32_t t81 = 797930;

	t81 = ((x325-(x326==x327))|x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = 8;
	int32_t x330 = -1;
	int32_t t82 = 194;

	t82 = ((x329-(x330==x331))|x332);

	if (t82 != -2147483640) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MAX;
	int16_t x336 = INT16_MIN;
	int32_t t83 = 84;

	t83 = ((x333-(x334==x335))|x336);

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	uint32_t x339 = 56U;
	static uint64_t x340 = UINT64_MAX;
	static volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x337-(x338==x339))|x340);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int8_t x343 = INT8_MIN;
	int32_t x344 = INT32_MAX;
	static int32_t t85 = -7;

	t85 = ((x341-(x342==x343))|x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = INT32_MAX;
	int8_t x347 = INT8_MIN;
	int64_t t86 = 457LL;

	t86 = ((x345-(x346==x347))|x348);

	if (t86 != 6310649LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x349 = 1977U;
	int16_t x350 = 21;
	volatile int64_t x352 = INT64_MIN;
	int64_t t87 = -33479537943170LL;

	t87 = ((x349-(x350==x351))|x352);

	if (t87 != -9223372036854773831LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x354 = -1;
	volatile int32_t x355 = -1;
	int64_t x356 = 1660228438LL;
	int64_t t88 = -45856795784LL;

	t88 = ((x353-(x354==x355))|x356);

	if (t88 != -2209LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 70U;
	volatile int64_t x359 = 912731LL;
	static int16_t x360 = 16014;
	uint32_t t89 = 231012214U;

	t89 = ((x357-(x358==x359))|x360);

	if (t89 != 16078U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	int64_t x362 = 1088761LL;
	volatile int64_t t90 = -89045200004LL;

	t90 = ((x361-(x362==x363))|x364);

	if (t90 != -9223372036854775564LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 203;
	uint64_t x366 = 153746902LLU;
	int8_t x367 = INT8_MAX;
	uint32_t x368 = 2U;
	uint32_t t91 = 14841987U;

	t91 = ((x365-(x366==x367))|x368);

	if (t91 != 203U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x371 = 239947U;
	int8_t x372 = INT8_MIN;
	int32_t t92 = -1054854799;

	t92 = ((x369-(x370==x371))|x372);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x374 = 191331LLU;
	int8_t x375 = -1;
	int32_t t93 = -18826147;

	t93 = ((x373-(x374==x375))|x376);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x377 = UINT8_MAX;
	uint32_t x379 = UINT32_MAX;
	int8_t x380 = -1;

	t94 = ((x377-(x378==x379))|x380);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = -6267LL;
	int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MAX;

	t95 = ((x381-(x382==x383))|x384);

	if (t95 != -11LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x388 = 2514U;
	static volatile int32_t t96 = -380217;

	t96 = ((x385-(x386==x387))|x388);

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = 1663961705036447LLU;
	uint16_t x391 = UINT16_MAX;
	volatile uint32_t t97 = 4707U;

	t97 = ((x389-(x390==x391))|x392);

	if (t97 != 2147483659U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 2484;
	int32_t x394 = -1;
	static volatile int16_t x396 = INT16_MIN;
	volatile int32_t t98 = 3014761;

	t98 = ((x393-(x394==x395))|x396);

	if (t98 != -30284) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x397 = 10U;
	int16_t x398 = -1;
	static volatile int8_t x399 = INT8_MIN;
	uint16_t x400 = 7368U;
	volatile int32_t t99 = 6;

	t99 = ((x397-(x398==x399))|x400);

	if (t99 != 7370) { NG(); } else { ; }
	
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

