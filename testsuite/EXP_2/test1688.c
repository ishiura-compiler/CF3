#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = INT32_MAX;
volatile uint64_t t2 = 147LLU;
static int64_t x16 = -1LL;
static uint64_t x29 = UINT64_MAX;
static uint16_t x32 = UINT16_MAX;
uint16_t x33 = 1959U;
int64_t x42 = 4504397373590LL;
volatile uint32_t x48 = UINT32_MAX;
int64_t x51 = INT64_MIN;
uint64_t t12 = 40279795310087038LLU;
volatile int64_t x54 = -7032LL;
uint64_t x55 = UINT64_MAX;
volatile int16_t x58 = -1;
uint32_t x60 = 418400077U;
int32_t t16 = -27025;
static int8_t x72 = -40;
static int32_t x75 = -1;
int16_t x79 = 111;
uint32_t x84 = 756565U;
int16_t x85 = -1;
static int16_t x93 = 2;
volatile uint64_t x97 = 3256622043779955LLU;
static uint64_t t24 = 474261130276LLU;
int16_t x107 = INT16_MAX;
static uint64_t x108 = UINT64_MAX;
volatile int32_t x110 = INT32_MAX;
int64_t x114 = -354753LL;
int32_t x122 = INT32_MIN;
int64_t x124 = INT64_MIN;
static int64_t t30 = -242222768768113LL;
int16_t x128 = -1;
uint64_t x129 = 1263698293730LLU;
int8_t x135 = 31;
int16_t x136 = -1;
static volatile int32_t x138 = -1;
uint64_t x140 = UINT64_MAX;
uint32_t x143 = UINT32_MAX;
volatile int64_t t35 = INT64_MIN;
volatile int64_t x148 = INT64_MIN;
volatile int64_t t36 = 252419428409294LL;
static uint8_t x149 = 84U;
static int8_t x151 = 56;
uint64_t x165 = 723076669049LLU;
static int8_t x174 = -4;
int64_t x177 = -338LL;
int16_t x183 = INT16_MIN;
int64_t x184 = INT64_MIN;
volatile int64_t x187 = INT64_MIN;
int32_t x190 = INT32_MIN;
int16_t x199 = 1;
int16_t x200 = 268;
int32_t t49 = -36695609;
uint8_t x202 = 2U;
int16_t x206 = -1;
uint64_t x213 = 2LLU;
int32_t x214 = -1;
static volatile int32_t x216 = INT32_MIN;
uint8_t x220 = 31U;
uint32_t x230 = 465U;
volatile int64_t t60 = 5300597735164LL;
uint32_t x246 = 4541U;
volatile uint64_t x248 = UINT64_MAX;
int8_t x253 = -1;
volatile int64_t x260 = -283559907143590225LL;
static int8_t x263 = -1;
int64_t x266 = -2259219278LL;
static volatile int32_t t66 = 1;
int16_t x273 = 76;
int16_t x289 = INT16_MAX;
volatile int32_t t72 = 0;
static int64_t x296 = -1LL;
int64_t t73 = -60LL;
int16_t x297 = INT16_MIN;
int16_t x300 = -1;
volatile uint16_t x307 = 11193U;
static volatile int8_t x308 = INT8_MAX;
int32_t t77 = INT32_MIN;
static uint16_t x314 = UINT16_MAX;
uint16_t x319 = UINT16_MAX;
volatile int64_t x321 = INT64_MIN;
int32_t x327 = -100708684;
volatile int32_t x329 = -762950;
static int32_t x331 = 304424791;
int16_t x333 = 0;
uint32_t x335 = 908399U;
volatile uint64_t t83 = 68756736351732905LLU;
int8_t x345 = -1;
int8_t x348 = INT8_MIN;
static int64_t x349 = -33769482844LL;
uint64_t x354 = 964430241084183LLU;
int16_t x356 = -1;
static int64_t t88 = INT64_MIN;
uint64_t x363 = UINT64_MAX;
int32_t t90 = 0;
static uint16_t x365 = UINT16_MAX;
uint8_t x366 = 14U;
int32_t x371 = INT32_MIN;
int8_t x372 = INT8_MIN;
int64_t x375 = INT64_MIN;
static int64_t x376 = -1LL;
int64_t t93 = 18281304866658784LL;
uint32_t x377 = 6199640U;
uint8_t x382 = 1U;
static int16_t x386 = INT16_MAX;
int64_t x391 = -49536428836LL;
volatile uint64_t t98 = 6290079878998940207LLU;
int8_t x400 = -1;


void f0(void) {
	static int8_t x1 = -1;
	int32_t x2 = -1;
	int16_t x3 = -219;
	static uint64_t x4 = UINT64_MAX;
	uint64_t t0 = UINT64_MAX;

	t0 = ((x1^(x2<=x3))&x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	volatile int8_t x7 = INT8_MIN;
	static uint8_t x8 = 8U;
	static int32_t t1 = 0;

	t1 = ((x5^(x6<=x7))&x8);

	if (t1 != 8) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 199537378169909118LLU;
	uint8_t x10 = 24U;
	int32_t x11 = INT32_MAX;
	int8_t x12 = INT8_MIN;

	t2 = ((x9^(x10<=x11))&x12);

	if (t2 != 199537378169908992LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint64_t x14 = UINT64_MAX;
	uint32_t x15 = 3U;
	volatile int64_t t3 = 14533407183045459LL;

	t3 = ((x13^(x14<=x15))&x16);

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	static volatile int32_t x18 = -1;
	static uint16_t x19 = UINT16_MAX;
	uint8_t x20 = 119U;
	static volatile int64_t t4 = -60986606LL;

	t4 = ((x17^(x18<=x19))&x20);

	if (t4 != 118LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	volatile int16_t x22 = -2237;
	int64_t x23 = -739LL;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 0;

	t5 = ((x21^(x22<=x23))&x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static int16_t x26 = 1;
	static volatile int8_t x27 = INT8_MAX;
	static volatile uint8_t x28 = 127U;
	static volatile int32_t t6 = 14333477;

	t6 = ((x25^(x26<=x27))&x28);

	if (t6 != 126) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	int16_t x31 = -260;
	static volatile uint64_t t7 = 403663967939LLU;

	t7 = ((x29^(x30<=x31))&x32);

	if (t7 != 65534LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = 30922U;
	uint32_t x35 = 1617028728U;
	int8_t x36 = -1;
	int32_t t8 = -3126;

	t8 = ((x33^(x34<=x35))&x36);

	if (t8 != 1958) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -7512071LL;
	uint16_t x38 = UINT16_MAX;
	int8_t x39 = -5;
	volatile int64_t x40 = INT64_MIN;
	static int64_t t9 = INT64_MIN;

	t9 = ((x37^(x38<=x39))&x40);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 20;
	static int64_t x43 = 3545LL;
	volatile uint8_t x44 = UINT8_MAX;
	static int32_t t10 = 53;

	t10 = ((x41^(x42<=x43))&x44);

	if (t10 != 20) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	static int32_t x46 = INT32_MIN;
	volatile uint8_t x47 = 107U;
	uint32_t t11 = 77354U;

	t11 = ((x45^(x46<=x47))&x48);

	if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 1530181;
	uint16_t x50 = UINT16_MAX;
	uint64_t x52 = UINT64_MAX;

	t12 = ((x49^(x50<=x51))&x52);

	if (t12 != 1530181LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	volatile int16_t x56 = INT16_MIN;
	uint64_t t13 = 106151445529194697LLU;

	t13 = ((x53^(x54<=x55))&x56);

	if (t13 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -209171762279LL;
	uint64_t x59 = 27LLU;
	volatile int64_t t14 = 6850770337387389LL;

	t14 = ((x57^(x58<=x59))&x60);

	if (t14 != 140509961LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	int16_t x62 = INT16_MIN;
	int8_t x63 = -1;
	int16_t x64 = 1;
	uint64_t t15 = 427123178778526LLU;

	t15 = ((x61^(x62<=x63))&x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = -5398277;
	static uint8_t x66 = UINT8_MAX;
	int32_t x67 = INT32_MIN;
	volatile int8_t x68 = INT8_MIN;

	t16 = ((x65^(x66<=x67))&x68);

	if (t16 != -5398400) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 115731LLU;
	static int64_t x70 = INT64_MIN;
	uint64_t x71 = 10566519599150LLU;
	volatile uint64_t t17 = 470386139508LLU;

	t17 = ((x69^(x70<=x71))&x72);

	if (t17 != 115728LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	static int8_t x74 = 0;
	int32_t x76 = -1;
	volatile int32_t t18 = 15265;

	t18 = ((x73^(x74<=x75))&x76);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 237;
	static int32_t x78 = -1;
	uint8_t x80 = UINT8_MAX;
	static int32_t t19 = -157219;

	t19 = ((x77^(x78<=x79))&x80);

	if (t19 != 236) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MIN;
	volatile uint16_t x83 = 10U;
	volatile int64_t t20 = 1763821LL;

	t20 = ((x81^(x82<=x83))&x84);

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = UINT32_MAX;
	int64_t x87 = -1LL;
	uint32_t x88 = UINT32_MAX;
	uint32_t t21 = UINT32_MAX;

	t21 = ((x85^(x86<=x87))&x88);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -91;
	uint32_t x90 = UINT32_MAX;
	int16_t x91 = 1029;
	volatile uint64_t x92 = 1598801561444272722LLU;
	static uint64_t t22 = 8633011329604LLU;

	t22 = ((x89^(x90<=x91))&x92);

	if (t22 != 1598801561444272640LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MIN;
	static volatile uint32_t x95 = 1614508854U;
	volatile uint64_t x96 = 1812203500LLU;
	uint64_t t23 = 748LLU;

	t23 = ((x93^(x94<=x95))&x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = INT8_MIN;
	static volatile int8_t x99 = -1;
	static volatile int8_t x100 = INT8_MIN;

	t24 = ((x97^(x98<=x99))&x100);

	if (t24 != 3256622043779840LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 31U;
	int16_t x102 = 1;
	uint16_t x103 = 7678U;
	int64_t x104 = INT64_MIN;
	int64_t t25 = 172332LL;

	t25 = ((x101^(x102<=x103))&x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int8_t x106 = INT8_MAX;
	uint64_t t26 = 1841612790159571LLU;

	t26 = ((x105^(x106<=x107))&x108);

	if (t26 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	int64_t x111 = -1LL;
	int64_t x112 = INT64_MIN;
	int64_t t27 = -2742649LL;

	t27 = ((x109^(x110<=x111))&x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 1761LLU;
	volatile int8_t x115 = INT8_MAX;
	static volatile int64_t x116 = -723139LL;
	uint64_t t28 = 11642656941266097LLU;

	t28 = ((x113^(x114<=x115))&x116);

	if (t28 != 1568LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 754LLU;
	int64_t x118 = INT64_MIN;
	volatile uint64_t x119 = 227670441LLU;
	int64_t x120 = INT64_MIN;
	volatile uint64_t t29 = 109636075099325LLU;

	t29 = ((x117^(x118<=x119))&x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	uint16_t x123 = 135U;

	t30 = ((x121^(x122<=x123))&x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 274518717451298LL;
	uint8_t x126 = UINT8_MAX;
	volatile uint32_t x127 = 289043U;
	static int64_t t31 = -393531LL;

	t31 = ((x125^(x126<=x127))&x128);

	if (t31 != 274518717451299LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MIN;
	static int64_t x132 = INT64_MIN;
	volatile uint64_t t32 = 353372231669LLU;

	t32 = ((x129^(x130<=x131))&x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	int64_t x134 = -1LL;
	volatile uint32_t t33 = 32U;

	t33 = ((x133^(x134<=x135))&x136);

	if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	uint8_t x139 = 4U;
	static volatile uint64_t t34 = 30833515128LLU;

	t34 = ((x137^(x138<=x139))&x140);

	if (t34 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	uint16_t x142 = 67U;
	int8_t x144 = -40;

	t35 = ((x141^(x142<=x143))&x144);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = INT32_MAX;
	int32_t x146 = INT32_MIN;
	uint8_t x147 = 41U;

	t36 = ((x145^(x146<=x147))&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x150 = INT32_MAX;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -148372;

	t37 = ((x149^(x150<=x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -87789498LL;
	volatile uint8_t x154 = 1U;
	int8_t x155 = 2;
	static int32_t x156 = INT32_MIN;
	int64_t t38 = -354913969414079LL;

	t38 = ((x153^(x154<=x155))&x156);

	if (t38 != -2147483648LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 214;
	volatile uint16_t x158 = UINT16_MAX;
	volatile uint32_t x159 = 9411519U;
	int8_t x160 = 0;
	int32_t t39 = 693819;

	t39 = ((x157^(x158<=x159))&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 0U;
	uint16_t x162 = 213U;
	uint64_t x163 = UINT64_MAX;
	static volatile int64_t x164 = INT64_MIN;
	int64_t t40 = 997796442638658LL;

	t40 = ((x161^(x162<=x163))&x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = INT32_MAX;
	int16_t x167 = INT16_MIN;
	int8_t x168 = INT8_MAX;
	volatile uint64_t t41 = 14583175LLU;

	t41 = ((x165^(x166<=x167))&x168);

	if (t41 != 121LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 2U;
	uint8_t x170 = 19U;
	int64_t x171 = INT64_MIN;
	uint8_t x172 = 7U;
	int32_t t42 = -343410;

	t42 = ((x169^(x170<=x171))&x172);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MIN;
	volatile int16_t x175 = INT16_MAX;
	static int32_t x176 = 326545951;
	int32_t t43 = -12;

	t43 = ((x173^(x174<=x175))&x176);

	if (t43 != 326545921) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -1;
	int16_t x179 = INT16_MIN;
	uint16_t x180 = UINT16_MAX;
	int64_t t44 = -587058LL;

	t44 = ((x177^(x178<=x179))&x180);

	if (t44 != 65198LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -5384960167532335LL;
	static int8_t x182 = INT8_MAX;
	volatile int64_t t45 = INT64_MIN;

	t45 = ((x181^(x182<=x183))&x184);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	static int8_t x186 = -1;
	volatile int64_t x188 = INT64_MAX;
	int64_t t46 = 14LL;

	t46 = ((x185^(x186<=x187))&x188);

	if (t46 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	uint64_t x191 = UINT64_MAX;
	static uint32_t x192 = 1731U;
	static int64_t t47 = 5295705021LL;

	t47 = ((x189^(x190<=x191))&x192);

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = -1;
	uint16_t x194 = 5U;
	int64_t x195 = INT64_MIN;
	volatile uint16_t x196 = UINT16_MAX;
	int32_t t48 = -293490626;

	t48 = ((x193^(x194<=x195))&x196);

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	volatile int8_t x198 = -1;

	t49 = ((x197^(x198<=x199))&x200);

	if (t49 != 256) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MIN;
	uint64_t x203 = 20963132945932212LLU;
	static uint8_t x204 = UINT8_MAX;
	volatile int32_t t50 = 388413752;

	t50 = ((x201^(x202<=x203))&x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MAX;
	static int8_t x207 = INT8_MIN;
	volatile uint16_t x208 = 835U;
	static volatile int32_t t51 = -12471;

	t51 = ((x205^(x206<=x207))&x208);

	if (t51 != 835) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	volatile int8_t x210 = INT8_MIN;
	int32_t x211 = 11;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t52 = 10473169;

	t52 = ((x209^(x210<=x211))&x212);

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x215 = 3U;
	uint64_t t53 = 10128840938995LLU;

	t53 = ((x213^(x214<=x215))&x216);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	uint64_t x218 = 3143609904LLU;
	uint16_t x219 = 2256U;
	int32_t t54 = 4040;

	t54 = ((x217^(x218<=x219))&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = INT32_MAX;
	uint8_t x222 = UINT8_MAX;
	volatile int32_t x223 = INT32_MAX;
	int64_t x224 = 1434392452477LL;
	int64_t t55 = 1296319547253LL;

	t55 = ((x221^(x222<=x223))&x224);

	if (t55 != 2020859260LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x225 = 1U;
	uint8_t x226 = UINT8_MAX;
	int16_t x227 = 2816;
	int16_t x228 = -1;
	static int32_t t56 = -9605;

	t56 = ((x225^(x226<=x227))&x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	int64_t x231 = -1LL;
	int8_t x232 = INT8_MAX;
	volatile int32_t t57 = -252783288;

	t57 = ((x229^(x230<=x231))&x232);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	uint16_t x234 = UINT16_MAX;
	volatile int64_t x235 = INT64_MAX;
	static int8_t x236 = -1;
	int32_t t58 = -13768;

	t58 = ((x233^(x234<=x235))&x236);

	if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -1LL;
	int64_t x238 = -16767251LL;
	uint32_t x239 = UINT32_MAX;
	int8_t x240 = 0;
	static int64_t t59 = 468898LL;

	t59 = ((x237^(x238<=x239))&x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	int32_t x242 = INT32_MIN;
	int32_t x243 = 6039;
	int64_t x244 = -90715740910LL;

	t60 = ((x241^(x242<=x243))&x244);

	if (t60 != -90715740910LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 879634702LLU;
	static int32_t x247 = 8285970;
	volatile uint64_t t61 = 9942340026LLU;

	t61 = ((x245^(x246<=x247))&x248);

	if (t61 != 879634703LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	int8_t x250 = INT8_MAX;
	uint8_t x251 = UINT8_MAX;
	static int8_t x252 = -1;
	static int64_t t62 = 154835331756057879LL;

	t62 = ((x249^(x250<=x251))&x252);

	if (t62 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = INT32_MIN;
	uint64_t x255 = 38413989625162LLU;
	uint32_t x256 = UINT32_MAX;
	static volatile uint32_t t63 = UINT32_MAX;

	t63 = ((x253^(x254<=x255))&x256);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 0;
	int32_t x258 = INT32_MAX;
	uint64_t x259 = 427LLU;
	int64_t t64 = 761124630014LL;

	t64 = ((x257^(x258<=x259))&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = 2217;
	static int8_t x262 = -1;
	static int64_t x264 = INT64_MAX;
	volatile int64_t t65 = -31596LL;

	t65 = ((x261^(x262<=x263))&x264);

	if (t65 != 2216LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = 2;
	int64_t x267 = INT64_MIN;
	uint8_t x268 = 12U;

	t66 = ((x265^(x266<=x267))&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	volatile uint16_t x270 = 5U;
	static volatile uint32_t x271 = UINT32_MAX;
	int16_t x272 = -5;
	volatile int32_t t67 = -23950413;

	t67 = ((x269^(x270<=x271))&x272);

	if (t67 != 122) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x274 = 1;
	volatile uint64_t x275 = 519507912LLU;
	int32_t x276 = -14799;
	int32_t t68 = -9;

	t68 = ((x273^(x274<=x275))&x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	volatile uint32_t x278 = 2936804U;
	int16_t x279 = -1;
	static int16_t x280 = INT16_MIN;
	static int32_t t69 = INT32_MIN;

	t69 = ((x277^(x278<=x279))&x280);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = 780872033712009282LLU;
	static int16_t x282 = INT16_MAX;
	int32_t x283 = -3644;
	volatile uint64_t x284 = 464LLU;
	uint64_t t70 = 6135779581851359709LLU;

	t70 = ((x281^(x282<=x283))&x284);

	if (t70 != 64LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 0;
	static volatile int64_t x286 = -23858832508328LL;
	static int8_t x287 = INT8_MAX;
	int64_t x288 = INT64_MIN;
	static int64_t t71 = -32LL;

	t71 = ((x285^(x286<=x287))&x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = -1;
	int32_t x291 = INT32_MAX;
	int32_t x292 = -1;

	t72 = ((x289^(x290<=x291))&x292);

	if (t72 != 32766) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MAX;
	static uint8_t x294 = 17U;
	static int8_t x295 = -2;

	t73 = ((x293^(x294<=x295))&x296);

	if (t73 != 32767LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x298 = 1U;
	static int64_t x299 = INT64_MAX;
	volatile int32_t t74 = 342294727;

	t74 = ((x297^(x298<=x299))&x300);

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 3178419U;
	volatile uint64_t x302 = UINT64_MAX;
	int8_t x303 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	static uint32_t t75 = 391U;

	t75 = ((x301^(x302<=x303))&x304);

	if (t75 != 3145728U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	uint16_t x306 = 18U;
	int32_t t76 = 25;

	t76 = ((x305^(x306<=x307))&x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	static uint64_t x310 = UINT64_MAX;
	int32_t x311 = INT32_MAX;
	volatile int8_t x312 = -18;

	t77 = ((x309^(x310<=x311))&x312);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x313 = 5050726835LLU;
	static uint16_t x315 = 6U;
	uint32_t x316 = UINT32_MAX;
	uint64_t t78 = 2016112579067LLU;

	t78 = ((x313^(x314<=x315))&x316);

	if (t78 != 755759539LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = -4295030118LL;
	int64_t x318 = 498364924LL;
	static int32_t x320 = -1;
	static int64_t t79 = 53816174LL;

	t79 = ((x317^(x318<=x319))&x320);

	if (t79 != -4295030118LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x322 = -2;
	static volatile int32_t x323 = INT32_MIN;
	int16_t x324 = INT16_MIN;
	volatile int64_t t80 = INT64_MIN;

	t80 = ((x321^(x322<=x323))&x324);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = 297726441625LL;
	static int64_t x328 = INT64_MAX;
	volatile int64_t t81 = -16139LL;

	t81 = ((x325^(x326<=x327))&x328);

	if (t81 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x330 = UINT32_MAX;
	uint32_t x332 = 30153U;
	uint32_t t82 = 10700109U;

	t82 = ((x329^(x330<=x331))&x332);

	if (t82 != 20872U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = INT8_MAX;
	volatile uint64_t x336 = 94658LLU;

	t83 = ((x333^(x334<=x335))&x336);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -62799206095417LL;
	int32_t x338 = 944064629;
	int16_t x339 = INT16_MAX;
	static uint32_t x340 = 64358240U;
	volatile int64_t t84 = 125830692561LL;

	t84 = ((x337^(x338<=x339))&x340);

	if (t84 != 58721600LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	static int16_t x342 = 3;
	int32_t x343 = -5;
	int16_t x344 = INT16_MAX;
	volatile int32_t t85 = -4662;

	t85 = ((x341^(x342<=x343))&x344);

	if (t85 != 32640) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x346 = 1296435618U;
	int16_t x347 = INT16_MIN;
	volatile int32_t t86 = -383;

	t86 = ((x345^(x346<=x347))&x348);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = INT16_MAX;
	int16_t x351 = 20;
	static volatile int64_t x352 = INT64_MAX;
	volatile int64_t t87 = 2509LL;

	t87 = ((x349^(x350<=x351))&x352);

	if (t87 != 9223372003085292964LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	uint16_t x355 = 5U;

	t88 = ((x353^(x354<=x355))&x356);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	uint8_t x358 = 3U;
	static uint32_t x359 = UINT32_MAX;
	int64_t x360 = -687LL;
	int64_t t89 = 286949868LL;

	t89 = ((x357^(x358<=x359))&x360);

	if (t89 != -2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = -1;
	volatile uint8_t x362 = 9U;
	volatile int8_t x364 = -1;

	t90 = ((x361^(x362<=x363))&x364);

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x367 = 898857453815LLU;
	volatile uint8_t x368 = 113U;
	int32_t t91 = 231827;

	t91 = ((x365^(x366<=x367))&x368);

	if (t91 != 112) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -7890497059867896LL;
	static volatile uint64_t x370 = 57LLU;
	volatile int64_t t92 = -1012557LL;

	t92 = ((x369^(x370<=x371))&x372);

	if (t92 != -7890497059867904LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 24096U;
	uint64_t x374 = UINT64_MAX;

	t93 = ((x373^(x374<=x375))&x376);

	if (t93 != 24096LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = INT8_MIN;
	static uint8_t x379 = UINT8_MAX;
	uint64_t x380 = 5959414569LLU;
	uint64_t t94 = 110762971212834LLU;

	t94 = ((x377^(x378<=x379))&x380);

	if (t94 != 1315081LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	int32_t x383 = 5052033;
	volatile int32_t x384 = -3432;
	volatile int64_t t95 = INT64_MIN;

	t95 = ((x381^(x382<=x383))&x384);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = UINT32_MAX;
	static int64_t x387 = 69361684LL;
	static int8_t x388 = 12;
	static uint32_t t96 = 124483854U;

	t96 = ((x385^(x386<=x387))&x388);

	if (t96 != 12U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	uint32_t x390 = 30153663U;
	uint16_t x392 = 15U;
	static volatile int32_t t97 = -1772;

	t97 = ((x389^(x390<=x391))&x392);

	if (t97 != 15) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	int32_t x394 = INT32_MIN;
	uint64_t x395 = 26222998383LLU;
	uint64_t x396 = 78223209326LLU;

	t98 = ((x393^(x394<=x395))&x396);

	if (t98 != 110LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 19;
	uint32_t x398 = UINT32_MAX;
	int8_t x399 = INT8_MIN;
	int32_t t99 = 60078;

	t99 = ((x397^(x398<=x399))&x400);

	if (t99 != 19) { NG(); } else { ; }
	
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

