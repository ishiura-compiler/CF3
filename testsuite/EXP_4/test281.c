#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = INT64_MIN;
volatile int32_t x5 = INT32_MIN;
int32_t x11 = -1;
int32_t t2 = -44621032;
volatile int8_t x16 = INT8_MAX;
int16_t x19 = INT16_MIN;
int32_t x21 = INT32_MIN;
int64_t x23 = 345LL;
volatile int8_t x24 = INT8_MAX;
int32_t t5 = 1586;
volatile uint16_t x28 = 2703U;
int8_t x38 = INT8_MIN;
volatile int32_t t8 = -19402;
int16_t x44 = INT16_MIN;
volatile int32_t t9 = 2275;
int8_t x46 = INT8_MAX;
static uint64_t x48 = 2761207531LLU;
uint64_t x53 = UINT64_MAX;
int64_t x58 = -13608589493793LL;
int32_t x61 = -1;
int32_t x62 = INT32_MIN;
int8_t x75 = -1;
int64_t x76 = INT64_MIN;
uint8_t x77 = UINT8_MAX;
static volatile int32_t t17 = -1361029;
int64_t x82 = INT64_MAX;
uint32_t x85 = 981U;
int32_t t19 = 2;
int64_t x90 = INT64_MIN;
int32_t t21 = 1624;
int32_t x98 = 89;
uint64_t x107 = 820215916850460359LLU;
uint16_t x108 = 16U;
volatile uint64_t x116 = 2013219LLU;
uint16_t x123 = 111U;
int16_t x124 = INT16_MAX;
uint32_t x129 = 848348U;
int32_t t29 = -2;
int8_t x135 = -3;
int16_t x146 = INT16_MAX;
uint16_t x148 = 590U;
static volatile int32_t t33 = -949;
volatile int32_t t34 = -2086;
volatile int8_t x166 = INT8_MIN;
int8_t x167 = -3;
int64_t x179 = -1918486584LL;
int32_t t39 = 0;
int16_t x181 = INT16_MAX;
uint32_t x182 = UINT32_MAX;
int16_t x186 = INT16_MIN;
uint32_t x189 = 66800U;
static uint16_t x191 = 21U;
int64_t x193 = -1LL;
uint64_t x196 = 48801933LLU;
volatile int32_t t43 = 886;
static int16_t x197 = 0;
volatile int32_t t44 = 42;
int32_t x207 = 96;
static uint8_t x210 = UINT8_MAX;
static int8_t x212 = INT8_MIN;
static int32_t t47 = 100798179;
int64_t x215 = -1LL;
static int8_t x216 = -1;
volatile int64_t x217 = 135LL;
static int8_t x223 = INT8_MAX;
static volatile int32_t t50 = -147278;
int64_t x225 = 171454075LL;
uint64_t x226 = 166558882561552927LLU;
volatile int32_t t51 = 4;
int16_t x232 = INT16_MIN;
uint16_t x243 = UINT16_MAX;
volatile int32_t t54 = -14262686;
static uint64_t x246 = 31510LLU;
int16_t x248 = 1;
int32_t x250 = -1;
static volatile int64_t x255 = -1LL;
static volatile int32_t t58 = 310;
int8_t x267 = -1;
int32_t x268 = INT32_MAX;
int32_t t60 = 769;
int16_t x271 = INT16_MAX;
uint16_t x274 = UINT16_MAX;
int16_t x279 = -1;
int32_t t63 = -1592;
static int16_t x287 = INT16_MIN;
static volatile int64_t x295 = INT64_MIN;
int8_t x296 = -1;
static volatile int32_t t67 = -21;
int64_t x302 = -93071941490482LL;
uint16_t x304 = 499U;
static volatile int32_t t69 = 111011854;
int16_t x313 = INT16_MAX;
volatile uint32_t x316 = 114U;
int32_t t73 = -2550;
int8_t x326 = INT8_MIN;
int64_t x334 = 1893427101077366016LL;
uint8_t x339 = 7U;
static int16_t x342 = -415;
volatile int64_t x343 = INT64_MIN;
static volatile int32_t t77 = -291;
int16_t x347 = INT16_MAX;
static volatile uint16_t x348 = 63U;
volatile uint64_t x349 = 5204854709394672895LLU;
int8_t x358 = 13;
volatile int32_t t81 = 0;
int64_t x363 = -1LL;
static int16_t x387 = INT16_MIN;
int8_t x390 = 0;
static int64_t x391 = INT64_MAX;
uint16_t x402 = 25U;
uint8_t x407 = 7U;
int32_t t92 = 15831823;
uint16_t x412 = UINT16_MAX;
volatile int32_t t93 = 66;
int32_t x413 = INT32_MIN;
volatile uint16_t x416 = UINT16_MAX;
int64_t x425 = 3251667LL;
int16_t x426 = INT16_MIN;
volatile int64_t x427 = -13102817LL;
uint8_t x428 = 0U;
volatile int32_t t97 = -13522;
volatile int64_t x430 = -31359881915194LL;
static volatile int32_t t99 = 38;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MIN;
	int8_t x4 = -26;
	int32_t t0 = -8206145;

	t0 = (x1==(x2<(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x6 = 634LLU;
	uint32_t x7 = UINT32_MAX;
	uint32_t x8 = 896067U;
	int32_t t1 = -1825;

	t1 = (x5==(x6<(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	volatile int16_t x10 = INT16_MAX;
	int8_t x12 = INT8_MIN;

	t2 = (x9==(x10<(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	volatile int8_t x14 = -15;
	uint8_t x15 = UINT8_MAX;
	static volatile int32_t t3 = 4052706;

	t3 = (x13==(x14<(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	uint16_t x18 = 5U;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -497;

	t4 = (x17==(x18<(x19-x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;

	t5 = (x21==(x22<(x23-x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	uint64_t x26 = 29LLU;
	uint16_t x27 = 5815U;
	volatile int32_t t6 = 1;

	t6 = (x25==(x26<(x27-x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = 11907760493LL;
	volatile uint32_t x34 = UINT32_MAX;
	int64_t x35 = -233680833194104208LL;
	static uint8_t x36 = 62U;
	static int32_t t7 = -15470027;

	t7 = (x33==(x34<(x35-x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	int8_t x39 = 1;
	volatile uint32_t x40 = 46978U;

	t8 = (x37==(x38<(x39-x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 10390U;
	uint16_t x42 = 0U;
	static int32_t x43 = 6;

	t9 = (x41==(x42<(x43-x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 13037U;
	uint64_t x47 = UINT64_MAX;
	volatile int32_t t10 = 173007;

	t10 = (x45==(x46<(x47-x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x49 = 14U;
	int16_t x50 = 224;
	volatile uint8_t x51 = 16U;
	uint8_t x52 = UINT8_MAX;
	int32_t t11 = 130436;

	t11 = (x49==(x50<(x51-x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x54 = 38630699LLU;
	uint16_t x55 = 1184U;
	int64_t x56 = -1LL;
	int32_t t12 = 379;

	t12 = (x53==(x54<(x55-x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x57 = -4805327;
	uint32_t x59 = UINT32_MAX;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t13 = 10562350;

	t13 = (x57==(x58<(x59-x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x63 = 13;
	volatile uint8_t x64 = 107U;
	int32_t t14 = 0;

	t14 = (x61==(x62<(x63-x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MAX;
	uint32_t x66 = 79876150U;
	uint32_t x67 = UINT32_MAX;
	int64_t x68 = -1LL;
	int32_t t15 = -123;

	t15 = (x65==(x66<(x67-x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	static uint64_t x74 = UINT64_MAX;
	volatile int32_t t16 = 14352207;

	t16 = (x73==(x74<(x75-x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x78 = 24697704950LL;
	uint64_t x79 = 127312147486797LLU;
	int32_t x80 = INT32_MIN;

	t17 = (x77==(x78<(x79-x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = UINT16_MAX;
	uint16_t x83 = UINT16_MAX;
	int64_t x84 = -1LL;
	static int32_t t18 = 2222;

	t18 = (x81==(x82<(x83-x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x86 = INT32_MAX;
	int32_t x87 = INT32_MAX;
	int64_t x88 = -1LL;

	t19 = (x85==(x86<(x87-x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = INT32_MAX;
	static volatile int16_t x91 = INT16_MIN;
	int64_t x92 = 262493676809LL;
	int32_t t20 = -8687;

	t20 = (x89==(x90<(x91-x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 124408129526064536LLU;
	int16_t x94 = INT16_MIN;
	int16_t x95 = 231;
	static int16_t x96 = 133;

	t21 = (x93==(x94<(x95-x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x97 = 353737523969531426LLU;
	int8_t x99 = INT8_MAX;
	int16_t x100 = 6;
	int32_t t22 = -370263881;

	t22 = (x97==(x98<(x99-x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x105 = 255U;
	uint8_t x106 = 2U;
	static int32_t t23 = 3933594;

	t23 = (x105==(x106<(x107-x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -66636529576061LL;
	uint64_t x110 = 610262LLU;
	int8_t x111 = -1;
	volatile int64_t x112 = 1846273LL;
	int32_t t24 = 0;

	t24 = (x109==(x110<(x111-x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 4U;
	int64_t x114 = INT64_MIN;
	uint64_t x115 = 20933950LLU;
	int32_t t25 = -19031588;

	t25 = (x113==(x114<(x115-x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = 153869LL;
	int8_t x118 = INT8_MAX;
	int16_t x119 = INT16_MIN;
	uint16_t x120 = 5U;
	int32_t t26 = 5373970;

	t26 = (x117==(x118<(x119-x120)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x121 = -1;
	int32_t x122 = INT32_MIN;
	int32_t t27 = 3;

	t27 = (x121==(x122<(x123-x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = INT64_MIN;
	volatile int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t28 = 35017749;

	t28 = (x125==(x126<(x127-x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x130 = 0;
	int8_t x131 = -1;
	int64_t x132 = -1LL;

	t29 = (x129==(x130<(x131-x132)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = INT16_MIN;
	int8_t x134 = INT8_MAX;
	static volatile uint32_t x136 = 872U;
	volatile int32_t t30 = 0;

	t30 = (x133==(x134<(x135-x136)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = 24;
	static volatile int32_t x138 = -714;
	uint16_t x139 = 8505U;
	uint8_t x140 = 38U;
	static volatile int32_t t31 = 3957;

	t31 = (x137==(x138<(x139-x140)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x141 = 48U;
	static uint8_t x142 = 29U;
	volatile int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MIN;
	static int32_t t32 = -1580;

	t32 = (x141==(x142<(x143-x144)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x145 = 182584965344243253LL;
	int32_t x147 = 16381;

	t33 = (x145==(x146<(x147-x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x149 = INT32_MAX;
	uint16_t x150 = UINT16_MAX;
	uint8_t x151 = UINT8_MAX;
	static int8_t x152 = INT8_MIN;

	t34 = (x149==(x150<(x151-x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = INT32_MIN;
	static int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MIN;
	volatile int32_t t35 = -175785;

	t35 = (x153==(x154<(x155-x156)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = -2059517;
	int8_t x158 = -3;
	volatile uint32_t x159 = UINT32_MAX;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t36 = -301044938;

	t36 = (x157==(x158<(x159-x160)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = 89U;
	uint16_t x168 = 30925U;
	static int32_t t37 = 19113664;

	t37 = (x165==(x166<(x167-x168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x169 = 16651908094LLU;
	static int32_t x170 = INT32_MAX;
	int8_t x171 = 0;
	static volatile int8_t x172 = INT8_MIN;
	int32_t t38 = -2150;

	t38 = (x169==(x170<(x171-x172)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MAX;
	int32_t x178 = -70601;
	int32_t x180 = -382180;

	t39 = (x177==(x178<(x179-x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x183 = 20;
	volatile uint32_t x184 = 2378U;
	volatile int32_t t40 = 13;

	t40 = (x181==(x182<(x183-x184)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MIN;
	int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MIN;
	int32_t t41 = 1;

	t41 = (x185==(x186<(x187-x188)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x190 = INT32_MIN;
	static volatile int64_t x192 = 6681560LL;
	volatile int32_t t42 = -409764317;

	t42 = (x189==(x190<(x191-x192)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x194 = 3111790U;
	int8_t x195 = 4;

	t43 = (x193==(x194<(x195-x196)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x198 = 100687472LLU;
	static uint8_t x199 = 15U;
	uint8_t x200 = UINT8_MAX;

	t44 = (x197==(x198<(x199-x200)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = 69U;
	int16_t x202 = -1;
	volatile int64_t x203 = -1LL;
	int32_t x204 = INT32_MAX;
	volatile int32_t t45 = 27;

	t45 = (x201==(x202<(x203-x204)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -9LL;
	uint32_t x206 = UINT32_MAX;
	int8_t x208 = 0;
	int32_t t46 = 46808409;

	t46 = (x205==(x206<(x207-x208)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MIN;
	static volatile int32_t x211 = INT32_MIN;

	t47 = (x209==(x210<(x211-x212)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = INT32_MAX;
	uint64_t x214 = UINT64_MAX;
	volatile int32_t t48 = -18056;

	t48 = (x213==(x214<(x215-x216)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x218 = 0U;
	uint64_t x219 = UINT64_MAX;
	static uint64_t x220 = UINT64_MAX;
	int32_t t49 = 680186217;

	t49 = (x217==(x218<(x219-x220)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = INT16_MAX;
	int8_t x222 = INT8_MIN;
	int8_t x224 = INT8_MIN;

	t50 = (x221==(x222<(x223-x224)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x227 = UINT16_MAX;
	uint8_t x228 = 4U;

	t51 = (x225==(x226<(x227-x228)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = -1LL;
	static int64_t x230 = INT64_MIN;
	int8_t x231 = INT8_MIN;
	volatile int32_t t52 = 7;

	t52 = (x229==(x230<(x231-x232)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x237 = 41629714LLU;
	int32_t x238 = INT32_MIN;
	int32_t x239 = -1;
	static uint64_t x240 = UINT64_MAX;
	volatile int32_t t53 = 560330651;

	t53 = (x237==(x238<(x239-x240)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int32_t x242 = INT32_MIN;
	volatile int32_t x244 = 885;

	t54 = (x241==(x242<(x243-x244)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x245 = 2LL;
	int8_t x247 = INT8_MAX;
	int32_t t55 = -1448;

	t55 = (x245==(x246<(x247-x248)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = 23779507U;
	uint64_t x251 = 2102381958733LLU;
	uint16_t x252 = UINT16_MAX;
	int32_t t56 = 250;

	t56 = (x249==(x250<(x251-x252)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x253 = 95U;
	static uint32_t x254 = 206629U;
	int64_t x256 = -1844101117LL;
	int32_t t57 = -4322;

	t57 = (x253==(x254<(x255-x256)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x257 = -304;
	int64_t x258 = INT64_MIN;
	int16_t x259 = -40;
	uint64_t x260 = 6191938759808039LLU;

	t58 = (x257==(x258<(x259-x260)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = INT8_MIN;
	uint8_t x262 = UINT8_MAX;
	int16_t x263 = INT16_MIN;
	int32_t x264 = -1;
	int32_t t59 = -878;

	t59 = (x261==(x262<(x263-x264)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = INT32_MIN;
	static int32_t x266 = -1;

	t60 = (x265==(x266<(x267-x268)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = -61813203;
	int64_t x270 = INT64_MIN;
	uint32_t x272 = 493U;
	volatile int32_t t61 = 76137;

	t61 = (x269==(x270<(x271-x272)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = INT16_MIN;
	int32_t x275 = -1;
	volatile int32_t x276 = -2;
	static int32_t t62 = -225412;

	t62 = (x273==(x274<(x275-x276)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = INT16_MIN;
	uint32_t x278 = UINT32_MAX;
	uint32_t x280 = 0U;

	t63 = (x277==(x278<(x279-x280)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = INT32_MIN;
	static int32_t x286 = INT32_MAX;
	volatile uint64_t x288 = 16962743985469383LLU;
	volatile int32_t t64 = -209;

	t64 = (x285==(x286<(x287-x288)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x289 = UINT32_MAX;
	int8_t x290 = INT8_MIN;
	uint8_t x291 = UINT8_MAX;
	uint64_t x292 = 199193536LLU;
	static volatile int32_t t65 = 254;

	t65 = (x289==(x290<(x291-x292)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = INT32_MIN;
	int64_t x294 = INT64_MAX;
	int32_t t66 = 54006;

	t66 = (x293==(x294<(x295-x296)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x297 = INT64_MIN;
	uint32_t x298 = 1U;
	int32_t x299 = 422347;
	int32_t x300 = -1;

	t67 = (x297==(x298<(x299-x300)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = 484;
	volatile int32_t x303 = INT32_MAX;
	int32_t t68 = -153840;

	t68 = (x301==(x302<(x303-x304)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x305 = 56815U;
	int64_t x306 = INT64_MIN;
	uint64_t x307 = 9918518LLU;
	volatile int64_t x308 = -1573282856693LL;

	t69 = (x305==(x306<(x307-x308)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x309 = -11;
	volatile uint64_t x310 = 944757LLU;
	uint16_t x311 = UINT16_MAX;
	int8_t x312 = 6;
	static volatile int32_t t70 = -553988;

	t70 = (x309==(x310<(x311-x312)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x314 = -135;
	volatile uint16_t x315 = 4U;
	static int32_t t71 = 669515981;

	t71 = (x313==(x314<(x315-x316)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x317 = 155167LLU;
	static int16_t x318 = -1;
	static int8_t x319 = INT8_MAX;
	int16_t x320 = INT16_MAX;
	volatile int32_t t72 = -26024666;

	t72 = (x317==(x318<(x319-x320)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x321 = 2732U;
	static uint8_t x322 = UINT8_MAX;
	int8_t x323 = 0;
	static uint16_t x324 = 2U;

	t73 = (x321==(x322<(x323-x324)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = INT64_MIN;
	int8_t x327 = -1;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t74 = -9938680;

	t74 = (x325==(x326<(x327-x328)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x333 = 1;
	int8_t x335 = INT8_MIN;
	volatile int8_t x336 = 39;
	static volatile int32_t t75 = -456;

	t75 = (x333==(x334<(x335-x336)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x337 = -1;
	int8_t x338 = -14;
	uint16_t x340 = 91U;
	volatile int32_t t76 = -1359;

	t76 = (x337==(x338<(x339-x340)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x341 = UINT32_MAX;
	int64_t x344 = -1LL;

	t77 = (x341==(x342<(x343-x344)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x345 = 3U;
	uint8_t x346 = UINT8_MAX;
	int32_t t78 = 0;

	t78 = (x345==(x346<(x347-x348)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x350 = INT8_MAX;
	uint64_t x351 = UINT64_MAX;
	static int64_t x352 = INT64_MIN;
	int32_t t79 = -368120967;

	t79 = (x349==(x350<(x351-x352)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MAX;
	uint16_t x355 = UINT16_MAX;
	int8_t x356 = INT8_MIN;
	int32_t t80 = 729530;

	t80 = (x353==(x354<(x355-x356)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x357 = UINT64_MAX;
	uint32_t x359 = UINT32_MAX;
	uint16_t x360 = 32281U;

	t81 = (x357==(x358<(x359-x360)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x361 = INT16_MIN;
	uint32_t x362 = 31U;
	int64_t x364 = 712LL;
	int32_t t82 = 5;

	t82 = (x361==(x362<(x363-x364)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x365 = -1LL;
	static int64_t x366 = -1LL;
	int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MIN;
	volatile int32_t t83 = 4;

	t83 = (x365==(x366<(x367-x368)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x369 = 2376LLU;
	static int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MAX;
	uint64_t x372 = 2916306721758LLU;
	static volatile int32_t t84 = -47;

	t84 = (x369==(x370<(x371-x372)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x377 = 563U;
	uint16_t x378 = UINT16_MAX;
	uint32_t x379 = 3723278U;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t85 = -102704563;

	t85 = (x377==(x378<(x379-x380)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x381 = UINT16_MAX;
	int8_t x382 = INT8_MIN;
	static uint32_t x383 = UINT32_MAX;
	volatile int32_t x384 = 1065813;
	volatile int32_t t86 = 7;

	t86 = (x381==(x382<(x383-x384)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x385 = 0;
	uint32_t x386 = 225082071U;
	uint64_t x388 = 6LLU;
	int32_t t87 = 197524756;

	t87 = (x385==(x386<(x387-x388)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x389 = INT64_MIN;
	int64_t x392 = 845LL;
	int32_t t88 = -39972234;

	t88 = (x389==(x390<(x391-x392)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x393 = 40440340LLU;
	volatile int8_t x394 = INT8_MIN;
	static uint32_t x395 = 10U;
	static volatile int64_t x396 = -2704558LL;
	int32_t t89 = -156;

	t89 = (x393==(x394<(x395-x396)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = -1LL;
	int8_t x398 = INT8_MIN;
	volatile int8_t x399 = 0;
	uint8_t x400 = 113U;
	static int32_t t90 = -171713;

	t90 = (x397==(x398<(x399-x400)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x401 = 869;
	int64_t x403 = -1LL;
	volatile uint32_t x404 = 674731U;
	int32_t t91 = -25;

	t91 = (x401==(x402<(x403-x404)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x405 = INT64_MIN;
	int32_t x406 = 128;
	int16_t x408 = -1;

	t92 = (x405==(x406<(x407-x408)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x409 = 116U;
	uint64_t x410 = 6998290630LLU;
	static int32_t x411 = -1;

	t93 = (x409==(x410<(x411-x412)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x414 = -1LL;
	uint32_t x415 = UINT32_MAX;
	static volatile int32_t t94 = -1364477;

	t94 = (x413==(x414<(x415-x416)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x417 = UINT8_MAX;
	int64_t x418 = INT64_MIN;
	volatile int64_t x419 = -1LL;
	volatile int8_t x420 = INT8_MIN;
	int32_t t95 = 532;

	t95 = (x417==(x418<(x419-x420)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x421 = 117625553884LLU;
	uint64_t x422 = 376700LLU;
	static int16_t x423 = -234;
	uint64_t x424 = 7275706LLU;
	int32_t t96 = 748786875;

	t96 = (x421==(x422<(x423-x424)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {


	t97 = (x425==(x426<(x427-x428)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x429 = INT8_MAX;
	int64_t x431 = INT64_MIN;
	static volatile int8_t x432 = 0;
	int32_t t98 = 11760249;

	t98 = (x429==(x430<(x431-x432)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x433 = INT32_MIN;
	uint16_t x434 = UINT16_MAX;
	int32_t x435 = INT32_MAX;
	volatile uint16_t x436 = 2U;

	t99 = (x433==(x434<(x435-x436)));

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

