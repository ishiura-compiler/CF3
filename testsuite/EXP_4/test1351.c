#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -1LL;
uint16_t x4 = 875U;
static int64_t x14 = 1153101554LL;
uint16_t x20 = UINT16_MAX;
uint16_t x21 = 1U;
volatile uint8_t x22 = UINT8_MAX;
volatile uint32_t x23 = 1287503718U;
uint32_t x33 = 229687U;
static uint64_t t8 = 21333923LLU;
uint16_t x39 = 66U;
volatile int32_t x40 = 4;
int64_t x41 = INT64_MIN;
static int64_t x44 = -13536918LL;
int64_t x45 = INT64_MAX;
static int8_t x48 = 6;
int64_t t11 = INT64_MAX;
uint64_t x50 = 32791LLU;
uint32_t x51 = 93386U;
uint16_t x57 = 25433U;
uint16_t x65 = 2485U;
volatile int32_t x69 = -1;
volatile uint64_t x74 = UINT64_MAX;
uint16_t x82 = 4262U;
int16_t x85 = -14229;
static int32_t t21 = -11;
int64_t x95 = INT64_MIN;
int16_t x96 = -1;
int32_t x103 = INT32_MIN;
int8_t x110 = -3;
int64_t t27 = 276941772774229LL;
int64_t x113 = 117275962726110LL;
static uint64_t x115 = 25237026883LLU;
volatile int16_t x123 = -1;
volatile int64_t t31 = 3806755429022099LL;
static volatile int64_t t32 = -9LL;
static int8_t x135 = -1;
int32_t t37 = INT32_MAX;
int32_t t39 = 1491940;
int16_t x162 = -1;
static int64_t x165 = INT64_MIN;
volatile int64_t x169 = INT64_MIN;
int64_t t42 = -216512526LL;
int32_t x173 = INT32_MAX;
int16_t x174 = INT16_MIN;
uint8_t x175 = 8U;
volatile int32_t t43 = -528;
int8_t x185 = INT8_MAX;
int16_t x186 = -1;
int64_t x194 = INT64_MAX;
int64_t x212 = 467811122303217LL;
int16_t x215 = 7;
static volatile uint8_t x219 = 3U;
int16_t x228 = -1;
uint8_t x232 = UINT8_MAX;
static int64_t t60 = -111960LL;
uint8_t x257 = UINT8_MAX;
int32_t x262 = 0;
uint32_t x268 = 52298339U;
uint8_t x273 = UINT8_MAX;
int64_t x284 = INT64_MIN;
volatile uint64_t t71 = 1174929629372262LLU;
int64_t x294 = -4335863630LL;
static int32_t x295 = 12522;
volatile int64_t t73 = 2924540502755LL;
static uint32_t t74 = UINT32_MAX;
uint64_t x303 = UINT64_MAX;
volatile uint8_t x312 = 14U;
uint32_t x318 = UINT32_MAX;
volatile uint64_t x326 = 40873011292302973LLU;
volatile uint64_t x329 = 18460187LLU;
int64_t t83 = 1146080670893LL;
int64_t x346 = INT64_MIN;
static int32_t t87 = -64838;
int8_t x356 = INT8_MIN;
uint8_t x358 = 7U;
int16_t x360 = 1;
int16_t x364 = -1;
uint64_t t91 = 29248342765265141LLU;
volatile uint64_t x369 = 735231LLU;
uint64_t t92 = 3870LLU;
uint16_t x386 = 1U;
int64_t x391 = -24588052179373135LL;
int8_t x394 = 13;
int64_t x400 = 20047759155LL;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	static int32_t x2 = -37;
	static int32_t t0 = 12;

	t0 = (x1|(x2^(x3==x4)));

	if (t0 != -37) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint16_t x6 = UINT16_MAX;
	static int64_t x7 = -2034279LL;
	int8_t x8 = -1;
	int32_t t1 = -1682;

	t1 = (x5|(x6^(x7==x8)));

	if (t1 != -2147418113) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int64_t x10 = INT64_MIN;
	int8_t x11 = 9;
	volatile uint8_t x12 = 0U;
	int64_t t2 = -148985777164791LL;

	t2 = (x9|(x10^(x11==x12)));

	if (t2 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	uint8_t x15 = UINT8_MAX;
	uint8_t x16 = 6U;
	volatile int64_t t3 = 149443359188336LL;

	t3 = (x13|(x14^(x15==x16)));

	if (t3 != 4294967295LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = UINT64_MAX;
	uint32_t x18 = 3476U;
	int32_t x19 = INT32_MIN;
	uint64_t t4 = UINT64_MAX;

	t4 = (x17|(x18^(x19==x20)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x24 = -1;
	volatile int32_t t5 = 1;

	t5 = (x21|(x22^(x23==x24)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	uint64_t x26 = 604497161LLU;
	static volatile int16_t x27 = INT16_MIN;
	static int8_t x28 = INT8_MAX;
	uint64_t t6 = 8761LLU;

	t6 = (x25|(x26^(x27==x28)));

	if (t6 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MAX;
	static volatile int8_t x30 = 1;
	volatile int8_t x31 = -1;
	volatile int8_t x32 = -53;
	int32_t t7 = -1;

	t7 = (x29|(x30^(x31==x32)));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 3LLU;
	int64_t x35 = 1LL;
	int32_t x36 = 7;

	t8 = (x33|(x34^(x35==x36)));

	if (t8 != 229687LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int8_t x38 = INT8_MIN;
	volatile int64_t t9 = -111651121837506588LL;

	t9 = (x37|(x38^(x39==x40)));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	volatile uint32_t x43 = 40119U;
	volatile int64_t t10 = 4785457690229174LL;

	t10 = (x41|(x42^(x43==x44)));

	if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MAX;
	uint64_t x47 = UINT64_MAX;

	t11 = (x45|(x46^(x47==x48)));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int32_t x52 = -11387310;
	volatile uint64_t t12 = 32700898310LLU;

	t12 = (x49|(x50^(x51==x52)));

	if (t12 != 18446744071562100759LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = -1LL;
	uint8_t x54 = 0U;
	uint32_t x55 = 43193541U;
	volatile int32_t x56 = -1;
	volatile int64_t t13 = -7479139888027LL;

	t13 = (x53|(x54^(x55==x56)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x58 = 1;
	int32_t x59 = INT32_MAX;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 3;

	t14 = (x57|(x58^(x59==x60)));

	if (t14 != 25433) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -107621108;
	uint16_t x62 = 251U;
	volatile int32_t x63 = -1;
	int32_t x64 = INT32_MIN;
	int32_t t15 = -6;

	t15 = (x61|(x62^(x63==x64)));

	if (t15 != -107620865) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 253346772U;
	uint32_t x67 = UINT32_MAX;
	int32_t x68 = -1;
	static volatile uint32_t t16 = 1145826U;

	t16 = (x65|(x66^(x67==x68)));

	if (t16 != 253348853U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x70 = 7014U;
	uint32_t x71 = 12358U;
	volatile int8_t x72 = INT8_MIN;
	int32_t t17 = 77406;

	t17 = (x69|(x70^(x71==x72)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int16_t x75 = -1;
	int8_t x76 = -1;
	uint64_t t18 = UINT64_MAX;

	t18 = (x73|(x74^(x75==x76)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	static int64_t x78 = -368LL;
	int8_t x79 = INT8_MIN;
	int64_t x80 = -11839LL;
	int64_t t19 = -36608373048210LL;

	t19 = (x77|(x78^(x79==x80)));

	if (t19 != -368LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 860U;
	int16_t x83 = INT16_MAX;
	static uint16_t x84 = UINT16_MAX;
	static int32_t t20 = -21;

	t20 = (x81|(x82^(x83==x84)));

	if (t20 != 5118) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = UINT8_MAX;
	int32_t x87 = 158;
	int8_t x88 = INT8_MAX;

	t21 = (x85|(x86^(x87==x88)));

	if (t21 != -14081) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int16_t x90 = -1;
	static int64_t x91 = INT64_MIN;
	int64_t x92 = INT64_MIN;
	volatile int32_t t22 = -29;

	t22 = (x89|(x90^(x91==x92)));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	int32_t x94 = -1;
	static int64_t t23 = 2007711LL;

	t23 = (x93|(x94^(x95==x96)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MAX;
	volatile int16_t x98 = -1;
	volatile int8_t x99 = INT8_MAX;
	uint32_t x100 = UINT32_MAX;
	int64_t t24 = -57610500205LL;

	t24 = (x97|(x98^(x99==x100)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = UINT8_MAX;
	int16_t x102 = -2;
	volatile uint64_t x104 = 101693259796102LLU;
	volatile int32_t t25 = 45094;

	t25 = (x101|(x102^(x103==x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = INT32_MIN;
	static int16_t x107 = INT16_MAX;
	int8_t x108 = 58;
	static volatile int32_t t26 = -103014;

	t26 = (x105|(x106^(x107==x108)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 11558773683LL;
	int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MIN;

	t27 = (x109|(x110^(x111==x112)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x114 = -27880020LL;
	int32_t x116 = INT32_MAX;
	volatile int64_t t28 = -15223LL;

	t28 = (x113|(x114^(x115==x116)));

	if (t28 != -27273218LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int32_t x118 = INT32_MAX;
	int8_t x119 = 0;
	volatile int16_t x120 = -1;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = (x117|(x118^(x119==x120)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	int32_t x122 = INT32_MIN;
	int64_t x124 = INT64_MIN;
	volatile int32_t t30 = -292857760;

	t30 = (x121|(x122^(x123==x124)));

	if (t30 != -2147483521) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	uint16_t x126 = UINT16_MAX;
	int8_t x127 = INT8_MAX;
	int64_t x128 = -1LL;

	t31 = (x125|(x126^(x127==x128)));

	if (t31 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -1LL;
	uint32_t x130 = UINT32_MAX;
	int16_t x131 = INT16_MIN;
	int64_t x132 = -1LL;

	t32 = (x129|(x130^(x131==x132)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	int32_t x134 = 10707;
	uint32_t x136 = UINT32_MAX;
	int32_t t33 = -366154312;

	t33 = (x133|(x134^(x135==x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 1;
	static int64_t x138 = INT64_MIN;
	static volatile int32_t x139 = 31;
	volatile int8_t x140 = -1;
	int64_t t34 = -225081083LL;

	t34 = (x137|(x138^(x139==x140)));

	if (t34 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	volatile int16_t x142 = -150;
	uint64_t x143 = 4435640130291977167LLU;
	static int16_t x144 = 403;
	uint64_t t35 = UINT64_MAX;

	t35 = (x141|(x142^(x143==x144)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	int16_t x146 = INT16_MAX;
	int64_t x147 = 21LL;
	int32_t x148 = INT32_MAX;
	volatile int32_t t36 = -876520;

	t36 = (x145|(x146^(x147==x148)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	uint8_t x150 = 1U;
	static int16_t x151 = INT16_MIN;
	uint32_t x152 = 64135U;

	t37 = (x149|(x150^(x151==x152)));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 338432901;
	int64_t x154 = -1LL;
	volatile int16_t x155 = INT16_MIN;
	static int16_t x156 = 207;
	int64_t t38 = 195190356116593LL;

	t38 = (x153|(x154^(x155==x156)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int16_t x158 = INT16_MIN;
	volatile int16_t x159 = 11011;
	volatile int16_t x160 = INT16_MIN;

	t39 = (x157|(x158^(x159==x160)));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int16_t x163 = INT16_MIN;
	volatile uint64_t x164 = 961859594LLU;
	volatile int32_t t40 = 0;

	t40 = (x161|(x162^(x163==x164)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = 54LL;
	int16_t x167 = -1;
	int64_t x168 = -1733136463587269LL;
	volatile int64_t t41 = -3551LL;

	t41 = (x165|(x166^(x167==x168)));

	if (t41 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = INT16_MIN;
	int32_t x171 = INT32_MAX;
	int64_t x172 = 6969589250LL;

	t42 = (x169|(x170^(x171==x172)));

	if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x176 = 816290U;

	t43 = (x173|(x174^(x175==x176)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = -2742;
	volatile uint16_t x178 = 16U;
	int64_t x179 = INT64_MIN;
	volatile uint8_t x180 = 22U;
	static int32_t t44 = 7328854;

	t44 = (x177|(x178^(x179==x180)));

	if (t44 != -2726) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x181 = 819U;
	static uint64_t x182 = 75LLU;
	int8_t x183 = INT8_MAX;
	int8_t x184 = INT8_MIN;
	uint64_t t45 = 19166796151564LLU;

	t45 = (x181|(x182^(x183==x184)));

	if (t45 != 891LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x187 = -87;
	uint32_t x188 = 18653U;
	int32_t t46 = -33;

	t46 = (x185|(x186^(x187==x188)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	static int64_t x190 = INT64_MIN;
	volatile int16_t x191 = -553;
	int16_t x192 = INT16_MIN;
	volatile int64_t t47 = -48680507178656737LL;

	t47 = (x189|(x190^(x191==x192)));

	if (t47 != -32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	static volatile int16_t x195 = INT16_MIN;
	uint64_t x196 = 8560134164933LLU;
	static int64_t t48 = -44442951LL;

	t48 = (x193|(x194^(x195==x196)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 57870LLU;
	volatile int8_t x198 = 2;
	int16_t x199 = 970;
	uint8_t x200 = UINT8_MAX;
	uint64_t t49 = 790LLU;

	t49 = (x197|(x198^(x199==x200)));

	if (t49 != 57870LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x201 = UINT64_MAX;
	int16_t x202 = -58;
	int64_t x203 = -38LL;
	static int16_t x204 = INT16_MAX;
	uint64_t t50 = UINT64_MAX;

	t50 = (x201|(x202^(x203==x204)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	volatile int32_t x206 = -1;
	uint8_t x207 = UINT8_MAX;
	volatile int64_t x208 = INT64_MIN;
	volatile int32_t t51 = 754;

	t51 = (x205|(x206^(x207==x208)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -41;
	int16_t x210 = INT16_MAX;
	int8_t x211 = -1;
	volatile int32_t t52 = 9096;

	t52 = (x209|(x210^(x211==x212)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	uint64_t x214 = UINT64_MAX;
	static uint8_t x216 = UINT8_MAX;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (x213|(x214^(x215==x216)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -59380858233LL;
	static int16_t x218 = INT16_MIN;
	static int8_t x220 = INT8_MAX;
	volatile int64_t t54 = -45LL;

	t54 = (x217|(x218^(x219==x220)));

	if (t54 != -32121LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	uint16_t x222 = UINT16_MAX;
	static volatile int32_t x223 = INT32_MAX;
	static int64_t x224 = -1LL;
	static int32_t t55 = -10005;

	t55 = (x221|(x222^(x223==x224)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	uint64_t x226 = UINT64_MAX;
	uint16_t x227 = 88U;
	uint64_t t56 = UINT64_MAX;

	t56 = (x225|(x226^(x227==x228)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 115U;
	int32_t x230 = INT32_MIN;
	uint32_t x231 = 4U;
	volatile int32_t t57 = -25299;

	t57 = (x229|(x230^(x231==x232)));

	if (t57 != -2147483533) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x233 = 45U;
	volatile uint16_t x234 = 23U;
	static volatile int8_t x235 = INT8_MIN;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t58 = 6991047;

	t58 = (x233|(x234^(x235==x236)));

	if (t58 != 63) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -4;
	volatile int64_t x238 = -1LL;
	volatile int64_t x239 = -901652LL;
	int64_t x240 = -1LL;
	volatile int64_t t59 = -1182LL;

	t59 = (x237|(x238^(x239==x240)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = -36;
	int64_t x242 = 17483593041457307LL;
	int64_t x243 = INT64_MIN;
	volatile uint16_t x244 = 27376U;

	t60 = (x241|(x242^(x243==x244)));

	if (t60 != -33LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = INT32_MIN;
	int16_t x246 = -1;
	int32_t x247 = 139;
	uint16_t x248 = 839U;
	int32_t t61 = -607390;

	t61 = (x245|(x246^(x247==x248)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x250 = 15LLU;
	int8_t x251 = INT8_MIN;
	volatile int8_t x252 = INT8_MAX;
	uint64_t t62 = 3397LLU;

	t62 = (x249|(x250^(x251==x252)));

	if (t62 != 18446744071562067983LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = 3720905231402366432LL;
	static volatile int16_t x254 = INT16_MIN;
	int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MIN;
	int64_t t63 = -1679375040437903LL;

	t63 = (x253|(x254^(x255==x256)));

	if (t63 != -2592LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = INT32_MIN;
	volatile uint8_t x259 = 0U;
	volatile uint64_t x260 = 8778979112910524386LLU;
	int32_t t64 = 574684978;

	t64 = (x257|(x258^(x259==x260)));

	if (t64 != -2147483393) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 1407104027U;
	volatile int64_t x263 = INT64_MIN;
	volatile uint16_t x264 = UINT16_MAX;
	uint32_t t65 = 1U;

	t65 = (x261|(x262^(x263==x264)));

	if (t65 != 1407104027U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	int8_t x266 = INT8_MAX;
	volatile uint64_t x267 = 66728LLU;
	volatile int64_t t66 = -35324463LL;

	t66 = (x265|(x266^(x267==x268)));

	if (t66 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = 4033498LL;
	static int8_t x270 = -1;
	int32_t x271 = INT32_MAX;
	volatile int64_t x272 = -1LL;
	static volatile int64_t t67 = 64LL;

	t67 = (x269|(x270^(x271==x272)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x274 = 237U;
	int32_t x275 = 17;
	static volatile uint16_t x276 = UINT16_MAX;
	volatile int32_t t68 = 14662862;

	t68 = (x273|(x274^(x275==x276)));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	volatile int8_t x278 = INT8_MAX;
	int64_t x279 = INT64_MIN;
	int64_t x280 = INT64_MIN;
	volatile int32_t t69 = -25875980;

	t69 = (x277|(x278^(x279==x280)));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	volatile int8_t x282 = INT8_MIN;
	static uint64_t x283 = 167244722316LLU;
	int64_t t70 = 5917LL;

	t70 = (x281|(x282^(x283==x284)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -2;
	static uint64_t x286 = 617449497452287122LLU;
	static uint32_t x287 = UINT32_MAX;
	int32_t x288 = INT32_MAX;

	t71 = (x285|(x286^(x287==x288)));

	if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x289 = 986552LLU;
	volatile uint32_t x290 = 53570U;
	static uint8_t x291 = 44U;
	static int16_t x292 = INT16_MIN;
	static volatile uint64_t t72 = 52150366882927673LLU;

	t72 = (x289|(x290^(x291==x292)));

	if (t72 != 1039866LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 6U;
	int8_t x296 = -1;

	t73 = (x293|(x294^(x295==x296)));

	if (t73 != -4335863626LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	int16_t x298 = INT16_MAX;
	static int16_t x299 = -1;
	volatile int16_t x300 = INT16_MIN;

	t74 = (x297|(x298^(x299==x300)));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = -3;
	uint16_t x302 = 5130U;
	int32_t x304 = INT32_MIN;
	volatile int32_t t75 = 12136;

	t75 = (x301|(x302^(x303==x304)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = -161;
	volatile uint64_t x306 = 19724LLU;
	int8_t x307 = -3;
	uint8_t x308 = UINT8_MAX;
	static volatile uint64_t t76 = 152609LLU;

	t76 = (x305|(x306^(x307==x308)));

	if (t76 != 18446744073709551455LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MIN;
	int16_t x310 = INT16_MAX;
	volatile int32_t x311 = INT32_MAX;
	static int64_t t77 = -278863188823809LL;

	t77 = (x309|(x310^(x311==x312)));

	if (t77 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = 596;
	static uint8_t x314 = UINT8_MAX;
	volatile uint64_t x315 = UINT64_MAX;
	int8_t x316 = 5;
	int32_t t78 = -1;

	t78 = (x313|(x314^(x315==x316)));

	if (t78 != 767) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	static int8_t x319 = -1;
	volatile uint8_t x320 = 3U;
	uint32_t t79 = UINT32_MAX;

	t79 = (x317|(x318^(x319==x320)));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -1;
	volatile uint64_t x322 = 29203LLU;
	uint16_t x323 = 5966U;
	int32_t x324 = -1;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (x321|(x322^(x323==x324)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	uint64_t x327 = UINT64_MAX;
	uint64_t x328 = UINT64_MAX;
	static uint64_t t81 = 2199160609817198235LLU;

	t81 = (x325|(x326^(x327==x328)));

	if (t81 != 9264245048147078780LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x330 = -11;
	uint32_t x331 = 4120808U;
	static volatile int64_t x332 = INT64_MIN;
	static volatile uint64_t t82 = UINT64_MAX;

	t82 = (x329|(x330^(x331==x332)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	int8_t x334 = -1;
	int64_t x335 = INT64_MIN;
	uint64_t x336 = UINT64_MAX;

	t83 = (x333|(x334^(x335==x336)));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	uint32_t x338 = UINT32_MAX;
	int32_t x339 = INT32_MAX;
	volatile int64_t x340 = INT64_MIN;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x337|(x338^(x339==x340)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 478212621082LL;
	int32_t x342 = INT32_MIN;
	int64_t x343 = -1LL;
	static uint32_t x344 = 2790U;
	volatile int64_t t85 = 1136LL;

	t85 = (x341|(x342^(x343==x344)));

	if (t85 != -676232422LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = 3;
	uint8_t x347 = 1U;
	int64_t x348 = INT64_MAX;
	static volatile int64_t t86 = 2731LL;

	t86 = (x345|(x346^(x347==x348)));

	if (t86 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	int16_t x350 = -1;
	uint32_t x351 = 796U;
	int16_t x352 = 7;

	t87 = (x349|(x350^(x351==x352)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 3;
	static int32_t x354 = -1;
	int32_t x355 = -1;
	static int32_t t88 = 68056;

	t88 = (x353|(x354^(x355==x356)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MIN;
	uint64_t x359 = 2LLU;
	int32_t t89 = 0;

	t89 = (x357|(x358^(x359==x360)));

	if (t89 != -121) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = 3022672109311LL;
	static uint32_t x362 = 2602U;
	int64_t x363 = 1320405LL;
	int64_t t90 = 212680068717412LL;

	t90 = (x361|(x362^(x363==x364)));

	if (t90 != 3022672109311LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -30001663472444LL;
	static uint64_t x366 = 2658306113LLU;
	int16_t x367 = INT16_MAX;
	volatile uint16_t x368 = 15440U;

	t91 = (x365|(x366^(x367==x368)));

	if (t91 != 18446714072288431301LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x370 = INT64_MIN;
	int64_t x371 = 1407454203LL;
	volatile int64_t x372 = INT64_MIN;

	t92 = (x369|(x370^(x371==x372)));

	if (t92 != 9223372036855511039LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -10;
	uint64_t x374 = UINT64_MAX;
	int64_t x375 = INT64_MAX;
	int64_t x376 = INT64_MIN;
	uint64_t t93 = UINT64_MAX;

	t93 = (x373|(x374^(x375==x376)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1710772220381448LL;
	int16_t x378 = INT16_MAX;
	static volatile int16_t x379 = INT16_MIN;
	volatile int64_t x380 = -1LL;
	int64_t t94 = 358949728LL;

	t94 = (x377|(x378^(x379==x380)));

	if (t94 != -1710772220362753LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -43888LL;
	static int32_t x382 = -657;
	uint64_t x383 = 11091746LLU;
	static volatile int16_t x384 = 0;
	int64_t t95 = -16317243749573864LL;

	t95 = (x381|(x382^(x383==x384)));

	if (t95 != -513LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	volatile uint16_t x387 = 5075U;
	int64_t x388 = -56049467806688783LL;
	volatile int32_t t96 = -3032952;

	t96 = (x385|(x386^(x387==x388)));

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = 3;
	static uint16_t x390 = UINT16_MAX;
	int16_t x392 = INT16_MAX;
	int32_t t97 = 442014697;

	t97 = (x389|(x390^(x391==x392)));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	int8_t x395 = -1;
	int32_t x396 = INT32_MAX;
	volatile int32_t t98 = 916;

	t98 = (x393|(x394^(x395==x396)));

	if (t98 != -115) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 25U;
	static uint64_t x398 = 463664602LLU;
	uint16_t x399 = UINT16_MAX;
	volatile uint64_t t99 = 545940640622642482LLU;

	t99 = (x397|(x398^(x399==x400)));

	if (t99 != 463664603LLU) { NG(); } else { ; }
	
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

