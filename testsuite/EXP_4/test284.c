#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
int16_t x3 = INT16_MIN;
volatile int32_t t2 = -574;
static int8_t x16 = INT8_MIN;
volatile int32_t t3 = -5;
volatile uint16_t x23 = 18774U;
int8_t x28 = INT8_MIN;
volatile int32_t x30 = INT32_MIN;
int16_t x31 = INT16_MIN;
int16_t x35 = INT16_MAX;
volatile uint32_t x37 = UINT32_MAX;
uint16_t x39 = 3U;
uint32_t t9 = 1449628076U;
uint64_t x41 = 700145932LLU;
int16_t x51 = 1866;
volatile int64_t x74 = -1LL;
int16_t x78 = INT16_MIN;
int32_t x81 = -14248;
int32_t t19 = 972525773;
volatile uint16_t x95 = 0U;
int16_t x96 = INT16_MIN;
volatile uint32_t t21 = 13U;
int8_t x101 = -1;
int32_t t23 = -1669470;
uint8_t x105 = 3U;
int8_t x106 = 29;
uint32_t x111 = 5499308U;
int32_t x114 = -104947330;
volatile int32_t t26 = 2940677;
int32_t t27 = 15066196;
int8_t x121 = -1;
int64_t x135 = 233LL;
uint8_t x140 = 0U;
int32_t t32 = -21;
int32_t t34 = -21960555;
int64_t x150 = INT64_MIN;
int32_t t35 = -872831;
int64_t x157 = INT64_MIN;
int16_t x161 = INT16_MIN;
int8_t x163 = INT8_MAX;
volatile int32_t x172 = INT32_MIN;
static int32_t x173 = INT32_MIN;
int16_t x186 = -35;
int64_t x198 = -1LL;
static int64_t x202 = INT64_MAX;
int8_t x204 = INT8_MIN;
int32_t x211 = INT32_MIN;
volatile int32_t t49 = -646386403;
int32_t x219 = 86;
int16_t x229 = INT16_MIN;
uint16_t x231 = UINT16_MAX;
uint16_t x234 = 14534U;
int8_t x238 = INT8_MIN;
volatile int8_t x239 = -8;
uint32_t x247 = UINT32_MAX;
static uint64_t x253 = 2752571995LLU;
uint64_t x254 = 1471971918934LLU;
static uint64_t x255 = 2LLU;
static volatile int16_t x258 = INT16_MIN;
volatile int32_t x274 = -1;
int64_t t63 = 2LL;
static uint8_t x299 = UINT8_MAX;
int16_t x305 = INT16_MAX;
static int16_t x306 = -1;
int64_t x309 = -1LL;
static int32_t x316 = -2008775;
volatile int32_t t72 = 3819;
uint16_t x317 = UINT16_MAX;
static int8_t x320 = -1;
volatile int32_t t73 = 2058218;
volatile int16_t x322 = 26;
uint64_t x327 = UINT64_MAX;
uint16_t x332 = 4U;
static int16_t x336 = INT16_MIN;
volatile int32_t t78 = 118;
int8_t x341 = -1;
static volatile int64_t x345 = 2378092580LL;
int8_t x352 = INT8_MIN;
int32_t x355 = 100755981;
uint64_t x359 = 838354960469670402LLU;
int16_t x366 = INT16_MIN;
volatile uint8_t x375 = 14U;
volatile int8_t x376 = INT8_MAX;
int64_t x382 = -515190389LL;
volatile int32_t x384 = -1;
static uint32_t t89 = 3U;
volatile uint32_t t90 = 125548543U;
int16_t x399 = -1;
static uint32_t x400 = 1U;
int32_t x414 = INT32_MIN;
int16_t x415 = -1970;
int32_t x417 = -1;
static int8_t x419 = -1;


void f0(void) {
	static volatile int64_t x1 = -34020LL;
	static int8_t x4 = INT8_MIN;
	static int64_t t0 = -818LL;

	t0 = (x1&(x2<(x3-x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MIN;
	static volatile int8_t x7 = -49;
	uint16_t x8 = 2U;
	static volatile uint32_t t1 = 1020945608U;

	t1 = (x5&(x6<(x7-x8)));

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	static volatile int32_t x10 = 15463358;
	int8_t x11 = -18;
	volatile int16_t x12 = INT16_MIN;

	t2 = (x9&(x10<(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 8U;
	volatile int16_t x14 = 23;
	static uint64_t x15 = UINT64_MAX;

	t3 = (x13&(x14<(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	uint8_t x18 = 3U;
	uint32_t x19 = 3U;
	int8_t x20 = -1;
	int32_t t4 = 1729;

	t4 = (x17&(x18<(x19-x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = UINT64_MAX;
	int32_t x22 = -154283492;
	uint8_t x24 = UINT8_MAX;
	volatile uint64_t t5 = 5638685LLU;

	t5 = (x21&(x22<(x23-x24)));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	uint64_t x26 = 202557LLU;
	uint64_t x27 = 41958LLU;
	static int32_t t6 = -9;

	t6 = (x25&(x26<(x27-x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = 0LL;
	static volatile int8_t x32 = -6;
	volatile int64_t t7 = 195428LL;

	t7 = (x29&(x30<(x31-x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 1779LL;
	int8_t x34 = INT8_MAX;
	static int32_t x36 = 220741;
	int64_t t8 = 111610598125680LL;

	t8 = (x33&(x34<(x35-x36)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x38 = 0LLU;
	int64_t x40 = 3070055082425676LL;

	t9 = (x37&(x38<(x39-x40)));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = UINT16_MAX;
	static int32_t x43 = INT32_MIN;
	int64_t x44 = -1LL;
	static uint64_t t10 = 50931LLU;

	t10 = (x41&(x42<(x43-x44)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 4U;
	int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MIN;
	uint16_t x48 = UINT16_MAX;
	static int32_t t11 = -319;

	t11 = (x45&(x46<(x47-x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MAX;
	int8_t x52 = 11;
	static uint64_t t12 = 11095651192035LLU;

	t12 = (x49&(x50<(x51-x52)));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 7U;
	int8_t x54 = INT8_MAX;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	int32_t t13 = -44573266;

	t13 = (x53&(x54<(x55-x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	static uint64_t x58 = 10063LLU;
	int8_t x59 = 0;
	uint16_t x60 = 68U;
	volatile int32_t t14 = 0;

	t14 = (x57&(x58<(x59-x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	static volatile int64_t x62 = -1224208229275LL;
	int8_t x63 = -1;
	int32_t x64 = 253830;
	int64_t t15 = 1042029639055LL;

	t15 = (x61&(x62<(x63-x64)));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	uint32_t x66 = 1589404822U;
	uint16_t x67 = 7919U;
	uint32_t x68 = 95140589U;
	volatile uint32_t t16 = 2310U;

	t16 = (x65&(x66<(x67-x68)));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x73 = INT32_MAX;
	volatile int8_t x75 = 1;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t17 = 6501;

	t17 = (x73&(x74<(x75-x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	static int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MIN;
	int32_t t18 = 143;

	t18 = (x77&(x78<(x79-x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x82 = 7678436;
	uint16_t x83 = 7U;
	static int8_t x84 = -1;

	t19 = (x81&(x82<(x83-x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = 61;
	int64_t x86 = -1LL;
	int16_t x87 = -1011;
	volatile int16_t x88 = INT16_MIN;
	int32_t t20 = 15661857;

	t20 = (x85&(x86<(x87-x88)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x93 = 28567350U;
	uint32_t x94 = 213164280U;

	t21 = (x93&(x94<(x95-x96)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -13;
	int8_t x98 = -1;
	static int16_t x99 = -1;
	static int8_t x100 = -1;
	static int32_t t22 = -2;

	t22 = (x97&(x98<(x99-x100)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x102 = UINT16_MAX;
	int64_t x103 = 897729363LL;
	static uint8_t x104 = 2U;

	t23 = (x101&(x102<(x103-x104)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x107 = -14;
	int8_t x108 = -1;
	volatile int32_t t24 = 4;

	t24 = (x105&(x106<(x107-x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = UINT64_MAX;
	int8_t x110 = INT8_MIN;
	int16_t x112 = INT16_MAX;
	uint64_t t25 = 274366397474LLU;

	t25 = (x109&(x110<(x111-x112)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x113 = -9769863;
	static volatile int32_t x115 = INT32_MAX;
	uint32_t x116 = UINT32_MAX;

	t26 = (x113&(x114<(x115-x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MAX;
	uint32_t x118 = 561557U;
	int16_t x119 = INT16_MIN;
	int8_t x120 = -1;

	t27 = (x117&(x118<(x119-x120)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = INT16_MIN;
	uint16_t x123 = 18U;
	int64_t x124 = INT64_MAX;
	static volatile int32_t t28 = 0;

	t28 = (x121&(x122<(x123-x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = INT8_MIN;
	uint16_t x126 = UINT16_MAX;
	volatile uint8_t x127 = UINT8_MAX;
	int32_t x128 = 346738;
	int32_t t29 = 29275337;

	t29 = (x125&(x126<(x127-x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = INT32_MIN;
	int8_t x130 = 10;
	static int32_t x131 = -1;
	int16_t x132 = 1;
	volatile int32_t t30 = -222;

	t30 = (x129&(x130<(x131-x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MIN;
	volatile int8_t x134 = INT8_MIN;
	uint8_t x136 = 1U;
	volatile int32_t t31 = 1;

	t31 = (x133&(x134<(x135-x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = -1;
	volatile int16_t x138 = INT16_MAX;
	static int8_t x139 = 0;

	t32 = (x137&(x138<(x139-x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = -1;
	static uint16_t x142 = UINT16_MAX;
	int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MIN;
	int32_t t33 = 1;

	t33 = (x141&(x142<(x143-x144)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = -674;
	volatile uint64_t x146 = 203732112802504694LLU;
	volatile int8_t x147 = INT8_MAX;
	int16_t x148 = -2;

	t34 = (x145&(x146<(x147-x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = UINT8_MAX;
	uint16_t x151 = 1U;
	int16_t x152 = -247;

	t35 = (x149&(x150<(x151-x152)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x158 = INT16_MIN;
	volatile uint64_t x159 = UINT64_MAX;
	int32_t x160 = INT32_MIN;
	volatile int64_t t36 = -407245286216625LL;

	t36 = (x157&(x158<(x159-x160)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x162 = -2131708;
	int16_t x164 = -1;
	int32_t t37 = -24917042;

	t37 = (x161&(x162<(x163-x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = 29U;
	int64_t x166 = INT64_MAX;
	volatile int32_t x167 = 4422;
	static int64_t x168 = 208090777198LL;
	volatile int32_t t38 = -1373;

	t38 = (x165&(x166<(x167-x168)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = -228844515702456958LL;
	int16_t x170 = 7;
	volatile int32_t x171 = -1;
	int64_t t39 = -1275136LL;

	t39 = (x169&(x170<(x171-x172)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x174 = 135U;
	uint64_t x175 = 29740096786275916LLU;
	int16_t x176 = INT16_MIN;
	volatile int32_t t40 = 0;

	t40 = (x173&(x174<(x175-x176)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 27U;
	uint64_t x178 = UINT64_MAX;
	int64_t x179 = 29439LL;
	volatile uint64_t x180 = 3540578063LLU;
	static volatile int32_t t41 = -43;

	t41 = (x177&(x178<(x179-x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x181 = 474555;
	int32_t x182 = -1;
	int64_t x183 = -1LL;
	volatile int32_t x184 = 5718;
	static int32_t t42 = 2787915;

	t42 = (x181&(x182<(x183-x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x185 = UINT64_MAX;
	volatile uint32_t x187 = UINT32_MAX;
	uint8_t x188 = UINT8_MAX;
	volatile uint64_t t43 = 22821720514LLU;

	t43 = (x185&(x186<(x187-x188)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 22U;
	int32_t x190 = 490123;
	uint8_t x191 = UINT8_MAX;
	static int64_t x192 = -1LL;
	int32_t t44 = -16231894;

	t44 = (x189&(x190<(x191-x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x193 = 2504LLU;
	uint8_t x194 = UINT8_MAX;
	static int8_t x195 = INT8_MAX;
	uint8_t x196 = UINT8_MAX;
	uint64_t t45 = 64004199013626LLU;

	t45 = (x193&(x194<(x195-x196)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -1;
	volatile int32_t x199 = 7365044;
	int8_t x200 = -1;
	static int32_t t46 = 44566631;

	t46 = (x197&(x198<(x199-x200)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = 1215U;
	uint16_t x203 = UINT16_MAX;
	int32_t t47 = 39294802;

	t47 = (x201&(x202<(x203-x204)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = 0U;
	int64_t x206 = INT64_MAX;
	static uint16_t x207 = 1594U;
	int16_t x208 = -4155;
	static volatile int32_t t48 = 7;

	t48 = (x205&(x206<(x207-x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = -1;
	volatile int32_t x210 = INT32_MAX;
	uint32_t x212 = 89489U;

	t49 = (x209&(x210<(x211-x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x217 = INT32_MIN;
	int32_t x218 = 5;
	uint64_t x220 = UINT64_MAX;
	int32_t t50 = 261945352;

	t50 = (x217&(x218<(x219-x220)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x221 = UINT16_MAX;
	uint16_t x222 = 16U;
	static int16_t x223 = -1;
	static uint32_t x224 = 721248U;
	static int32_t t51 = -836;

	t51 = (x221&(x222<(x223-x224)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x230 = 4521268U;
	volatile uint64_t x232 = 75577LLU;
	volatile int32_t t52 = -2;

	t52 = (x229&(x230<(x231-x232)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x233 = 1406612674490LL;
	static int16_t x235 = 15;
	int64_t x236 = -1LL;
	static volatile int64_t t53 = -219046655580854257LL;

	t53 = (x233&(x234<(x235-x236)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = 19;
	uint64_t x240 = 271479815035655217LLU;
	int32_t t54 = -11363;

	t54 = (x237&(x238<(x239-x240)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x241 = INT64_MIN;
	uint64_t x242 = 1841641550305LLU;
	int8_t x243 = -1;
	int32_t x244 = INT32_MIN;
	int64_t t55 = -6031LL;

	t55 = (x241&(x242<(x243-x244)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = 61;
	int8_t x246 = -4;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t56 = -5401157;

	t56 = (x245&(x246<(x247-x248)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = -20;
	int64_t x250 = 39402425040257LL;
	static int16_t x251 = 2;
	volatile int32_t x252 = INT32_MAX;
	volatile int32_t t57 = 27;

	t57 = (x249&(x250<(x251-x252)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x256 = INT32_MIN;
	uint64_t t58 = 283036359636LLU;

	t58 = (x253&(x254<(x255-x256)));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = INT8_MAX;
	uint64_t x259 = 254413191919104726LLU;
	int64_t x260 = INT64_MIN;
	int32_t t59 = -22;

	t59 = (x257&(x258<(x259-x260)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x261 = INT32_MIN;
	uint32_t x262 = UINT32_MAX;
	uint64_t x263 = UINT64_MAX;
	static int16_t x264 = INT16_MIN;
	volatile int32_t t60 = 6;

	t60 = (x261&(x262<(x263-x264)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x265 = INT32_MAX;
	volatile int64_t x266 = INT64_MAX;
	volatile int32_t x267 = INT32_MIN;
	static uint64_t x268 = 31629118LLU;
	volatile int32_t t61 = -1879746;

	t61 = (x265&(x266<(x267-x268)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x269 = -53826LL;
	int16_t x270 = INT16_MAX;
	int8_t x271 = 9;
	static volatile uint32_t x272 = 129805803U;
	int64_t t62 = 731579946LL;

	t62 = (x269&(x270<(x271-x272)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x273 = 489LL;
	volatile int16_t x275 = INT16_MIN;
	int8_t x276 = -1;

	t63 = (x273&(x274<(x275-x276)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x277 = INT64_MAX;
	static int16_t x278 = INT16_MIN;
	static int16_t x279 = INT16_MAX;
	int32_t x280 = INT32_MAX;
	static int64_t t64 = -44088051170LL;

	t64 = (x277&(x278<(x279-x280)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	int8_t x283 = INT8_MIN;
	static int32_t x284 = INT32_MIN;
	int32_t t65 = -480268;

	t65 = (x281&(x282<(x283-x284)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = -535683181LL;
	static int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MAX;
	int8_t x288 = INT8_MIN;
	static int64_t t66 = 201601474954067LL;

	t66 = (x285&(x286<(x287-x288)));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x289 = 342566050U;
	volatile int8_t x290 = INT8_MIN;
	uint64_t x291 = 28904107479129040LLU;
	static int16_t x292 = 6;
	volatile uint32_t t67 = 9639U;

	t67 = (x289&(x290<(x291-x292)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x297 = INT8_MAX;
	uint64_t x298 = UINT64_MAX;
	uint64_t x300 = UINT64_MAX;
	int32_t t68 = 87;

	t68 = (x297&(x298<(x299-x300)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x301 = 113199455;
	int64_t x302 = INT64_MIN;
	static uint16_t x303 = 5597U;
	int8_t x304 = 0;
	int32_t t69 = 151;

	t69 = (x301&(x302<(x303-x304)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x307 = 190358U;
	uint64_t x308 = 996222184LLU;
	volatile int32_t t70 = -8;

	t70 = (x305&(x306<(x307-x308)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x310 = INT32_MIN;
	static uint16_t x311 = UINT16_MAX;
	int64_t x312 = -529542185LL;
	int64_t t71 = -8378527696762LL;

	t71 = (x309&(x310<(x311-x312)));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = INT8_MAX;
	volatile int8_t x314 = INT8_MIN;
	static int64_t x315 = INT64_MIN;

	t72 = (x313&(x314<(x315-x316)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x318 = 1U;
	static int16_t x319 = INT16_MIN;

	t73 = (x317&(x318<(x319-x320)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x321 = 57U;
	volatile int32_t x323 = INT32_MAX;
	volatile uint32_t x324 = 0U;
	volatile int32_t t74 = 23136297;

	t74 = (x321&(x322<(x323-x324)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x325 = 1U;
	volatile int8_t x326 = -1;
	uint16_t x328 = 1U;
	int32_t t75 = 51;

	t75 = (x325&(x326<(x327-x328)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = 3;
	uint64_t x330 = 2001570326071528LLU;
	int8_t x331 = 2;
	static volatile int32_t t76 = 5314;

	t76 = (x329&(x330<(x331-x332)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x333 = INT16_MAX;
	uint16_t x334 = 406U;
	int8_t x335 = INT8_MIN;
	int32_t t77 = -1301;

	t77 = (x333&(x334<(x335-x336)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = INT32_MIN;
	static uint8_t x338 = 113U;
	int64_t x339 = 728LL;
	uint32_t x340 = UINT32_MAX;

	t78 = (x337&(x338<(x339-x340)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x342 = 30;
	int8_t x343 = INT8_MAX;
	int32_t x344 = 64927849;
	volatile int32_t t79 = 15271;

	t79 = (x341&(x342<(x343-x344)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x346 = -1LL;
	static volatile int32_t x347 = INT32_MAX;
	uint8_t x348 = 1U;
	volatile int64_t t80 = 28684LL;

	t80 = (x345&(x346<(x347-x348)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x349 = 46;
	int8_t x350 = INT8_MAX;
	int32_t x351 = INT32_MIN;
	int32_t t81 = 12;

	t81 = (x349&(x350<(x351-x352)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x353 = INT64_MIN;
	uint8_t x354 = 125U;
	int8_t x356 = INT8_MIN;
	int64_t t82 = -3LL;

	t82 = (x353&(x354<(x355-x356)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x357 = -7;
	int32_t x358 = INT32_MIN;
	int8_t x360 = INT8_MIN;
	int32_t t83 = 1542;

	t83 = (x357&(x358<(x359-x360)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x361 = 1;
	int8_t x362 = INT8_MAX;
	uint8_t x363 = 3U;
	volatile int16_t x364 = -1;
	int32_t t84 = 559350924;

	t84 = (x361&(x362<(x363-x364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x365 = 0;
	volatile int8_t x367 = -1;
	uint16_t x368 = 20271U;
	volatile int32_t t85 = 2385;

	t85 = (x365&(x366<(x367-x368)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = INT8_MIN;
	uint64_t x370 = UINT64_MAX;
	int16_t x371 = INT16_MIN;
	volatile uint16_t x372 = UINT16_MAX;
	volatile int32_t t86 = 731;

	t86 = (x369&(x370<(x371-x372)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = -2063706926968LL;
	int32_t x374 = -5231;
	volatile int64_t t87 = -90923LL;

	t87 = (x373&(x374<(x375-x376)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x377 = 3U;
	uint32_t x378 = 193U;
	uint16_t x379 = UINT16_MAX;
	int16_t x380 = 515;
	static uint32_t t88 = 193363U;

	t88 = (x377&(x378<(x379-x380)));

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = UINT32_MAX;
	static int32_t x383 = -1;

	t89 = (x381&(x382<(x383-x384)));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x385 = 14U;
	uint64_t x386 = 108457098427819LLU;
	volatile uint16_t x387 = UINT16_MAX;
	uint16_t x388 = 5009U;

	t90 = (x385&(x386<(x387-x388)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = INT64_MAX;
	int32_t x390 = INT32_MAX;
	volatile int8_t x391 = INT8_MAX;
	int64_t x392 = INT64_MAX;
	int64_t t91 = -516462086288LL;

	t91 = (x389&(x390<(x391-x392)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x393 = UINT16_MAX;
	int64_t x394 = -409284826789103LL;
	int16_t x395 = -1;
	int16_t x396 = INT16_MAX;
	volatile int32_t t92 = -345;

	t92 = (x393&(x394<(x395-x396)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x397 = 3824219112383084LLU;
	int8_t x398 = INT8_MIN;
	volatile uint64_t t93 = 13627100326034739LLU;

	t93 = (x397&(x398<(x399-x400)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x401 = INT8_MIN;
	volatile int16_t x402 = INT16_MIN;
	volatile int32_t x403 = INT32_MIN;
	int64_t x404 = INT64_MIN;
	int32_t t94 = 7168;

	t94 = (x401&(x402<(x403-x404)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = INT64_MAX;
	int32_t x406 = 566333;
	int32_t x407 = INT32_MIN;
	uint32_t x408 = UINT32_MAX;
	int64_t t95 = -26577275LL;

	t95 = (x405&(x406<(x407-x408)));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x413 = INT8_MIN;
	volatile uint64_t x416 = 77LLU;
	volatile int32_t t96 = 22386;

	t96 = (x413&(x414<(x415-x416)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x418 = INT32_MIN;
	int32_t x420 = -1;
	volatile int32_t t97 = -131;

	t97 = (x417&(x418<(x419-x420)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x421 = -36;
	uint8_t x422 = 43U;
	volatile int32_t x423 = INT32_MIN;
	volatile int8_t x424 = -45;
	int32_t t98 = -2199;

	t98 = (x421&(x422<(x423-x424)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x429 = 488481U;
	static int8_t x430 = INT8_MIN;
	int16_t x431 = INT16_MIN;
	volatile int8_t x432 = INT8_MIN;
	volatile uint32_t t99 = 66593766U;

	t99 = (x429&(x430<(x431-x432)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

