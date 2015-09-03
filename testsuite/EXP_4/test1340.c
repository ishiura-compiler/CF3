#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x1 = INT32_MAX;
int64_t x21 = -2011915504LL;
static int8_t x22 = -7;
int8_t x24 = -5;
volatile uint32_t x28 = UINT32_MAX;
volatile int32_t t6 = 1;
int32_t x39 = INT32_MIN;
static uint64_t x40 = UINT64_MAX;
volatile uint64_t x41 = 4279390969468491877LLU;
int8_t x42 = -11;
uint64_t x55 = UINT64_MAX;
int16_t x57 = -897;
uint16_t x59 = 272U;
uint16_t x61 = UINT16_MAX;
volatile int64_t x64 = INT64_MIN;
volatile int32_t t19 = -154687;
int32_t x90 = -1;
int8_t x92 = INT8_MIN;
volatile uint16_t x100 = UINT16_MAX;
volatile uint64_t t22 = 423756155LLU;
int32_t x104 = -186;
int64_t t23 = 161739LL;
uint64_t t24 = 21417507070998583LLU;
volatile uint32_t x116 = 599222702U;
uint64_t x119 = UINT64_MAX;
static volatile int32_t t26 = 12151007;
volatile int8_t x129 = INT8_MAX;
volatile int32_t x135 = -4221244;
int8_t x147 = INT8_MIN;
static int32_t x148 = 3;
volatile uint32_t t33 = 20127U;
static volatile int16_t x160 = -18;
static volatile uint16_t x161 = UINT16_MAX;
int8_t x166 = INT8_MIN;
static int32_t t37 = -616;
int64_t x173 = -14558807LL;
int16_t x176 = 4075;
static volatile int64_t t38 = -1776491384806557LL;
uint16_t x179 = 16U;
volatile int16_t x180 = 1;
volatile int64_t x186 = 1LL;
uint8_t x188 = 52U;
static int64_t t41 = 1090081939610179LL;
int32_t x190 = -5321364;
volatile int8_t x196 = INT8_MIN;
int32_t t43 = 416002;
int16_t x203 = INT16_MIN;
int16_t x204 = INT16_MIN;
volatile int16_t x205 = INT16_MAX;
static volatile uint16_t x207 = 1U;
static int32_t x210 = INT32_MIN;
int8_t x213 = INT8_MIN;
volatile uint32_t x232 = UINT32_MAX;
static uint64_t x235 = 57993469191197LLU;
int16_t x239 = -154;
int16_t x242 = INT16_MAX;
static uint32_t x246 = 202U;
volatile uint8_t x248 = 69U;
uint32_t x259 = 35552164U;
static int32_t t56 = 2;
volatile int16_t x268 = -249;
int16_t x269 = INT16_MIN;
volatile int8_t x276 = 0;
int8_t x283 = INT8_MAX;
uint64_t t60 = 498271380128LLU;
int8_t x287 = INT8_MIN;
volatile int8_t x291 = INT8_MAX;
int16_t x299 = -14445;
uint64_t x300 = 52536242LLU;
int64_t t63 = 42797981LL;
uint32_t x301 = 64287U;
static volatile int64_t t64 = 1824191282LL;
volatile int64_t x306 = -1LL;
int16_t x308 = -1;
int8_t x310 = INT8_MIN;
volatile uint64_t x311 = 1277LLU;
uint64_t x316 = 4094711112LLU;
volatile int32_t t67 = -568372916;
int64_t x324 = -1LL;
volatile int32_t t68 = 10906;
uint64_t x327 = UINT64_MAX;
int32_t x328 = INT32_MAX;
volatile uint32_t t69 = 7433U;
int32_t x333 = -1;
int32_t x340 = -12735;
int32_t t73 = 10;
int16_t x361 = -2;
int16_t x367 = -71;
volatile int32_t t77 = -382154920;
int8_t x371 = INT8_MIN;
volatile int32_t t78 = 1560774;
int8_t x375 = INT8_MIN;
static int64_t t79 = 23596237LL;
static uint8_t x385 = UINT8_MAX;
static int8_t x386 = -38;
int16_t x389 = INT16_MIN;
int16_t x391 = INT16_MIN;
static uint64_t x401 = 1LLU;
int32_t x411 = -1;
int8_t x412 = INT8_MIN;
int32_t t89 = -200875176;
static int16_t x422 = 1;
int32_t x428 = INT32_MIN;
uint64_t x435 = 14LLU;
static volatile int8_t x440 = INT8_MAX;
int64_t t94 = 288963651LL;
volatile int16_t x444 = -2;
static uint64_t t98 = 35LLU;


void f0(void) {
	int64_t x2 = INT64_MIN;
	uint64_t x3 = UINT64_MAX;
	int32_t x4 = INT32_MIN;
	volatile int64_t t0 = 3787421533751442579LL;

	t0 = (x1+(x2^(x3==x4)));

	if (t0 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 4666U;
	volatile uint16_t x10 = 14957U;
	volatile int16_t x11 = -2;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t1 = -35347;

	t1 = (x9+(x10^(x11==x12)));

	if (t1 != 19623) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = UINT32_MAX;
	int64_t x14 = -24562742373257465LL;
	int32_t x15 = INT32_MAX;
	int32_t x16 = -1008;
	int64_t t2 = -1332LL;

	t2 = (x13+(x14^(x15==x16)));

	if (t2 != -24562738078290170LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x23 = 863;
	volatile int64_t t3 = -4865LL;

	t3 = (x21+(x22^(x23==x24)));

	if (t3 != -2011915511LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 3820735U;
	uint16_t x26 = UINT16_MAX;
	uint8_t x27 = 16U;
	volatile uint32_t t4 = 0U;

	t4 = (x25+(x26^(x27==x28)));

	if (t4 != 3886270U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -3358352LL;
	int64_t x30 = 109LL;
	uint32_t x31 = 1U;
	uint64_t x32 = 104221551051LLU;
	static int64_t t5 = -16263614828LL;

	t5 = (x29+(x30^(x31==x32)));

	if (t5 != -3358243LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x33 = -447477;
	uint16_t x34 = 595U;
	int32_t x35 = -11158660;
	int32_t x36 = -3459;

	t6 = (x33+(x34^(x35==x36)));

	if (t6 != -446882) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 897861477148662755LLU;
	static volatile uint16_t x38 = 4871U;
	uint64_t t7 = 24911167980059713LLU;

	t7 = (x37+(x38^(x39==x40)));

	if (t7 != 897861477148667626LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x43 = -1;
	int32_t x44 = 12;
	volatile uint64_t t8 = 90861147019466LLU;

	t8 = (x41+(x42^(x43==x44)));

	if (t8 != 4279390969468491866LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MAX;
	int8_t x46 = 45;
	int8_t x47 = 48;
	int32_t x48 = INT32_MIN;
	int32_t t9 = -59381660;

	t9 = (x45+(x46^(x47==x48)));

	if (t9 != 172) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 7U;
	int32_t x50 = -1;
	volatile int64_t x51 = 824163213LL;
	volatile int16_t x52 = INT16_MIN;
	static volatile int32_t t10 = 261880137;

	t10 = (x49+(x50^(x51==x52)));

	if (t10 != 6) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	static int32_t x54 = INT32_MAX;
	int32_t x56 = -1;
	uint64_t t11 = 1485456655407LLU;

	t11 = (x53+(x54^(x55==x56)));

	if (t11 != 2147483645LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x58 = UINT8_MAX;
	int8_t x60 = INT8_MIN;
	volatile int32_t t12 = -14;

	t12 = (x57+(x58^(x59==x60)));

	if (t12 != -642) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = 211589025502026LL;
	volatile uint32_t t13 = 311373897U;

	t13 = (x61+(x62^(x63==x64)));

	if (t13 != 65534U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x65 = UINT32_MAX;
	uint16_t x66 = 78U;
	int64_t x67 = -16531042586513LL;
	int64_t x68 = -806000079834LL;
	uint32_t t14 = 23921887U;

	t14 = (x65+(x66^(x67==x68)));

	if (t14 != 77U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MIN;
	uint32_t x70 = 1512U;
	volatile uint8_t x71 = 4U;
	int16_t x72 = -1;
	volatile uint32_t t15 = 35614889U;

	t15 = (x69+(x70^(x71==x72)));

	if (t15 != 4294936040U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x73 = INT16_MIN;
	uint8_t x74 = 2U;
	int32_t x75 = -1;
	int32_t x76 = 64410950;
	volatile int32_t t16 = -2;

	t16 = (x73+(x74^(x75==x76)));

	if (t16 != -32766) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x77 = UINT8_MAX;
	int32_t x78 = -1764669;
	static int64_t x79 = INT64_MIN;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t17 = -4091;

	t17 = (x77+(x78^(x79==x80)));

	if (t17 != -1764414) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	static int8_t x82 = 30;
	volatile int16_t x83 = -1;
	volatile int16_t x84 = 178;
	static int32_t t18 = -6;

	t18 = (x81+(x82^(x83==x84)));

	if (t18 != -32738) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = 994;
	static int32_t x86 = INT32_MIN;
	volatile int64_t x87 = INT64_MIN;
	uint64_t x88 = 24503793LLU;

	t19 = (x85+(x86^(x87==x88)));

	if (t19 != -2147482654) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = 18;
	volatile uint32_t x91 = UINT32_MAX;
	volatile int32_t t20 = 529;

	t20 = (x89+(x90^(x91==x92)));

	if (t20 != 17) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	int64_t x94 = INT64_MAX;
	int32_t x95 = INT32_MIN;
	uint16_t x96 = 4U;
	int64_t t21 = -1734LL;

	t21 = (x93+(x94^(x95==x96)));

	if (t21 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x97 = INT16_MAX;
	volatile uint64_t x98 = UINT64_MAX;
	int16_t x99 = INT16_MAX;

	t22 = (x97+(x98^(x99==x100)));

	if (t22 != 32766LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	uint8_t x102 = 56U;
	int16_t x103 = 575;

	t23 = (x101+(x102^(x103==x104)));

	if (t23 != -9223372036854775752LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x105 = INT32_MIN;
	uint64_t x106 = 14633161185368588LLU;
	uint64_t x107 = 11654711LLU;
	int16_t x108 = -1;

	t24 = (x105+(x106^(x107==x108)));

	if (t24 != 14633159037884940LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 5U;
	static int16_t x114 = INT16_MAX;
	volatile int8_t x115 = 5;
	int32_t t25 = 24;

	t25 = (x113+(x114^(x115==x116)));

	if (t25 != 32772) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	int8_t x120 = INT8_MAX;

	t26 = (x117+(x118^(x119==x120)));

	if (t26 != -256) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = -1;
	volatile int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MIN;
	int8_t x124 = INT8_MIN;
	volatile int32_t t27 = INT32_MIN;

	t27 = (x121+(x122^(x123==x124)));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x125 = INT64_MIN;
	uint64_t x126 = 1360354745LLU;
	uint8_t x127 = UINT8_MAX;
	int16_t x128 = INT16_MIN;
	uint64_t t28 = 2298LLU;

	t28 = (x125+(x126^(x127==x128)));

	if (t28 != 9223372038215130553LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x130 = 66U;
	static uint16_t x131 = UINT16_MAX;
	uint16_t x132 = 307U;
	volatile int32_t t29 = 661428;

	t29 = (x129+(x130^(x131==x132)));

	if (t29 != 193) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = -1;
	static int64_t x134 = 30401LL;
	int8_t x136 = -41;
	static int64_t t30 = -49837805798511860LL;

	t30 = (x133+(x134^(x135==x136)));

	if (t30 != 30400LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x137 = 6U;
	int8_t x138 = 1;
	volatile uint32_t x139 = 25U;
	int8_t x140 = INT8_MIN;
	volatile int32_t t31 = 2792;

	t31 = (x137+(x138^(x139==x140)));

	if (t31 != 7) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = 289;
	static int32_t x146 = -1;
	volatile int32_t t32 = -1180;

	t32 = (x145+(x146^(x147==x148)));

	if (t32 != 288) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = 93U;
	volatile int16_t x150 = INT16_MAX;
	uint32_t x151 = UINT32_MAX;
	static int16_t x152 = 1804;

	t33 = (x149+(x150^(x151==x152)));

	if (t33 != 32860U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 2U;
	uint8_t x154 = 99U;
	uint8_t x155 = UINT8_MAX;
	static int16_t x156 = 6;
	uint32_t t34 = 7U;

	t34 = (x153+(x154^(x155==x156)));

	if (t34 != 101U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 1U;
	int8_t x158 = INT8_MAX;
	static int16_t x159 = INT16_MAX;
	int32_t t35 = 117334805;

	t35 = (x157+(x158^(x159==x160)));

	if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x162 = -42;
	int16_t x163 = -1;
	static volatile uint32_t x164 = 45254U;
	volatile int32_t t36 = -3327;

	t36 = (x161+(x162^(x163==x164)));

	if (t36 != 65493) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x167 = INT64_MIN;
	volatile int16_t x168 = INT16_MIN;

	t37 = (x165+(x166^(x167==x168)));

	if (t37 != 65407) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x174 = -1;
	int16_t x175 = INT16_MIN;

	t38 = (x173+(x174^(x175==x176)));

	if (t38 != -14558808LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x177 = 757U;
	int8_t x178 = -1;
	int32_t t39 = -69191;

	t39 = (x177+(x178^(x179==x180)));

	if (t39 != 756) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x181 = 12047LLU;
	int32_t x182 = INT32_MIN;
	static volatile int16_t x183 = -3;
	int16_t x184 = -31;
	uint64_t t40 = 0LLU;

	t40 = (x181+(x182^(x183==x184)));

	if (t40 != 18446744071562080015LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x185 = 1U;
	volatile int64_t x187 = INT64_MAX;

	t41 = (x185+(x186^(x187==x188)));

	if (t41 != 2LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x189 = INT64_MAX;
	volatile int8_t x191 = 1;
	volatile int64_t x192 = -3LL;
	static int64_t t42 = -3862412943619400005LL;

	t42 = (x189+(x190^(x191==x192)));

	if (t42 != 9223372036849454443LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = -1;
	uint16_t x194 = UINT16_MAX;
	int8_t x195 = INT8_MIN;

	t43 = (x193+(x194^(x195==x196)));

	if (t43 != 65533) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = 6832U;
	static volatile int16_t x198 = -2;
	uint8_t x199 = UINT8_MAX;
	int16_t x200 = -1;
	int32_t t44 = 944114286;

	t44 = (x197+(x198^(x199==x200)));

	if (t44 != 6830) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x201 = -1305;
	int16_t x202 = 17;
	volatile int32_t t45 = -123311246;

	t45 = (x201+(x202^(x203==x204)));

	if (t45 != -1289) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x206 = UINT8_MAX;
	int16_t x208 = 1433;
	int32_t t46 = 51;

	t46 = (x205+(x206^(x207==x208)));

	if (t46 != 33022) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x209 = -1LL;
	volatile uint64_t x211 = 292414LLU;
	uint8_t x212 = UINT8_MAX;
	volatile int64_t t47 = -187007LL;

	t47 = (x209+(x210^(x211==x212)));

	if (t47 != -2147483649LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x214 = 8U;
	uint32_t x215 = 24065970U;
	static int64_t x216 = -1LL;
	volatile int32_t t48 = 1;

	t48 = (x213+(x214^(x215==x216)));

	if (t48 != -120) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x221 = 0LLU;
	uint8_t x222 = 37U;
	int16_t x223 = INT16_MAX;
	volatile int64_t x224 = -1163825117803966915LL;
	uint64_t t49 = 1049575LLU;

	t49 = (x221+(x222^(x223==x224)));

	if (t49 != 37LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x229 = INT8_MAX;
	volatile int8_t x230 = 22;
	int64_t x231 = INT64_MIN;
	int32_t t50 = -18949488;

	t50 = (x229+(x230^(x231==x232)));

	if (t50 != 149) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x233 = 269568U;
	int32_t x234 = INT32_MIN;
	uint64_t x236 = 6424341LLU;
	uint32_t t51 = 1189U;

	t51 = (x233+(x234^(x235==x236)));

	if (t51 != 2147753216U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x237 = 1965964900LLU;
	int8_t x238 = INT8_MIN;
	int16_t x240 = INT16_MIN;
	volatile uint64_t t52 = 6034186354071170LLU;

	t52 = (x237+(x238^(x239==x240)));

	if (t52 != 1965964772LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = INT8_MAX;
	int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MIN;
	int32_t t53 = -2233;

	t53 = (x241+(x242^(x243==x244)));

	if (t53 != 32894) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x245 = INT32_MIN;
	static uint32_t x247 = UINT32_MAX;
	uint32_t t54 = 619454071U;

	t54 = (x245+(x246^(x247==x248)));

	if (t54 != 2147483850U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x257 = INT16_MIN;
	static int32_t x258 = -1;
	volatile uint64_t x260 = 2139419328343610LLU;
	static int32_t t55 = 4866;

	t55 = (x257+(x258^(x259==x260)));

	if (t55 != -32769) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x261 = 13752U;
	int32_t x262 = INT32_MIN;
	uint16_t x263 = UINT16_MAX;
	uint64_t x264 = 16LLU;

	t56 = (x261+(x262^(x263==x264)));

	if (t56 != -2147469896) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = INT16_MIN;
	static uint32_t x266 = UINT32_MAX;
	volatile int32_t x267 = 1467;
	volatile uint32_t t57 = 6U;

	t57 = (x265+(x266^(x267==x268)));

	if (t57 != 4294934527U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x270 = -40;
	volatile uint32_t x271 = 321406427U;
	int8_t x272 = -1;
	volatile int32_t t58 = 109800754;

	t58 = (x269+(x270^(x271==x272)));

	if (t58 != -32808) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = -1;
	static uint64_t x274 = 52965808544606459LLU;
	volatile int16_t x275 = INT16_MAX;
	static uint64_t t59 = 129467110LLU;

	t59 = (x273+(x274^(x275==x276)));

	if (t59 != 52965808544606458LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x281 = UINT64_MAX;
	int32_t x282 = INT32_MAX;
	int16_t x284 = 293;

	t60 = (x281+(x282^(x283==x284)));

	if (t60 != 2147483646LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x285 = INT16_MAX;
	volatile int64_t x286 = INT64_MIN;
	static uint8_t x288 = UINT8_MAX;
	volatile int64_t t61 = -254947373281LL;

	t61 = (x285+(x286^(x287==x288)));

	if (t61 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x289 = 2281545U;
	uint16_t x290 = UINT16_MAX;
	int16_t x292 = 4518;
	static uint32_t t62 = 49U;

	t62 = (x289+(x290^(x291==x292)));

	if (t62 != 2347080U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x297 = INT64_MIN;
	uint16_t x298 = UINT16_MAX;

	t63 = (x297+(x298^(x299==x300)));

	if (t63 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x302 = -170170LL;
	uint8_t x303 = UINT8_MAX;
	int8_t x304 = -1;

	t64 = (x301+(x302^(x303==x304)));

	if (t64 != -105883LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = 60;
	int64_t x307 = 28987191154850869LL;
	int64_t t65 = -15871230726967892LL;

	t65 = (x305+(x306^(x307==x308)));

	if (t65 != 59LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x309 = 0U;
	static uint8_t x312 = UINT8_MAX;
	int32_t t66 = -1;

	t66 = (x309+(x310^(x311==x312)));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = INT32_MAX;
	int32_t x314 = INT32_MIN;
	int8_t x315 = 1;

	t67 = (x313+(x314^(x315==x316)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x321 = 0U;
	uint8_t x322 = UINT8_MAX;
	uint8_t x323 = 54U;

	t68 = (x321+(x322^(x323==x324)));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x325 = -1;
	uint32_t x326 = 4617U;

	t69 = (x325+(x326^(x327==x328)));

	if (t69 != 4616U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x329 = 436U;
	uint16_t x330 = 17U;
	static int32_t x331 = INT32_MAX;
	static uint8_t x332 = 12U;
	volatile int32_t t70 = 36768060;

	t70 = (x329+(x330^(x331==x332)));

	if (t70 != 453) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x334 = INT32_MAX;
	uint16_t x335 = 211U;
	int64_t x336 = -1LL;
	static int32_t t71 = -245;

	t71 = (x333+(x334^(x335==x336)));

	if (t71 != 2147483646) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x337 = 450939LLU;
	static uint8_t x338 = 22U;
	int8_t x339 = 0;
	volatile uint64_t t72 = 1524LLU;

	t72 = (x337+(x338^(x339==x340)));

	if (t72 != 450961LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x341 = INT32_MIN;
	volatile int16_t x342 = INT16_MAX;
	static int32_t x343 = INT32_MIN;
	volatile int64_t x344 = INT64_MAX;

	t73 = (x341+(x342^(x343==x344)));

	if (t73 != -2147450881) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x353 = -25;
	int16_t x354 = 13;
	static volatile int64_t x355 = -1122676902934LL;
	int8_t x356 = INT8_MIN;
	int32_t t74 = 12;

	t74 = (x353+(x354^(x355==x356)));

	if (t74 != -12) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x357 = INT8_MIN;
	int16_t x358 = INT16_MIN;
	uint32_t x359 = 0U;
	int64_t x360 = INT64_MIN;
	static int32_t t75 = 24430856;

	t75 = (x357+(x358^(x359==x360)));

	if (t75 != -32896) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x362 = 21005LL;
	uint64_t x363 = UINT64_MAX;
	static volatile uint8_t x364 = UINT8_MAX;
	volatile int64_t t76 = -92857358076549591LL;

	t76 = (x361+(x362^(x363==x364)));

	if (t76 != 21003LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x365 = 14126U;
	int16_t x366 = 30;
	uint64_t x368 = 2233943009020074371LLU;

	t77 = (x365+(x366^(x367==x368)));

	if (t77 != 14156) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x369 = 1U;
	int8_t x370 = -1;
	static int64_t x372 = INT64_MIN;

	t78 = (x369+(x370^(x371==x372)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x373 = 1134LL;
	volatile int64_t x374 = -1LL;
	int32_t x376 = -126555;

	t79 = (x373+(x374^(x375==x376)));

	if (t79 != 1133LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x377 = -1;
	uint8_t x378 = 122U;
	uint16_t x379 = UINT16_MAX;
	int8_t x380 = INT8_MIN;
	int32_t t80 = -15780;

	t80 = (x377+(x378^(x379==x380)));

	if (t80 != 121) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x381 = INT64_MIN;
	int16_t x382 = INT16_MAX;
	int64_t x383 = INT64_MIN;
	int8_t x384 = -1;
	volatile int64_t t81 = 335750409572LL;

	t81 = (x381+(x382^(x383==x384)));

	if (t81 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x387 = UINT32_MAX;
	static int8_t x388 = INT8_MIN;
	static volatile int32_t t82 = 28549647;

	t82 = (x385+(x386^(x387==x388)));

	if (t82 != 217) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x390 = 12U;
	volatile int32_t x392 = INT32_MIN;
	static volatile int32_t t83 = 4;

	t83 = (x389+(x390^(x391==x392)));

	if (t83 != -32756) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x393 = 43U;
	static int16_t x394 = 2304;
	static int16_t x395 = 1;
	volatile int16_t x396 = -1;
	volatile int32_t t84 = 6789747;

	t84 = (x393+(x394^(x395==x396)));

	if (t84 != 2347) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x397 = -1LL;
	uint32_t x398 = 108040U;
	int16_t x399 = INT16_MIN;
	volatile int64_t x400 = 12029360651997357LL;
	volatile int64_t t85 = 31LL;

	t85 = (x397+(x398^(x399==x400)));

	if (t85 != 108039LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x402 = INT16_MIN;
	uint64_t x403 = UINT64_MAX;
	int8_t x404 = -1;
	uint64_t t86 = 10440822805078LLU;

	t86 = (x401+(x402^(x403==x404)));

	if (t86 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x409 = 454U;
	int16_t x410 = INT16_MIN;
	uint32_t t87 = 0U;

	t87 = (x409+(x410^(x411==x412)));

	if (t87 != 4294934982U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x413 = 1;
	int32_t x414 = -51;
	uint64_t x415 = 62541384405243LLU;
	int64_t x416 = INT64_MIN;
	int32_t t88 = 1584;

	t88 = (x413+(x414^(x415==x416)));

	if (t88 != -50) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x417 = -12;
	int8_t x418 = INT8_MIN;
	uint16_t x419 = 289U;
	static int32_t x420 = INT32_MIN;

	t89 = (x417+(x418^(x419==x420)));

	if (t89 != -140) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = -1;
	int16_t x423 = -98;
	int16_t x424 = -1;
	static int32_t t90 = -96;

	t90 = (x421+(x422^(x423==x424)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = -1;
	int32_t x426 = -131607541;
	int8_t x427 = INT8_MAX;
	int32_t t91 = 54;

	t91 = (x425+(x426^(x427==x428)));

	if (t91 != -131607542) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x429 = 215461260U;
	int64_t x430 = 1438LL;
	int32_t x431 = INT32_MAX;
	int16_t x432 = 1231;
	volatile int64_t t92 = -17400520LL;

	t92 = (x429+(x430^(x431==x432)));

	if (t92 != 215462698LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x433 = -41;
	uint64_t x434 = UINT64_MAX;
	uint16_t x436 = 1U;
	uint64_t t93 = 2809717482271LLU;

	t93 = (x433+(x434^(x435==x436)));

	if (t93 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x437 = INT64_MIN;
	uint16_t x438 = 98U;
	int16_t x439 = INT16_MIN;

	t94 = (x437+(x438^(x439==x440)));

	if (t94 != -9223372036854775710LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x441 = -1LL;
	int16_t x442 = INT16_MIN;
	static uint64_t x443 = UINT64_MAX;
	static int64_t t95 = -95744366LL;

	t95 = (x441+(x442^(x443==x444)));

	if (t95 != -32769LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x445 = INT8_MIN;
	uint16_t x446 = 439U;
	uint32_t x447 = UINT32_MAX;
	static int16_t x448 = -1;
	int32_t t96 = -8453;

	t96 = (x445+(x446^(x447==x448)));

	if (t96 != 310) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x449 = 234634049700687LL;
	int16_t x450 = 32;
	volatile int64_t x451 = INT64_MIN;
	int32_t x452 = INT32_MIN;
	int64_t t97 = -155LL;

	t97 = (x449+(x450^(x451==x452)));

	if (t97 != 234634049700719LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x453 = UINT64_MAX;
	static int32_t x454 = 10;
	volatile int16_t x455 = -1;
	int32_t x456 = 457;

	t98 = (x453+(x454^(x455==x456)));

	if (t98 != 9LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x457 = UINT32_MAX;
	volatile uint16_t x458 = 81U;
	int8_t x459 = INT8_MAX;
	volatile int16_t x460 = 0;
	volatile uint32_t t99 = 26U;

	t99 = (x457+(x458^(x459==x460)));

	if (t99 != 80U) { NG(); } else { ; }
	
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

