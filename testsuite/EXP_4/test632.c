#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = 208629781;
static volatile int8_t x8 = 1;
volatile uint8_t x10 = 4U;
uint32_t x17 = UINT32_MAX;
volatile int64_t x23 = -1LL;
volatile int32_t t5 = -126318928;
uint16_t x26 = UINT16_MAX;
int32_t t6 = 91;
static uint8_t x30 = 0U;
volatile int32_t t7 = -509891;
static int8_t x36 = INT8_MAX;
int64_t x41 = -1424831LL;
static int8_t x47 = INT8_MIN;
int32_t t13 = 11059815;
static uint16_t x57 = UINT16_MAX;
volatile int32_t x63 = -2228295;
uint8_t x67 = 33U;
int64_t x72 = -6LL;
volatile int32_t t17 = 1;
int32_t x74 = -254662;
static int32_t x76 = -1;
uint32_t x80 = 70332925U;
static volatile int8_t x86 = -22;
int8_t x89 = -56;
uint16_t x95 = UINT16_MAX;
int16_t x98 = INT16_MAX;
volatile int32_t t24 = 23;
volatile int32_t x106 = INT32_MIN;
volatile int64_t x115 = INT64_MAX;
int64_t x116 = INT64_MIN;
int32_t t27 = -280425548;
volatile uint64_t x121 = UINT64_MAX;
static uint32_t x122 = 851U;
static int32_t x124 = INT32_MIN;
int64_t x125 = INT64_MIN;
uint8_t x131 = 34U;
int32_t x135 = INT32_MIN;
int64_t x141 = 124183090LL;
int64_t x142 = -6028068355123LL;
volatile int8_t x146 = INT8_MAX;
uint64_t x147 = 97LLU;
static int8_t x149 = -57;
volatile int16_t x152 = INT16_MIN;
uint64_t x155 = 57003789396254LLU;
uint8_t x159 = UINT8_MAX;
int32_t x160 = 19;
static uint16_t x170 = UINT16_MAX;
int64_t x173 = 27783751662817785LL;
int16_t x175 = 26;
uint8_t x181 = 32U;
uint16_t x183 = UINT16_MAX;
int16_t x184 = 9664;
uint16_t x185 = 10007U;
uint32_t x187 = UINT32_MAX;
volatile int32_t t45 = 0;
static volatile int16_t x197 = -1;
int64_t x206 = INT64_MAX;
int32_t x220 = -116;
static volatile int32_t t51 = -247856303;
int64_t x227 = INT64_MIN;
int32_t x229 = 63973;
uint64_t x230 = UINT64_MAX;
int32_t x231 = INT32_MAX;
int16_t x232 = -1;
int16_t x241 = 72;
int16_t x244 = INT16_MIN;
volatile int32_t t57 = 3073;
int32_t x245 = -50;
volatile int16_t x248 = INT16_MAX;
volatile int32_t t60 = -618020015;
int32_t t62 = 1223;
int64_t x271 = INT64_MIN;
volatile int32_t t64 = -3609;
volatile uint16_t x282 = 4763U;
int16_t x284 = INT16_MIN;
int16_t x286 = -1;
static uint16_t x291 = 6096U;
volatile int64_t x300 = INT64_MIN;
int32_t t70 = 475;
int64_t x305 = -1771LL;
static int8_t x309 = 55;
int32_t x310 = -12800;
int64_t x313 = -1LL;
static int32_t t74 = 10691328;
uint16_t x321 = 2U;
int16_t x322 = -15;
int8_t x341 = INT8_MAX;
static uint64_t x343 = 1032LLU;
static int32_t x348 = 65230852;
int8_t x353 = -22;
static int64_t x358 = 1031457350443LL;
uint64_t x359 = 473237255476265625LLU;
int32_t x363 = -1;
uint16_t x367 = UINT16_MAX;
static int64_t x368 = INT64_MIN;
volatile int32_t t86 = -141;
int8_t x369 = 11;
volatile int32_t x370 = INT32_MAX;
static int8_t x376 = INT8_MIN;
uint16_t x380 = 8U;
int32_t x382 = -1;
int32_t x385 = -1;
static int8_t x389 = 0;
uint32_t x390 = UINT32_MAX;
volatile uint64_t x397 = 60752378204573106LLU;
static int8_t x400 = INT8_MAX;
int8_t x401 = INT8_MIN;
int16_t x402 = -1;
int8_t x405 = -1;
static volatile uint64_t x407 = 25LLU;
int32_t x414 = 419147807;
volatile int32_t t98 = -1;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	int16_t x2 = INT16_MIN;
	uint16_t x3 = UINT16_MAX;
	volatile int32_t t0 = 18843690;

	t0 = (x1==(x2<=(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 55;
	static int16_t x6 = INT16_MAX;
	static int8_t x7 = INT8_MAX;
	int32_t t1 = -526;

	t1 = (x5==(x6<=(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 80;
	volatile int64_t x11 = INT64_MIN;
	uint32_t x12 = 131064U;
	volatile int32_t t2 = 22165608;

	t2 = (x9==(x10<=(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -36148149LL;
	int32_t x14 = INT32_MIN;
	static int64_t x15 = -176444LL;
	int64_t x16 = 1799201616272656140LL;
	int32_t t3 = -855;

	t3 = (x13==(x14<=(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	uint64_t x19 = 2022565LLU;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 377;

	t4 = (x17==(x18<=(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 29934U;
	int8_t x22 = INT8_MAX;
	int32_t x24 = INT32_MIN;

	t5 = (x21==(x22<=(x23/x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int32_t x27 = -5;
	static int16_t x28 = INT16_MIN;

	t6 = (x25==(x26<=(x27/x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 54146207271211LLU;
	uint32_t x31 = 65U;
	int16_t x32 = -196;

	t7 = (x29==(x30<=(x31/x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int8_t x34 = 7;
	volatile uint16_t x35 = 241U;
	volatile int32_t t8 = 8;

	t8 = (x33==(x34<=(x35/x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = 1;
	static int64_t x38 = INT64_MIN;
	uint8_t x39 = 13U;
	uint8_t x40 = 3U;
	volatile int32_t t9 = -1;

	t9 = (x37==(x38<=(x39/x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x42 = -1;
	int64_t x43 = -115606541194869200LL;
	int8_t x44 = -9;
	int32_t t10 = -49;

	t10 = (x41==(x42<=(x43/x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	volatile int32_t x46 = INT32_MIN;
	static volatile uint8_t x48 = 2U;
	int32_t t11 = -3;

	t11 = (x45==(x46<=(x47/x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 4171949U;
	static int16_t x50 = INT16_MIN;
	int16_t x51 = -7;
	static int16_t x52 = INT16_MAX;
	int32_t t12 = 10348;

	t12 = (x49==(x50<=(x51/x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 0U;
	int8_t x54 = -1;
	int16_t x55 = INT16_MIN;
	int16_t x56 = 1;

	t13 = (x53==(x54<=(x55/x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = 107945U;
	int8_t x59 = -1;
	uint16_t x60 = 8252U;
	volatile int32_t t14 = -72;

	t14 = (x57==(x58<=(x59/x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int8_t x62 = -2;
	volatile uint16_t x64 = 86U;
	int32_t t15 = -1;

	t15 = (x61==(x62<=(x63/x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	static int8_t x66 = -1;
	int32_t x68 = INT32_MIN;
	static int32_t t16 = 30501539;

	t16 = (x65==(x66<=(x67/x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint64_t x70 = UINT64_MAX;
	volatile uint8_t x71 = UINT8_MAX;

	t17 = (x69==(x70<=(x71/x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 3U;
	int32_t x75 = -466930869;
	volatile int32_t t18 = 19440451;

	t18 = (x73==(x74<=(x75/x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 1;
	uint32_t x78 = UINT32_MAX;
	int64_t x79 = -21190409953946403LL;
	volatile int32_t t19 = 11;

	t19 = (x77==(x78<=(x79/x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	int8_t x82 = INT8_MAX;
	uint32_t x83 = UINT32_MAX;
	int8_t x84 = -1;
	volatile int32_t t20 = -2988;

	t20 = (x81==(x82<=(x83/x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = UINT64_MAX;
	uint32_t x87 = 1U;
	static uint32_t x88 = 475326U;
	volatile int32_t t21 = 0;

	t21 = (x85==(x86<=(x87/x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	int64_t x91 = -1LL;
	uint16_t x92 = UINT16_MAX;
	static int32_t t22 = -2872;

	t22 = (x89==(x90<=(x91/x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = UINT32_MAX;
	uint32_t x94 = 0U;
	int32_t x96 = -95;
	int32_t t23 = -14;

	t23 = (x93==(x94<=(x95/x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 22442505LL;
	int32_t x99 = INT32_MAX;
	int16_t x100 = -1775;

	t24 = (x97==(x98<=(x99/x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x105 = INT16_MIN;
	int8_t x107 = INT8_MIN;
	static volatile int32_t x108 = INT32_MIN;
	volatile int32_t t25 = -253542;

	t25 = (x105==(x106<=(x107/x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 28LLU;
	int64_t x110 = INT64_MAX;
	static int8_t x111 = -1;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t26 = 39;

	t26 = (x109==(x110<=(x111/x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x113 = 3U;
	int64_t x114 = -63053LL;

	t27 = (x113==(x114<=(x115/x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = UINT16_MAX;
	int32_t x118 = 24921654;
	uint64_t x119 = 61183701LLU;
	static uint32_t x120 = 987U;
	int32_t t28 = -142387;

	t28 = (x117==(x118<=(x119/x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x123 = UINT32_MAX;
	int32_t t29 = 28351;

	t29 = (x121==(x122<=(x123/x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x126 = 226;
	volatile uint32_t x127 = 3U;
	static volatile int64_t x128 = INT64_MAX;
	int32_t t30 = 178;

	t30 = (x125==(x126<=(x127/x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x129 = -1LL;
	volatile int32_t x130 = INT32_MIN;
	uint8_t x132 = 1U;
	int32_t t31 = 137452886;

	t31 = (x129==(x130<=(x131/x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = INT8_MIN;
	int16_t x134 = -1;
	static volatile uint16_t x136 = 461U;
	static volatile int32_t t32 = 46;

	t32 = (x133==(x134<=(x135/x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = INT64_MIN;
	int16_t x138 = INT16_MIN;
	int8_t x139 = -1;
	int8_t x140 = INT8_MAX;
	int32_t t33 = 11;

	t33 = (x137==(x138<=(x139/x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x143 = 63U;
	int32_t x144 = -1;
	static int32_t t34 = -299082350;

	t34 = (x141==(x142<=(x143/x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x145 = INT32_MIN;
	static uint64_t x148 = 63854LLU;
	int32_t t35 = 941;

	t35 = (x145==(x146<=(x147/x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x150 = INT8_MAX;
	uint8_t x151 = 17U;
	int32_t t36 = -171280;

	t36 = (x149==(x150<=(x151/x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = -1LL;
	int32_t x154 = INT32_MIN;
	uint64_t x156 = 13LLU;
	int32_t t37 = 66;

	t37 = (x153==(x154<=(x155/x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = -1LL;
	int64_t x158 = -1LL;
	int32_t t38 = 117026;

	t38 = (x157==(x158<=(x159/x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 1U;
	int64_t x162 = INT64_MIN;
	static int32_t x163 = 224;
	uint16_t x164 = UINT16_MAX;
	int32_t t39 = 42680;

	t39 = (x161==(x162<=(x163/x164)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = 115LLU;
	uint16_t x171 = UINT16_MAX;
	volatile uint16_t x172 = 76U;
	volatile int32_t t40 = -2792;

	t40 = (x169==(x170<=(x171/x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x174 = 2265825459282910894LLU;
	volatile int32_t x176 = INT32_MAX;
	volatile int32_t t41 = 42917571;

	t41 = (x173==(x174<=(x175/x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = -1LL;
	int16_t x178 = INT16_MAX;
	uint16_t x179 = 29058U;
	static int64_t x180 = -7184133LL;
	volatile int32_t t42 = 5;

	t42 = (x177==(x178<=(x179/x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x182 = 83U;
	int32_t t43 = -7369;

	t43 = (x181==(x182<=(x183/x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x186 = INT64_MAX;
	uint16_t x188 = 3U;
	volatile int32_t t44 = 14904135;

	t44 = (x185==(x186<=(x187/x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = -1;
	int8_t x190 = 3;
	static int32_t x191 = -1;
	static int8_t x192 = -1;

	t45 = (x189==(x190<=(x191/x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = 0;
	int64_t x194 = 1314467838LL;
	static uint16_t x195 = UINT16_MAX;
	int32_t x196 = INT32_MIN;
	int32_t t46 = 9739132;

	t46 = (x193==(x194<=(x195/x196)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t47 = 6;

	t47 = (x197==(x198<=(x199/x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MIN;
	uint8_t x202 = 5U;
	uint64_t x203 = 87LLU;
	volatile uint32_t x204 = 28538U;
	volatile int32_t t48 = -453858999;

	t48 = (x201==(x202<=(x203/x204)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x205 = UINT16_MAX;
	int16_t x207 = INT16_MAX;
	int8_t x208 = 3;
	int32_t t49 = 256;

	t49 = (x205==(x206<=(x207/x208)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -35356;
	int32_t x210 = -1;
	static uint16_t x211 = 0U;
	int32_t x212 = INT32_MAX;
	int32_t t50 = 0;

	t50 = (x209==(x210<=(x211/x212)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = -6;
	int16_t x218 = -1;
	uint32_t x219 = 114160U;

	t51 = (x217==(x218<=(x219/x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x221 = INT64_MIN;
	int64_t x222 = INT64_MIN;
	volatile uint16_t x223 = 16U;
	int64_t x224 = -10620542LL;
	int32_t t52 = 16921360;

	t52 = (x221==(x222<=(x223/x224)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MIN;
	int16_t x226 = -273;
	volatile int64_t x228 = 2713367927896398923LL;
	volatile int32_t t53 = 1882;

	t53 = (x225==(x226<=(x227/x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t t54 = -1022567066;

	t54 = (x229==(x230<=(x231/x232)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = 56154564LL;
	uint8_t x234 = 57U;
	int32_t x235 = INT32_MAX;
	int8_t x236 = -6;
	static volatile int32_t t55 = 6570445;

	t55 = (x233==(x234<=(x235/x236)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MAX;
	static volatile int64_t x238 = -1LL;
	volatile int8_t x239 = 27;
	volatile int8_t x240 = -1;
	static volatile int32_t t56 = 82;

	t56 = (x237==(x238<=(x239/x240)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x242 = UINT8_MAX;
	int64_t x243 = INT64_MIN;

	t57 = (x241==(x242<=(x243/x244)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x246 = 18741273227571351LLU;
	int16_t x247 = -1;
	volatile int32_t t58 = 0;

	t58 = (x245==(x246<=(x247/x248)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = 1U;
	int32_t x250 = INT32_MIN;
	int8_t x251 = -1;
	int8_t x252 = INT8_MAX;
	int32_t t59 = 26166219;

	t59 = (x249==(x250<=(x251/x252)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = 15U;
	static volatile int8_t x254 = INT8_MAX;
	static int64_t x255 = INT64_MAX;
	int8_t x256 = INT8_MIN;

	t60 = (x253==(x254<=(x255/x256)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x261 = -1;
	int16_t x262 = INT16_MAX;
	static uint16_t x263 = 6U;
	uint32_t x264 = 333726380U;
	volatile int32_t t61 = 298197;

	t61 = (x261==(x262<=(x263/x264)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = INT8_MIN;
	volatile int64_t x266 = -1LL;
	uint16_t x267 = UINT16_MAX;
	static int16_t x268 = 15;

	t62 = (x265==(x266<=(x267/x268)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = 1;
	int64_t x270 = -1LL;
	static int64_t x272 = INT64_MIN;
	int32_t t63 = 12;

	t63 = (x269==(x270<=(x271/x272)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = -1;
	volatile uint16_t x274 = UINT16_MAX;
	volatile uint32_t x275 = UINT32_MAX;
	volatile uint16_t x276 = UINT16_MAX;

	t64 = (x273==(x274<=(x275/x276)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = -1;
	int8_t x278 = 11;
	static volatile int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MIN;
	int32_t t65 = 1313107;

	t65 = (x277==(x278<=(x279/x280)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = INT16_MIN;
	int64_t x283 = INT64_MIN;
	volatile int32_t t66 = 0;

	t66 = (x281==(x282<=(x283/x284)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = 38;
	static int16_t x287 = -29;
	int8_t x288 = -2;
	int32_t t67 = 401;

	t67 = (x285==(x286<=(x287/x288)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x289 = INT64_MIN;
	int8_t x290 = INT8_MAX;
	static int64_t x292 = INT64_MIN;
	static int32_t t68 = -5056;

	t68 = (x289==(x290<=(x291/x292)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x293 = -1;
	int32_t x294 = INT32_MAX;
	uint16_t x295 = UINT16_MAX;
	volatile int8_t x296 = 1;
	volatile int32_t t69 = -4190;

	t69 = (x293==(x294<=(x295/x296)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x297 = 1600719082884185LLU;
	int8_t x298 = INT8_MIN;
	static int64_t x299 = INT64_MIN;

	t70 = (x297==(x298<=(x299/x300)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = -3279575;
	static volatile int32_t x302 = -1;
	int8_t x303 = -1;
	static uint8_t x304 = UINT8_MAX;
	int32_t t71 = 550161;

	t71 = (x301==(x302<=(x303/x304)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x306 = 5003LLU;
	uint8_t x307 = 25U;
	volatile int32_t x308 = INT32_MIN;
	int32_t t72 = -8;

	t72 = (x305==(x306<=(x307/x308)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x311 = -1;
	int64_t x312 = INT64_MAX;
	static int32_t t73 = -1196;

	t73 = (x309==(x310<=(x311/x312)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x314 = INT64_MAX;
	int32_t x315 = INT32_MIN;
	int32_t x316 = 10;

	t74 = (x313==(x314<=(x315/x316)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x323 = 1U;
	uint32_t x324 = 28353909U;
	int32_t t75 = -1745;

	t75 = (x321==(x322<=(x323/x324)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x325 = -1LL;
	volatile int8_t x326 = -1;
	int8_t x327 = -1;
	uint16_t x328 = UINT16_MAX;
	static volatile int32_t t76 = 175341;

	t76 = (x325==(x326<=(x327/x328)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = INT8_MIN;
	uint16_t x330 = 3526U;
	int32_t x331 = INT32_MIN;
	volatile int16_t x332 = INT16_MIN;
	static int32_t t77 = -4647;

	t77 = (x329==(x330<=(x331/x332)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = 19;
	int64_t x334 = 26LL;
	uint32_t x335 = 1468871411U;
	int8_t x336 = INT8_MAX;
	int32_t t78 = 1203903;

	t78 = (x333==(x334<=(x335/x336)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x337 = INT16_MAX;
	volatile int64_t x338 = -3529LL;
	int8_t x339 = INT8_MIN;
	uint64_t x340 = 9841LLU;
	int32_t t79 = -121;

	t79 = (x337==(x338<=(x339/x340)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x342 = -1;
	int64_t x344 = -7956737669975508LL;
	volatile int32_t t80 = -10;

	t80 = (x341==(x342<=(x343/x344)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x345 = 14;
	static uint16_t x346 = 164U;
	int64_t x347 = -1LL;
	static int32_t t81 = -1;

	t81 = (x345==(x346<=(x347/x348)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x349 = -21;
	static volatile int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = 29U;
	static int32_t t82 = -302;

	t82 = (x349==(x350<=(x351/x352)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x354 = UINT32_MAX;
	static volatile int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MAX;
	volatile int32_t t83 = -514632;

	t83 = (x353==(x354<=(x355/x356)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x357 = -1;
	uint16_t x360 = 22U;
	volatile int32_t t84 = -12889;

	t84 = (x357==(x358<=(x359/x360)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x361 = -2650273;
	uint64_t x362 = 500468827LLU;
	uint64_t x364 = 12LLU;
	int32_t t85 = 19452510;

	t85 = (x361==(x362<=(x363/x364)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x365 = 126788965790491LLU;
	volatile int64_t x366 = INT64_MIN;

	t86 = (x365==(x366<=(x367/x368)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x371 = 21686923U;
	int32_t x372 = -5351;
	int32_t t87 = -139;

	t87 = (x369==(x370<=(x371/x372)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = -9491;
	uint64_t x374 = 8777868LLU;
	static int16_t x375 = INT16_MAX;
	static int32_t t88 = -58018;

	t88 = (x373==(x374<=(x375/x376)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x377 = UINT8_MAX;
	uint16_t x378 = 1792U;
	uint16_t x379 = UINT16_MAX;
	int32_t t89 = -3;

	t89 = (x377==(x378<=(x379/x380)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = 0U;
	uint64_t x383 = 3222LLU;
	static uint32_t x384 = UINT32_MAX;
	static volatile int32_t t90 = -80;

	t90 = (x381==(x382<=(x383/x384)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x386 = -5;
	uint64_t x387 = 71355822570212893LLU;
	int16_t x388 = -1;
	volatile int32_t t91 = 11716639;

	t91 = (x385==(x386<=(x387/x388)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x391 = INT16_MAX;
	int32_t x392 = 147847;
	int32_t t92 = -11188635;

	t92 = (x389==(x390<=(x391/x392)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x398 = UINT8_MAX;
	int64_t x399 = INT64_MIN;
	volatile int32_t t93 = 186300;

	t93 = (x397==(x398<=(x399/x400)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x403 = -200046903195229278LL;
	volatile uint32_t x404 = 93735323U;
	int32_t t94 = 0;

	t94 = (x401==(x402<=(x403/x404)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x406 = -1;
	static int32_t x408 = -108584382;
	volatile int32_t t95 = 124;

	t95 = (x405==(x406<=(x407/x408)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = INT64_MIN;
	static volatile uint32_t x410 = 1008969607U;
	int64_t x411 = INT64_MIN;
	static int64_t x412 = INT64_MIN;
	int32_t t96 = 1;

	t96 = (x409==(x410<=(x411/x412)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x413 = -1;
	volatile uint64_t x415 = 37377519195280LLU;
	static volatile int64_t x416 = -767561172402LL;
	static int32_t t97 = 27;

	t97 = (x413==(x414<=(x415/x416)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x417 = 75U;
	volatile int8_t x418 = 1;
	uint64_t x419 = 4988403LLU;
	int16_t x420 = -1583;

	t98 = (x417==(x418<=(x419/x420)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = INT64_MAX;
	int32_t x422 = -1;
	static volatile uint64_t x423 = 121LLU;
	static uint16_t x424 = UINT16_MAX;
	int32_t t99 = 3469;

	t99 = (x421==(x422<=(x423/x424)));

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

