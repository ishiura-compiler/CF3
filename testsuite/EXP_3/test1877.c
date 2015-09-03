#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x12 = INT32_MIN;
int64_t t2 = -10LL;
int16_t x16 = -1660;
static uint16_t x21 = 2422U;
uint64_t x22 = 626848LLU;
int8_t x29 = INT8_MIN;
int16_t x31 = 1;
uint64_t x32 = UINT64_MAX;
int32_t x40 = 245297257;
static uint8_t x46 = 6U;
uint64_t x50 = UINT64_MAX;
static uint32_t x62 = UINT32_MAX;
volatile uint64_t x63 = 1694LLU;
uint64_t t15 = 31907LLU;
static uint16_t x69 = 7U;
uint8_t x73 = 2U;
int16_t x76 = -1;
uint16_t x83 = UINT16_MAX;
volatile int64_t x86 = INT64_MAX;
volatile int64_t t19 = -9059603LL;
static int32_t x90 = INT32_MIN;
volatile int16_t x92 = INT16_MIN;
uint16_t x93 = 0U;
static int16_t x97 = INT16_MAX;
static uint64_t t23 = 6181248LLU;
uint64_t x112 = 19421LLU;
int32_t x115 = INT32_MAX;
uint16_t x119 = UINT16_MAX;
volatile int8_t x121 = INT8_MIN;
int16_t x122 = INT16_MIN;
int32_t x129 = -51387163;
int64_t x132 = INT64_MIN;
static int8_t x135 = -1;
int64_t x138 = -1LL;
static int32_t t33 = 545987965;
uint8_t x146 = UINT8_MAX;
int32_t x148 = INT32_MAX;
uint64_t x151 = 7241344LLU;
static uint32_t x154 = 14808520U;
int64_t x155 = 12011618LL;
volatile int64_t x159 = 109LL;
int64_t x161 = -6LL;
int32_t t39 = 41;
uint16_t x176 = 28U;
int64_t x179 = -27784LL;
int8_t x183 = INT8_MIN;
int8_t x189 = INT8_MIN;
uint64_t t44 = 207036LLU;
int16_t x197 = -568;
uint64_t x204 = 3870891230LLU;
static uint32_t t47 = 44806U;
int8_t x212 = 11;
volatile int32_t t48 = 28;
int16_t x219 = -4;
int8_t x226 = 0;
static int32_t x228 = INT32_MIN;
static int8_t x231 = INT8_MIN;
volatile uint64_t t53 = 2971743766995498LLU;
static int32_t x236 = INT32_MIN;
volatile int64_t t54 = 3007043755750917359LL;
int64_t t56 = 1260996LL;
static volatile int8_t x253 = -1;
int8_t x259 = INT8_MAX;
static int16_t x260 = -7;
volatile uint64_t t59 = 125178876LLU;
int16_t x264 = INT16_MIN;
volatile int32_t t60 = -14243;
int64_t t61 = -8836067LL;
volatile uint64_t x269 = 378054569255245855LLU;
uint16_t x271 = 790U;
volatile int32_t t63 = 20;
static volatile int8_t x284 = INT8_MIN;
int8_t x286 = -21;
int16_t x288 = -3;
int64_t x289 = INT64_MAX;
uint32_t x291 = 273492268U;
int16_t x292 = -1;
volatile uint64_t t68 = 176181132449669818LLU;
uint16_t x297 = 86U;
int64_t x299 = INT64_MIN;
static volatile int16_t x300 = -108;
volatile uint32_t x301 = 57620U;
static uint16_t x304 = 48U;
int64_t x310 = -1680451628469143031LL;
int8_t x311 = INT8_MAX;
int16_t x326 = -1;
int32_t x328 = -540264;
static uint64_t t74 = 6241663017938606296LLU;
static int16_t x341 = INT16_MIN;
uint8_t x344 = 0U;
volatile int64_t x345 = INT64_MIN;
int64_t x347 = INT64_MAX;
uint8_t x348 = UINT8_MAX;
volatile int64_t t81 = 24998364137856501LL;
uint64_t x358 = UINT64_MAX;
int16_t x366 = -1;
static volatile uint32_t x369 = 961592504U;
uint64_t t85 = 1LLU;
static uint32_t x376 = 9701U;
volatile uint32_t t87 = 13U;
static int32_t t89 = 162;
static volatile uint8_t x391 = UINT8_MAX;
int16_t x396 = INT16_MIN;
int32_t x399 = 29815966;
int32_t x404 = INT32_MIN;
uint64_t t93 = 471LLU;
volatile uint16_t x405 = 676U;
static int64_t x410 = -1LL;
static int32_t x418 = INT32_MIN;
volatile int16_t x422 = 15;
int32_t t98 = -2980;
int32_t x427 = -1;


void f0(void) {
	static int16_t x1 = 2959;
	static volatile int16_t x2 = -1;
	uint32_t x3 = UINT32_MAX;
	static volatile uint8_t x4 = 97U;
	uint32_t t0 = 452U;

	t0 = ((x1-x2)%(x3|x4));

	if (t0 != 2960U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -22;
	int32_t x6 = -1;
	int16_t x7 = -1;
	int32_t x8 = INT32_MIN;
	static volatile int32_t t1 = -838;

	t1 = ((x5-x6)%(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int64_t x10 = -1LL;
	static int64_t x11 = -1LL;

	t2 = ((x9-x10)%(x11|x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 118U;
	int16_t x14 = -1;
	uint64_t x15 = UINT64_MAX;
	uint64_t t3 = 3822663642334506LLU;

	t3 = ((x13-x14)%(x15|x16));

	if (t3 != 119LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	int16_t x18 = INT16_MIN;
	static int8_t x19 = INT8_MIN;
	uint64_t x20 = 118642925365499826LLU;
	static uint64_t t4 = 27LLU;

	t4 = ((x17-x18)%(x19|x20));

	if (t4 != 32769LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x23 = -109133;
	static int8_t x24 = 11;
	static uint64_t t5 = 2247689603012963738LLU;

	t5 = ((x21-x22)%(x23|x24));

	if (t5 != 18446744073708927190LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	volatile uint16_t x26 = 1684U;
	volatile int8_t x27 = -58;
	int64_t x28 = INT64_MIN;
	int64_t t6 = 0LL;

	t6 = ((x25-x26)%(x27|x28));

	if (t6 != 13LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -3409937738784636346LL;
	uint64_t t7 = 15439268263665LLU;

	t7 = ((x29-x30)%(x31|x32));

	if (t7 != 3409937738784636218LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 30U;
	int8_t x34 = -20;
	static int8_t x35 = INT8_MIN;
	int8_t x36 = -27;
	int32_t t8 = 10;

	t8 = ((x33-x34)%(x35|x36));

	if (t8 != 23) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = 2212;
	volatile uint32_t x38 = UINT32_MAX;
	volatile int32_t x39 = INT32_MIN;
	uint32_t t9 = 60U;

	t9 = ((x37-x38)%(x39|x40));

	if (t9 != 2213U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 5U;
	int64_t x42 = INT64_MAX;
	volatile uint8_t x43 = 48U;
	uint64_t x44 = 384311326264905676LLU;
	volatile uint64_t t10 = 3247314066917939LLU;

	t10 = ((x41-x42)%(x43|x44));

	if (t10 != 384211532761944162LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int8_t x47 = 3;
	int64_t x48 = INT64_MIN;
	static volatile int64_t t11 = 81729865093397LL;

	t11 = ((x45-x46)%(x47|x48));

	if (t11 != 2147483641LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -7909;
	int32_t x51 = -922358165;
	static int8_t x52 = -1;
	volatile uint64_t t12 = 167592924728346LLU;

	t12 = ((x49-x50)%(x51|x52));

	if (t12 != 18446744073709543708LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 19;
	int64_t x58 = 3508LL;
	uint64_t x59 = 210LLU;
	int8_t x60 = INT8_MAX;
	volatile uint64_t t13 = 375667372020117LLU;

	t13 = ((x57-x58)%(x59|x60));

	if (t13 != 82LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x61 = 1U;
	static int64_t x64 = INT64_MAX;
	uint64_t t14 = 96426602208773491LLU;

	t14 = ((x61-x62)%(x63|x64));

	if (t14 != 2LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	uint64_t x67 = UINT64_MAX;
	uint16_t x68 = 3U;

	t15 = ((x65-x66)%(x67|x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = -68124929290385444LL;
	uint16_t x71 = UINT16_MAX;
	uint8_t x72 = 0U;
	volatile int64_t t16 = 62677314693478LL;

	t16 = ((x69-x70)%(x71|x72));

	if (t16 != 58131LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x74 = 4U;
	volatile int64_t x75 = -41LL;
	int64_t t17 = -700LL;

	t17 = ((x73-x74)%(x75|x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x81 = UINT8_MAX;
	volatile int32_t x82 = 6658;
	int8_t x84 = INT8_MIN;
	volatile int32_t t18 = -36470;

	t18 = ((x81-x82)%(x83|x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	int64_t x87 = 0LL;
	uint16_t x88 = 31568U;

	t19 = ((x85-x86)%(x87|x88));

	if (t19 != -9872LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = INT16_MIN;
	volatile int64_t x91 = -1LL;
	int64_t t20 = 1LL;

	t20 = ((x89-x90)%(x91|x92));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x94 = 31569U;
	static volatile int64_t x95 = -1LL;
	int64_t x96 = INT64_MIN;
	int64_t t21 = 198701875LL;

	t21 = ((x93-x94)%(x95|x96));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x98 = 258626;
	static volatile int32_t x99 = -1;
	int8_t x100 = INT8_MAX;
	volatile int32_t t22 = 839226;

	t22 = ((x97-x98)%(x99|x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = UINT8_MAX;
	volatile uint64_t x102 = 458LLU;
	volatile int8_t x103 = 1;
	volatile uint8_t x104 = UINT8_MAX;

	t23 = ((x101-x102)%(x103|x104));

	if (t23 != 53LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = 11U;
	uint32_t x106 = UINT32_MAX;
	uint16_t x107 = 177U;
	static uint8_t x108 = 1U;
	volatile uint32_t t24 = 68011U;

	t24 = ((x105-x106)%(x107|x108));

	if (t24 != 12U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x109 = 3U;
	uint64_t x110 = 1LLU;
	int32_t x111 = -232012;
	uint64_t t25 = 53196633499312LLU;

	t25 = ((x109-x110)%(x111|x112));

	if (t25 != 2LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = UINT64_MAX;
	int8_t x114 = -1;
	static uint32_t x116 = 1662U;
	uint64_t t26 = 12518838353930LLU;

	t26 = ((x113-x114)%(x115|x116));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x117 = 5;
	static int8_t x118 = INT8_MAX;
	uint64_t x120 = 1284276LLU;
	uint64_t t27 = 23406065978566LLU;

	t27 = ((x117-x118)%(x119|x120));

	if (t27 != 303973LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x123 = INT8_MAX;
	int32_t x124 = 2;
	int32_t t28 = 2256272;

	t28 = ((x121-x122)%(x123|x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -1;
	volatile uint32_t x126 = UINT32_MAX;
	int8_t x127 = INT8_MAX;
	uint16_t x128 = 31U;
	volatile uint32_t t29 = 907970U;

	t29 = ((x125-x126)%(x127|x128));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x130 = INT64_MIN;
	int32_t x131 = INT32_MAX;
	static volatile int64_t t30 = -2LL;

	t30 = ((x129-x130)%(x131|x132));

	if (t30 != 2096096484LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -1;
	int64_t x134 = -75219064LL;
	volatile uint64_t x136 = 985426340326LLU;
	uint64_t t31 = 6353911996800LLU;

	t31 = ((x133-x134)%(x135|x136));

	if (t31 != 75219063LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x137 = 30U;
	static volatile int32_t x139 = 33562679;
	uint16_t x140 = 12769U;
	volatile int64_t t32 = -3946285116724LL;

	t32 = ((x137-x138)%(x139|x140));

	if (t32 != 31LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = INT8_MIN;
	static int16_t x142 = INT16_MAX;
	uint8_t x143 = 7U;
	volatile int8_t x144 = 3;

	t33 = ((x141-x142)%(x143|x144));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MAX;
	int16_t x147 = INT16_MAX;
	static volatile int32_t t34 = -7431779;

	t34 = ((x145-x146)%(x147|x148));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = 79;
	uint8_t x150 = 16U;
	int8_t x152 = INT8_MIN;
	uint64_t t35 = 723943546555LLU;

	t35 = ((x149-x150)%(x151|x152));

	if (t35 != 63LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = INT8_MIN;
	int8_t x156 = -1;
	int64_t t36 = 632691658314LL;

	t36 = ((x153-x154)%(x155|x156));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MIN;
	int16_t x158 = -1;
	volatile int32_t x160 = INT32_MIN;
	int64_t t37 = -73LL;

	t37 = ((x157-x158)%(x159|x160));

	if (t37 != -108LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x162 = -1;
	volatile int8_t x163 = 19;
	static int16_t x164 = INT16_MIN;
	volatile int64_t t38 = -379916987843LL;

	t38 = ((x161-x162)%(x163|x164));

	if (t38 != -5LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	int32_t x166 = -453532784;
	volatile int8_t x167 = INT8_MIN;
	int16_t x168 = -1;

	t39 = ((x165-x166)%(x167|x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = -1LL;
	int64_t x170 = INT64_MIN;
	int32_t x171 = 14;
	int16_t x172 = -1;
	static volatile int64_t t40 = -5463108LL;

	t40 = ((x169-x170)%(x171|x172));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = INT32_MAX;
	int32_t x174 = 2375;
	int8_t x175 = INT8_MIN;
	static int32_t t41 = 12088667;

	t41 = ((x173-x174)%(x175|x176));

	if (t41 != 72) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x177 = UINT64_MAX;
	int32_t x178 = 1;
	static uint32_t x180 = UINT32_MAX;
	volatile uint64_t t42 = 7364884190LLU;

	t42 = ((x177-x178)%(x179|x180));

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MAX;
	int16_t x182 = INT16_MIN;
	int64_t x184 = -214624298827812LL;
	int64_t t43 = 32436219LL;

	t43 = ((x181-x182)%(x183|x184));

	if (t43 != 15LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x190 = 134838551091LLU;
	uint8_t x191 = 27U;
	int32_t x192 = INT32_MAX;

	t44 = ((x189-x190)%(x191|x192));

	if (t44 != 452918546LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x198 = -45;
	int16_t x199 = 41;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t45 = 46379;

	t45 = ((x197-x198)%(x199|x200));

	if (t45 != -13) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MIN;
	static int32_t x202 = 4718076;
	int8_t x203 = -1;
	volatile uint64_t t46 = 242258LLU;

	t46 = ((x201-x202)%(x203|x204));

	if (t46 != 18446744073704800772LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = -1;
	static volatile int32_t x206 = -272023927;
	int8_t x207 = 13;
	uint32_t x208 = 9U;

	t47 = ((x205-x206)%(x207|x208));

	if (t47 != 5U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = -1;
	int32_t x210 = INT32_MIN;
	static uint8_t x211 = 23U;

	t48 = ((x209-x210)%(x211|x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = UINT64_MAX;
	static int32_t x214 = INT32_MAX;
	volatile uint32_t x215 = 26U;
	int64_t x216 = INT64_MIN;
	volatile uint64_t t49 = 93068LLU;

	t49 = ((x213-x214)%(x215|x216));

	if (t49 != 9223372034707292134LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x217 = 861;
	static uint8_t x218 = 47U;
	static int32_t x220 = INT32_MAX;
	volatile int32_t t50 = 226983;

	t50 = ((x217-x218)%(x219|x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = 1481U;
	uint8_t x222 = UINT8_MAX;
	volatile uint8_t x223 = UINT8_MAX;
	int32_t x224 = -1;
	volatile int32_t t51 = -3697;

	t51 = ((x221-x222)%(x223|x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = INT64_MAX;
	uint64_t x227 = 131919175322414LLU;
	uint64_t t52 = 7253341103883429503LLU;

	t52 = ((x225-x226)%(x227|x228));

	if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = -1;
	uint64_t x230 = 56616191717578LLU;
	int8_t x232 = -1;

	t53 = ((x229-x230)%(x231|x232));

	if (t53 != 18446687457517834037LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x233 = -15;
	int8_t x234 = 0;
	static int64_t x235 = INT64_MIN;

	t54 = ((x233-x234)%(x235|x236));

	if (t54 != -15LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = -1;
	volatile uint32_t x238 = 1657U;
	uint16_t x239 = 210U;
	int16_t x240 = INT16_MAX;
	volatile uint32_t t55 = 5663686U;

	t55 = ((x237-x238)%(x239|x240));

	if (t55 != 31113U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x241 = 1U;
	int64_t x242 = -259633568LL;
	static uint32_t x243 = UINT32_MAX;
	int32_t x244 = -473135020;

	t56 = ((x241-x242)%(x243|x244));

	if (t56 != 259633569LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = -20511393428842LL;
	uint64_t x250 = UINT64_MAX;
	int64_t x251 = INT64_MIN;
	uint8_t x252 = 35U;
	static volatile uint64_t t57 = 364413LLU;

	t57 = ((x249-x250)%(x251|x252));

	if (t57 != 9223351525461346932LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x254 = -62461621;
	uint16_t x255 = 194U;
	int8_t x256 = INT8_MIN;
	static volatile int32_t t58 = 550880429;

	t58 = ((x253-x254)%(x255|x256));

	if (t58 != 30) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x257 = -356675074212813329LL;
	uint64_t x258 = 763538326357LLU;

	t59 = ((x257-x258)%(x259|x260));

	if (t59 != 18090068235958411930LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x261 = -1421;
	static uint8_t x262 = 39U;
	static int32_t x263 = -1;

	t60 = ((x261-x262)%(x263|x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x265 = 123U;
	int64_t x266 = INT64_MAX;
	int16_t x267 = -12;
	uint16_t x268 = 3967U;

	t61 = ((x265-x266)%(x267|x268));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x270 = INT16_MIN;
	uint64_t x272 = 57939982255479509LLU;
	uint64_t t62 = 84618936943011LLU;

	t62 = ((x269-x270)%(x271|x272));

	if (t62 != 30414675722400021LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = INT16_MAX;
	uint8_t x274 = UINT8_MAX;
	int16_t x275 = INT16_MIN;
	uint16_t x276 = 3341U;

	t63 = ((x273-x274)%(x275|x276));

	if (t63 != 3085) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x277 = 1583306169621327110LL;
	volatile uint16_t x278 = 701U;
	static int32_t x279 = -1;
	int64_t x280 = INT64_MIN;
	volatile int64_t t64 = -20035944LL;

	t64 = ((x277-x278)%(x279|x280));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = INT8_MAX;
	uint8_t x282 = 100U;
	int16_t x283 = -46;
	volatile int32_t t65 = 4775;

	t65 = ((x281-x282)%(x283|x284));

	if (t65 != 27) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x285 = INT8_MAX;
	int16_t x287 = INT16_MIN;
	static int32_t t66 = 18;

	t66 = ((x285-x286)%(x287|x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x290 = 3;
	volatile int64_t t67 = -43654LL;

	t67 = ((x289-x290)%(x291|x292));

	if (t67 != 2147483644LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = 240460U;
	uint8_t x294 = UINT8_MAX;
	int32_t x295 = INT32_MIN;
	uint64_t x296 = 106LLU;

	t68 = ((x293-x294)%(x295|x296));

	if (t68 != 240205LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x298 = UINT8_MAX;
	int64_t t69 = -1091174936821LL;

	t69 = ((x297-x298)%(x299|x300));

	if (t69 != -61LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x302 = 1;
	uint64_t x303 = 271784660982171203LLU;
	uint64_t t70 = 15475239665910354LLU;

	t70 = ((x301-x302)%(x303|x304));

	if (t70 != 57619LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = INT32_MAX;
	static int8_t x312 = 18;
	int64_t t71 = 2178576LL;

	t71 = ((x309-x310)%(x311|x312));

	if (t71 != 3LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = -35;
	int32_t x318 = -2190582;
	volatile uint16_t x319 = UINT16_MAX;
	int32_t x320 = -1;
	int32_t t72 = 2;

	t72 = ((x317-x318)%(x319|x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x321 = -229342349337734866LL;
	int32_t x322 = INT32_MAX;
	volatile int8_t x323 = -4;
	int8_t x324 = INT8_MAX;
	static volatile int64_t t73 = 2174485927303861LL;

	t73 = ((x321-x322)%(x323|x324));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = 198470891676LLU;
	int32_t x327 = INT32_MIN;

	t74 = ((x325-x326)%(x327|x328));

	if (t74 != 198470891677LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x329 = INT32_MIN;
	int64_t x330 = -60LL;
	uint16_t x331 = UINT16_MAX;
	int64_t x332 = INT64_MAX;
	int64_t t75 = -17841689919LL;

	t75 = ((x329-x330)%(x331|x332));

	if (t75 != -2147483588LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x333 = 966203U;
	int64_t x334 = -1LL;
	volatile uint8_t x335 = UINT8_MAX;
	int16_t x336 = -21;
	static volatile int64_t t76 = 3429675872002773462LL;

	t76 = ((x333-x334)%(x335|x336));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x337 = 63;
	uint64_t x338 = 25710067LLU;
	volatile int32_t x339 = INT32_MIN;
	int32_t x340 = INT32_MIN;
	volatile uint64_t t77 = 186521943129288LLU;

	t77 = ((x337-x338)%(x339|x340));

	if (t77 != 2121773644LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x342 = -734;
	volatile uint32_t x343 = 400558U;
	volatile uint32_t t78 = 2603483U;

	t78 = ((x341-x342)%(x343|x344));

	if (t78 != 152386U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x346 = 0;
	int64_t t79 = -2199350947927661982LL;

	t79 = ((x345-x346)%(x347|x348));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x349 = 36;
	int8_t x350 = -1;
	volatile uint64_t x351 = UINT64_MAX;
	volatile int32_t x352 = INT32_MIN;
	static volatile uint64_t t80 = 240525370085929240LLU;

	t80 = ((x349-x350)%(x351|x352));

	if (t80 != 37LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x353 = 324311623;
	static int8_t x354 = -1;
	int64_t x355 = -1LL;
	int64_t x356 = INT64_MAX;

	t81 = ((x353-x354)%(x355|x356));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x357 = INT16_MAX;
	volatile int32_t x359 = -1;
	uint64_t x360 = 2574253567623705LLU;
	volatile uint64_t t82 = 9823613265018LLU;

	t82 = ((x357-x358)%(x359|x360));

	if (t82 != 32768LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = 0;
	static int16_t x362 = 1;
	uint8_t x363 = UINT8_MAX;
	int8_t x364 = -1;
	volatile int32_t t83 = -24319010;

	t83 = ((x361-x362)%(x363|x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x365 = 0U;
	int32_t x367 = -17;
	static int32_t x368 = INT32_MIN;
	volatile int32_t t84 = 1757;

	t84 = ((x365-x366)%(x367|x368));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x370 = INT8_MIN;
	uint32_t x371 = 35544U;
	uint64_t x372 = UINT64_MAX;

	t85 = ((x369-x370)%(x371|x372));

	if (t85 != 961592632LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = INT64_MAX;
	uint16_t x374 = 1398U;
	volatile int64_t x375 = INT64_MIN;
	volatile int64_t t86 = -31LL;

	t86 = ((x373-x374)%(x375|x376));

	if (t86 != 8302LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x377 = 325437U;
	static volatile int8_t x378 = -1;
	volatile int16_t x379 = 11;
	static int16_t x380 = INT16_MIN;

	t87 = ((x377-x378)%(x379|x380));

	if (t87 != 325438U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = INT8_MAX;
	int8_t x383 = INT8_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t88 = 1268043;

	t88 = ((x381-x382)%(x383|x384));

	if (t88 != -32895) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x385 = INT32_MIN;
	int8_t x386 = INT8_MIN;
	int16_t x387 = -437;
	volatile int32_t x388 = 23644;

	t89 = ((x385-x386)%(x387|x388));

	if (t89 != -240) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x389 = -1;
	int16_t x390 = -277;
	static uint64_t x392 = 22003176387509LLU;
	static volatile uint64_t t90 = 2802724108717LLU;

	t90 = ((x389-x390)%(x391|x392));

	if (t90 != 276LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x393 = 21281151728162LLU;
	uint64_t x394 = UINT64_MAX;
	int32_t x395 = INT32_MIN;
	static volatile uint64_t t91 = 1017660249LLU;

	t91 = ((x393-x394)%(x395|x396));

	if (t91 != 21281151728163LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x397 = INT64_MIN;
	static volatile int32_t x398 = INT32_MIN;
	static volatile uint8_t x400 = 124U;
	static int64_t t92 = 27LL;

	t92 = ((x397-x398)%(x399|x400));

	if (t92 != -16693388LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x401 = 240U;
	uint16_t x402 = 28U;
	uint64_t x403 = 283203443422491131LLU;

	t93 = ((x401-x402)%(x403|x404));

	if (t93 != 212LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x406 = 1U;
	uint8_t x407 = 45U;
	uint32_t x408 = UINT32_MAX;
	uint32_t t94 = 209230U;

	t94 = ((x405-x406)%(x407|x408));

	if (t94 != 675U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x409 = UINT16_MAX;
	int16_t x411 = INT16_MIN;
	uint8_t x412 = 3U;
	int64_t t95 = 88804239LL;

	t95 = ((x409-x410)%(x411|x412));

	if (t95 != 6LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x413 = 2LLU;
	int8_t x414 = INT8_MIN;
	int64_t x415 = INT64_MIN;
	uint16_t x416 = 0U;
	static uint64_t t96 = 978292LLU;

	t96 = ((x413-x414)%(x415|x416));

	if (t96 != 130LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x417 = UINT32_MAX;
	int16_t x419 = INT16_MIN;
	uint32_t x420 = 15938156U;
	uint32_t t97 = 2265U;

	t97 = ((x417-x418)%(x419|x420));

	if (t97 != 2147483647U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x421 = UINT8_MAX;
	static uint8_t x423 = 10U;
	int16_t x424 = INT16_MAX;

	t98 = ((x421-x422)%(x423|x424));

	if (t98 != 240) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x425 = UINT32_MAX;
	int64_t x426 = INT64_MAX;
	volatile int32_t x428 = -1;
	volatile int64_t t99 = 38LL;

	t99 = ((x425-x426)%(x427|x428));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

