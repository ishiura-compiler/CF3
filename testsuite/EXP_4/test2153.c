#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 38LL;
int16_t x7 = INT16_MIN;
int16_t x9 = 727;
volatile uint16_t x14 = 25U;
volatile int64_t x15 = 420232LL;
int64_t x19 = INT64_MIN;
int32_t t4 = 3851056;
uint64_t x21 = UINT64_MAX;
volatile int32_t t5 = -71177128;
volatile int8_t x29 = 2;
int64_t x35 = INT64_MIN;
int32_t t8 = 1;
uint16_t x50 = 8391U;
static volatile int32_t t12 = 62424224;
int16_t x54 = INT16_MIN;
int32_t t13 = -721664;
int64_t x57 = INT64_MAX;
static uint32_t x58 = 117U;
int32_t t15 = -62;
static volatile int32_t x66 = -1;
int16_t x68 = INT16_MIN;
int8_t x71 = INT8_MAX;
uint64_t x73 = 25LLU;
uint32_t x76 = 8U;
int32_t t19 = -371126;
static volatile int32_t t22 = 35;
volatile int16_t x97 = INT16_MIN;
int16_t x102 = INT16_MIN;
uint8_t x103 = 24U;
volatile int32_t x104 = INT32_MAX;
uint64_t x110 = UINT64_MAX;
int32_t x111 = -963;
int32_t x113 = -3;
int64_t x114 = -1LL;
int16_t x115 = -1;
static uint64_t x120 = UINT64_MAX;
int32_t t29 = 3701;
int64_t x121 = -1LL;
int16_t x124 = INT16_MIN;
volatile uint16_t x125 = UINT16_MAX;
int32_t t32 = -1294;
int32_t x133 = INT32_MAX;
uint16_t x134 = 768U;
uint32_t x136 = UINT32_MAX;
int32_t t33 = -1294665;
static uint32_t x137 = 27973768U;
int16_t x138 = INT16_MIN;
static int64_t x151 = -48168412332LL;
uint32_t x152 = 30861761U;
int8_t x153 = -1;
int16_t x155 = INT16_MIN;
static int16_t x159 = INT16_MAX;
volatile uint64_t x161 = UINT64_MAX;
int16_t x168 = -2;
volatile int16_t x169 = INT16_MIN;
int32_t t42 = -325132;
volatile int32_t t44 = 15;
static int64_t x188 = INT64_MAX;
uint64_t x192 = UINT64_MAX;
volatile uint16_t x198 = 2U;
uint32_t x200 = UINT32_MAX;
int32_t t49 = 3627896;
int16_t x205 = INT16_MIN;
int32_t t51 = 15543;
static volatile int32_t t52 = -5;
volatile uint64_t x220 = UINT64_MAX;
volatile int32_t t54 = -429078;
int16_t x229 = 14443;
volatile int32_t x232 = -144759345;
int8_t x234 = 0;
int32_t x237 = -168346;
int16_t x242 = INT16_MIN;
int8_t x255 = INT8_MIN;
static volatile uint32_t x259 = 384716329U;
int64_t x261 = 487024975556231836LL;
int32_t x266 = 421670382;
static volatile uint64_t x273 = UINT64_MAX;
int16_t x277 = -1;
int32_t t70 = -651753;
uint8_t x287 = 10U;
int8_t x290 = INT8_MAX;
int8_t x305 = INT8_MIN;
volatile int32_t t76 = 15507;
static int32_t x310 = -1;
int8_t x314 = INT8_MIN;
volatile int64_t x315 = INT64_MIN;
int8_t x316 = -1;
uint8_t x324 = 13U;
uint16_t x326 = 13820U;
static uint32_t x327 = 14U;
int8_t x328 = -1;
int32_t t81 = 70;
int64_t x334 = -1LL;
volatile int32_t t83 = 536;
int64_t x338 = 1030492LL;
int32_t x340 = INT32_MIN;
volatile int32_t t84 = -2472561;
int64_t x343 = -1LL;
int8_t x344 = 4;
int16_t x356 = 33;
volatile int32_t t88 = -1484677;
int8_t x367 = 1;
static uint64_t x371 = UINT64_MAX;
static int32_t t92 = 45;
volatile uint16_t x373 = 1U;
static int32_t t93 = 207290947;
volatile int32_t t96 = -1;
volatile int32_t t98 = -94119938;
static uint16_t x399 = UINT16_MAX;


void f0(void) {
	volatile int8_t x2 = -1;
	uint64_t x3 = UINT64_MAX;
	int64_t x4 = 13378LL;
	int32_t t0 = 16;

	t0 = (x1==(x2<=(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int16_t x6 = INT16_MIN;
	static volatile int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -10199053;

	t1 = (x5==(x6<=(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -1;
	int64_t x11 = -1LL;
	static int32_t x12 = INT32_MAX;
	int32_t t2 = -3300;

	t2 = (x9==(x10<=(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 413465063539644LLU;
	uint64_t x16 = 8LLU;
	volatile int32_t t3 = 6;

	t3 = (x13==(x14<=(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MIN;
	static int8_t x20 = -4;

	t4 = (x17==(x18<=(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = -16414730LL;
	int8_t x23 = 1;
	uint64_t x24 = UINT64_MAX;

	t5 = (x21==(x22<=(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	static uint64_t x26 = 15350970LLU;
	static int64_t x27 = 3361875068LL;
	volatile int64_t x28 = INT64_MAX;
	static int32_t t6 = -248331;

	t6 = (x25==(x26<=(x27^x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x30 = -1;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = 1234435903U;
	volatile int32_t t7 = 1;

	t7 = (x29==(x30<=(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	static uint64_t x34 = 27LLU;
	volatile int8_t x36 = -1;

	t8 = (x33==(x34<=(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MIN;
	static uint32_t x38 = 222679559U;
	int16_t x39 = INT16_MIN;
	volatile int16_t x40 = INT16_MAX;
	static int32_t t9 = -77960120;

	t9 = (x37==(x38<=(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 358297899134455LL;
	uint64_t x42 = UINT64_MAX;
	static uint32_t x43 = 201U;
	volatile int64_t x44 = -4769578483967442LL;
	int32_t t10 = -1;

	t10 = (x41==(x42<=(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	uint8_t x46 = 23U;
	volatile int64_t x47 = 1007023859037LL;
	int64_t x48 = INT64_MIN;
	int32_t t11 = -1;

	t11 = (x45==(x46<=(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	static volatile int32_t x51 = -132788487;
	int8_t x52 = INT8_MIN;

	t12 = (x49==(x50<=(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	int32_t x55 = INT32_MIN;
	uint16_t x56 = 12697U;

	t13 = (x53==(x54<=(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x59 = INT64_MIN;
	volatile int16_t x60 = 3;
	int32_t t14 = -6952250;

	t14 = (x57==(x58<=(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = 9U;
	int32_t x62 = INT32_MIN;
	uint8_t x63 = 16U;
	int16_t x64 = -1;

	t15 = (x61==(x62<=(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -60004319;
	static uint8_t x67 = 8U;
	int32_t t16 = 0;

	t16 = (x65==(x66<=(x67^x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	uint64_t x70 = UINT64_MAX;
	volatile int64_t x72 = INT64_MAX;
	int32_t t17 = 19488;

	t17 = (x69==(x70<=(x71^x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x74 = UINT16_MAX;
	int8_t x75 = INT8_MIN;
	volatile int32_t t18 = -72;

	t18 = (x73==(x74<=(x75^x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MAX;
	int32_t x78 = INT32_MIN;
	uint8_t x79 = 1U;
	uint32_t x80 = 60U;

	t19 = (x77==(x78<=(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -2;
	int64_t x82 = -1LL;
	static volatile int32_t x83 = INT32_MAX;
	static int16_t x84 = -1;
	volatile int32_t t20 = -60282;

	t20 = (x81==(x82<=(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	static int16_t x86 = INT16_MIN;
	uint64_t x87 = 174265628LLU;
	uint32_t x88 = UINT32_MAX;
	volatile int32_t t21 = 4037465;

	t21 = (x85==(x86<=(x87^x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	int32_t x90 = -1;
	volatile uint64_t x91 = 2746LLU;
	int32_t x92 = 174237345;

	t22 = (x89==(x90<=(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 0U;
	uint32_t x94 = UINT32_MAX;
	volatile int64_t x95 = -1LL;
	volatile uint8_t x96 = UINT8_MAX;
	static int32_t t23 = -34099126;

	t23 = (x93==(x94<=(x95^x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MIN;
	volatile int64_t x100 = -1LL;
	int32_t t24 = 21924;

	t24 = (x97==(x98<=(x99^x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = UINT8_MAX;
	static volatile int32_t t25 = 664060;

	t25 = (x101==(x102<=(x103^x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = UINT16_MAX;
	int8_t x106 = -1;
	uint64_t x107 = 7366532567131301LLU;
	int8_t x108 = INT8_MIN;
	int32_t t26 = -99;

	t26 = (x105==(x106<=(x107^x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	int64_t x112 = INT64_MIN;
	int32_t t27 = -14239863;

	t27 = (x109==(x110<=(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x116 = UINT64_MAX;
	static int32_t t28 = 1;

	t28 = (x113==(x114<=(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 5;
	static uint32_t x118 = UINT32_MAX;
	int64_t x119 = -1LL;

	t29 = (x117==(x118<=(x119^x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x122 = 2U;
	int32_t x123 = INT32_MAX;
	volatile int32_t t30 = 635404514;

	t30 = (x121==(x122<=(x123^x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MIN;
	volatile int64_t x127 = INT64_MIN;
	uint8_t x128 = 81U;
	volatile int32_t t31 = -1356;

	t31 = (x125==(x126<=(x127^x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = UINT32_MAX;
	static int64_t x130 = INT64_MAX;
	int16_t x131 = INT16_MIN;
	static uint32_t x132 = 2596U;

	t32 = (x129==(x130<=(x131^x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x135 = -1;

	t33 = (x133==(x134<=(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x139 = 264125843LLU;
	int64_t x140 = INT64_MAX;
	volatile int32_t t34 = 1;

	t34 = (x137==(x138<=(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 399862955623LLU;
	uint8_t x142 = UINT8_MAX;
	uint32_t x143 = 1U;
	static int16_t x144 = 1928;
	volatile int32_t t35 = -20619345;

	t35 = (x141==(x142<=(x143^x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 1U;
	static uint16_t x146 = 4U;
	int8_t x147 = 1;
	static int32_t x148 = 52591470;
	static int32_t t36 = -377469274;

	t36 = (x145==(x146<=(x147^x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 524443303201742340LL;
	int16_t x150 = -66;
	int32_t t37 = 897528;

	t37 = (x149==(x150<=(x151^x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = -1;
	int64_t x156 = INT64_MAX;
	int32_t t38 = -12275291;

	t38 = (x153==(x154<=(x155^x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = -642501784002387LL;
	volatile uint16_t x158 = 20U;
	int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 23008581;

	t39 = (x157==(x158<=(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x162 = INT64_MIN;
	int32_t x163 = INT32_MAX;
	uint8_t x164 = 1U;
	volatile int32_t t40 = -187337403;

	t40 = (x161==(x162<=(x163^x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MIN;
	static int8_t x167 = INT8_MIN;
	volatile int32_t t41 = -59548;

	t41 = (x165==(x166<=(x167^x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x170 = 69U;
	volatile uint8_t x171 = UINT8_MAX;
	int64_t x172 = INT64_MAX;

	t42 = (x169==(x170<=(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	uint64_t x174 = 168LLU;
	static volatile int64_t x175 = -932459131583833949LL;
	volatile int32_t x176 = -1;
	int32_t t43 = -4;

	t43 = (x173==(x174<=(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	uint16_t x178 = 26199U;
	static uint64_t x179 = 61121043195794LLU;
	volatile int8_t x180 = INT8_MAX;

	t44 = (x177==(x178<=(x179^x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	int64_t x182 = -9133789853061LL;
	uint64_t x183 = UINT64_MAX;
	int32_t x184 = 56007;
	static volatile int32_t t45 = 14272;

	t45 = (x181==(x182<=(x183^x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MAX;
	uint16_t x186 = 898U;
	int16_t x187 = INT16_MIN;
	volatile int32_t t46 = 1396;

	t46 = (x185==(x186<=(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 1055714LL;
	int32_t x190 = 6233;
	int16_t x191 = 19;
	volatile int32_t t47 = -46854;

	t47 = (x189==(x190<=(x191^x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	static volatile uint32_t x194 = 27U;
	int16_t x195 = -1;
	static int8_t x196 = 1;
	int32_t t48 = 8039;

	t48 = (x193==(x194<=(x195^x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 11307498135993LLU;
	int64_t x199 = 28760LL;

	t49 = (x197==(x198<=(x199^x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 30U;
	uint64_t x202 = 33889969LLU;
	volatile int8_t x203 = INT8_MAX;
	int8_t x204 = 14;
	int32_t t50 = 1012;

	t50 = (x201==(x202<=(x203^x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = 4088LL;
	int16_t x207 = INT16_MIN;
	static int64_t x208 = INT64_MAX;

	t51 = (x205==(x206<=(x207^x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = INT16_MIN;
	volatile uint32_t x210 = UINT32_MAX;
	int16_t x211 = -31;
	int32_t x212 = 1880;

	t52 = (x209==(x210<=(x211^x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x213 = UINT64_MAX;
	int16_t x214 = -5;
	uint64_t x215 = 1022114LLU;
	int16_t x216 = INT16_MIN;
	volatile int32_t t53 = 0;

	t53 = (x213==(x214<=(x215^x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	volatile uint64_t x218 = UINT64_MAX;
	int16_t x219 = INT16_MAX;

	t54 = (x217==(x218<=(x219^x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MIN;
	static int32_t x222 = INT32_MAX;
	static uint8_t x223 = 1U;
	volatile uint16_t x224 = 34U;
	int32_t t55 = 2;

	t55 = (x221==(x222<=(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 6;
	uint16_t x226 = UINT16_MAX;
	int16_t x227 = 0;
	static int16_t x228 = INT16_MAX;
	int32_t t56 = 6465;

	t56 = (x225==(x226<=(x227^x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = 1;
	int8_t x231 = -4;
	int32_t t57 = 5187358;

	t57 = (x229==(x230<=(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MIN;
	uint32_t x235 = UINT32_MAX;
	uint16_t x236 = 1673U;
	volatile int32_t t58 = -16947554;

	t58 = (x233==(x234<=(x235^x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x238 = 12U;
	int8_t x239 = INT8_MAX;
	volatile int16_t x240 = 154;
	volatile int32_t t59 = 110698;

	t59 = (x237==(x238<=(x239^x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	uint8_t x243 = 50U;
	int64_t x244 = -1LL;
	static volatile int32_t t60 = 60;

	t60 = (x241==(x242<=(x243^x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x245 = UINT64_MAX;
	int64_t x246 = INT64_MIN;
	int64_t x247 = -17495617467704LL;
	volatile int8_t x248 = INT8_MIN;
	int32_t t61 = 5689;

	t61 = (x245==(x246<=(x247^x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	uint8_t x250 = 1U;
	uint64_t x251 = 310871016908836LLU;
	int64_t x252 = INT64_MAX;
	volatile int32_t t62 = -14;

	t62 = (x249==(x250<=(x251^x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = UINT64_MAX;
	volatile uint16_t x254 = 14726U;
	static int32_t x256 = -275917050;
	int32_t t63 = -31519282;

	t63 = (x253==(x254<=(x255^x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MIN;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t64 = 82803;

	t64 = (x257==(x258<=(x259^x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x262 = 33U;
	int32_t x263 = 41129;
	volatile int8_t x264 = INT8_MAX;
	int32_t t65 = -17840;

	t65 = (x261==(x262<=(x263^x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = -4349;
	volatile int8_t x267 = INT8_MAX;
	int32_t x268 = INT32_MIN;
	static int32_t t66 = 1;

	t66 = (x265==(x266<=(x267^x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = -577876632563539907LL;
	int8_t x270 = INT8_MIN;
	int64_t x271 = INT64_MIN;
	int8_t x272 = -1;
	volatile int32_t t67 = 28;

	t67 = (x269==(x270<=(x271^x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = -7;
	int8_t x275 = INT8_MIN;
	uint32_t x276 = 50086U;
	volatile int32_t t68 = -87;

	t68 = (x273==(x274<=(x275^x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = -4739;
	volatile int64_t x279 = INT64_MIN;
	static uint8_t x280 = 86U;
	static volatile int32_t t69 = -7697841;

	t69 = (x277==(x278<=(x279^x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 19U;
	static uint8_t x282 = UINT8_MAX;
	uint16_t x283 = 1U;
	uint64_t x284 = 56856891788LLU;

	t70 = (x281==(x282<=(x283^x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = -1;
	static int8_t x286 = 13;
	int64_t x288 = INT64_MAX;
	volatile int32_t t71 = 298;

	t71 = (x285==(x286<=(x287^x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = -1;
	static int8_t x291 = -1;
	int8_t x292 = 1;
	volatile int32_t t72 = -349379;

	t72 = (x289==(x290<=(x291^x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 26357335U;
	static uint32_t x294 = 237058983U;
	uint16_t x295 = UINT16_MAX;
	uint64_t x296 = UINT64_MAX;
	int32_t t73 = 1;

	t73 = (x293==(x294<=(x295^x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 184U;
	static volatile int16_t x298 = INT16_MAX;
	uint32_t x299 = 59399298U;
	int64_t x300 = -1LL;
	static volatile int32_t t74 = -31354;

	t74 = (x297==(x298<=(x299^x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 3;
	int16_t x302 = INT16_MIN;
	static int16_t x303 = INT16_MIN;
	volatile int64_t x304 = -1LL;
	volatile int32_t t75 = 669;

	t75 = (x301==(x302<=(x303^x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = 2516149;
	int16_t x307 = 0;
	static int32_t x308 = INT32_MAX;

	t76 = (x305==(x306<=(x307^x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = -3861;
	volatile int8_t x311 = -1;
	static int16_t x312 = -1;
	volatile int32_t t77 = 212414606;

	t77 = (x309==(x310<=(x311^x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	volatile int32_t t78 = -59623264;

	t78 = (x313==(x314<=(x315^x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	uint16_t x318 = UINT16_MAX;
	int32_t x319 = INT32_MIN;
	volatile uint8_t x320 = UINT8_MAX;
	int32_t t79 = 76336;

	t79 = (x317==(x318<=(x319^x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 5U;
	uint8_t x322 = 3U;
	uint8_t x323 = 58U;
	volatile int32_t t80 = 82;

	t80 = (x321==(x322<=(x323^x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 1;

	t81 = (x325==(x326<=(x327^x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 1U;
	uint16_t x330 = 29622U;
	volatile int32_t x331 = -7206770;
	int8_t x332 = -2;
	static int32_t t82 = 417;

	t82 = (x329==(x330<=(x331^x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 1U;
	static uint8_t x335 = 108U;
	uint8_t x336 = UINT8_MAX;

	t83 = (x333==(x334<=(x335^x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	static uint32_t x339 = UINT32_MAX;

	t84 = (x337==(x338<=(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -15LL;
	static volatile uint8_t x342 = 15U;
	volatile int32_t t85 = -224;

	t85 = (x341==(x342<=(x343^x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	uint16_t x346 = UINT16_MAX;
	int64_t x347 = -1LL;
	static uint16_t x348 = UINT16_MAX;
	int32_t t86 = 591145;

	t86 = (x345==(x346<=(x347^x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = -1LL;
	static int32_t x350 = INT32_MIN;
	uint8_t x351 = 54U;
	int8_t x352 = INT8_MAX;
	int32_t t87 = -12710762;

	t87 = (x349==(x350<=(x351^x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	volatile uint8_t x354 = 1U;
	volatile int16_t x355 = 1;

	t88 = (x353==(x354<=(x355^x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int32_t x358 = INT32_MAX;
	int8_t x359 = -55;
	int32_t x360 = INT32_MIN;
	static volatile int32_t t89 = -1634;

	t89 = (x357==(x358<=(x359^x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x361 = INT64_MAX;
	volatile int64_t x362 = INT64_MIN;
	int16_t x363 = -8232;
	int64_t x364 = INT64_MIN;
	int32_t t90 = -1;

	t90 = (x361==(x362<=(x363^x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 35U;
	int16_t x366 = -13;
	int32_t x368 = -20862;
	static int32_t t91 = 51176;

	t91 = (x365==(x366<=(x367^x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = INT8_MIN;
	static volatile uint8_t x370 = 11U;
	uint32_t x372 = UINT32_MAX;

	t92 = (x369==(x370<=(x371^x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x374 = 0U;
	volatile uint8_t x375 = 0U;
	uint8_t x376 = 127U;

	t93 = (x373==(x374<=(x375^x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 0;
	static int32_t x378 = INT32_MIN;
	static uint32_t x379 = 289601U;
	int16_t x380 = INT16_MIN;
	int32_t t94 = 225904282;

	t94 = (x377==(x378<=(x379^x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	static int32_t x382 = INT32_MAX;
	int16_t x383 = INT16_MIN;
	static int32_t x384 = INT32_MAX;
	static volatile int32_t t95 = -240806887;

	t95 = (x381==(x382<=(x383^x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	uint32_t x386 = UINT32_MAX;
	volatile int16_t x387 = INT16_MAX;
	int8_t x388 = -1;

	t96 = (x385==(x386<=(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MAX;
	static uint32_t x390 = 435U;
	int8_t x391 = -1;
	int64_t x392 = INT64_MIN;
	int32_t t97 = 0;

	t97 = (x389==(x390<=(x391^x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int32_t x394 = INT32_MAX;
	static volatile int8_t x395 = INT8_MIN;
	static int8_t x396 = -1;

	t98 = (x393==(x394<=(x395^x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MAX;
	int32_t x398 = -1;
	volatile uint8_t x400 = 0U;
	volatile int32_t t99 = 532;

	t99 = (x397==(x398<=(x399^x400)));

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

