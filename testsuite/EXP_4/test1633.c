#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x4 = INT16_MAX;
volatile int32_t t1 = 195608;
static uint8_t x11 = 94U;
uint8_t x13 = 33U;
static uint64_t x17 = UINT64_MAX;
static int16_t x21 = -14000;
static volatile int64_t x23 = INT64_MIN;
int16_t x24 = -1781;
int64_t x25 = 251428082793486LL;
int32_t x30 = -1;
static int8_t x31 = INT8_MAX;
uint32_t x37 = UINT32_MAX;
volatile int32_t t9 = -1;
uint16_t x49 = UINT16_MAX;
static int64_t x51 = -1LL;
int8_t x66 = INT8_MIN;
static int8_t x67 = 17;
int8_t x69 = INT8_MIN;
volatile int32_t t17 = 221;
volatile int32_t x73 = -68532;
volatile int32_t t18 = -100597046;
static int32_t x77 = INT32_MAX;
uint8_t x80 = 7U;
static int32_t x81 = INT32_MIN;
int32_t x82 = INT32_MIN;
uint8_t x87 = 1U;
volatile uint16_t x92 = 28U;
int32_t x95 = 2613;
static int16_t x97 = INT16_MIN;
static int16_t x103 = INT16_MIN;
static int8_t x105 = -1;
static uint32_t x107 = 6U;
int32_t x109 = 1;
static int32_t t28 = 29335071;
uint32_t x120 = UINT32_MAX;
static uint8_t x124 = 7U;
static int64_t x129 = INT64_MAX;
int32_t t33 = -12;
uint32_t x137 = 108165U;
int16_t x146 = 0;
uint8_t x150 = 1U;
int16_t x156 = INT16_MIN;
static volatile int32_t t38 = -1651001;
uint16_t x160 = 32U;
int32_t t39 = -42;
volatile uint16_t x161 = 8034U;
uint8_t x169 = 11U;
int64_t x173 = INT64_MAX;
uint32_t x181 = UINT32_MAX;
int8_t x182 = -61;
uint8_t x183 = 15U;
int32_t t46 = 1025079;
volatile uint8_t x192 = UINT8_MAX;
volatile int32_t x195 = -1;
volatile int8_t x199 = INT8_MIN;
volatile int32_t t50 = -270733645;
int8_t x211 = INT8_MIN;
uint8_t x218 = UINT8_MAX;
uint32_t x222 = 85415296U;
int8_t x229 = INT8_MIN;
uint8_t x232 = UINT8_MAX;
int32_t x244 = 260243;
int8_t x248 = INT8_MIN;
int32_t x250 = 3652681;
uint16_t x251 = UINT16_MAX;
uint64_t x255 = 6LLU;
static uint32_t x256 = 182317U;
int32_t x261 = -1;
volatile uint8_t x263 = UINT8_MAX;
int32_t x269 = INT32_MIN;
int32_t t69 = -19812973;
uint8_t x283 = UINT8_MAX;
volatile uint32_t x285 = UINT32_MAX;
uint8_t x287 = 5U;
int8_t x289 = -5;
int16_t x290 = INT16_MAX;
int32_t t72 = 21724050;
int64_t x298 = INT64_MAX;
int16_t x305 = 2077;
static volatile uint16_t x307 = 4735U;
int32_t x309 = -1;
volatile int8_t x310 = -53;
int16_t x317 = INT16_MIN;
int32_t x318 = INT32_MIN;
static int64_t x323 = -1LL;
volatile int16_t x326 = -756;
static int32_t t81 = 5713537;
volatile int64_t x330 = INT64_MIN;
int16_t x337 = 0;
uint64_t x351 = 9LLU;
uint8_t x354 = 21U;
uint32_t x355 = UINT32_MAX;
int16_t x356 = 1019;
int32_t x363 = 185245;
volatile int64_t x370 = INT64_MIN;
static int16_t x378 = 0;
uint32_t x382 = 515U;
volatile int32_t t95 = -40861;
int32_t x385 = -7921;
uint32_t x386 = 1U;
int32_t x395 = INT32_MAX;
volatile int32_t t98 = 196;
int32_t x398 = -1;
int32_t t99 = 31;


void f0(void) {
	int8_t x1 = 17;
	static uint64_t x2 = 0LLU;
	volatile uint16_t x3 = UINT16_MAX;
	int32_t t0 = -1;

	t0 = (x1==(x2<(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int16_t x6 = -1;
	int32_t x7 = INT32_MIN;
	int32_t x8 = -1;

	t1 = (x5==(x6<(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 3;
	int16_t x10 = INT16_MIN;
	static int32_t x12 = INT32_MIN;
	int32_t t2 = -35886802;

	t2 = (x9==(x10<(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x14 = UINT32_MAX;
	int32_t x15 = -2209116;
	int32_t x16 = 10176;
	int32_t t3 = 890858;

	t3 = (x13==(x14<(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -1LL;
	static volatile uint16_t x19 = 30U;
	static int32_t x20 = 15;
	int32_t t4 = -60918;

	t4 = (x17==(x18<(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = 1;
	int32_t t5 = -229401310;

	t5 = (x21==(x22<(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x26 = UINT8_MAX;
	uint8_t x27 = 13U;
	int32_t x28 = -173931603;
	static volatile int32_t t6 = 28686935;

	t6 = (x25==(x26<(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 552U;
	int64_t x32 = INT64_MIN;
	int32_t t7 = -3760;

	t7 = (x29==(x30<(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = 1;
	int32_t x34 = INT32_MIN;
	uint8_t x35 = UINT8_MAX;
	static int64_t x36 = -12741124LL;
	volatile int32_t t8 = 118057;

	t8 = (x33==(x34<(x35<=x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = INT16_MAX;
	static int16_t x39 = INT16_MAX;
	uint32_t x40 = 650U;

	t9 = (x37==(x38<(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	volatile uint32_t x42 = 883119U;
	uint8_t x43 = 82U;
	volatile int32_t x44 = INT32_MIN;
	int32_t t10 = -3393;

	t10 = (x41==(x42<(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MAX;
	static volatile int16_t x46 = INT16_MAX;
	static uint8_t x47 = UINT8_MAX;
	uint8_t x48 = 10U;
	int32_t t11 = -2368;

	t11 = (x45==(x46<(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = 3U;
	static int16_t x52 = INT16_MIN;
	static int32_t t12 = 2628;

	t12 = (x49==(x50<(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -1;
	int8_t x54 = INT8_MAX;
	volatile uint64_t x55 = 6572268393509530LLU;
	uint16_t x56 = 79U;
	int32_t t13 = -497008176;

	t13 = (x53==(x54<(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	int32_t x58 = 66111;
	volatile uint64_t x59 = 325061075428879397LLU;
	static volatile int8_t x60 = -1;
	int32_t t14 = 5560711;

	t14 = (x57==(x58<(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -7160;
	static int8_t x62 = -1;
	int64_t x63 = -1LL;
	static int64_t x64 = INT64_MIN;
	static int32_t t15 = 25238;

	t15 = (x61==(x62<(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	static int64_t x68 = -1LL;
	static volatile int32_t t16 = -1241;

	t16 = (x65==(x66<(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MIN;
	int16_t x71 = -1;
	uint32_t x72 = 1716646U;

	t17 = (x69==(x70<(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = -1;
	static volatile int8_t x75 = INT8_MIN;
	volatile uint64_t x76 = 169727660402788LLU;

	t18 = (x73==(x74<(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = 91U;
	volatile int64_t x79 = -1LL;
	volatile int32_t t19 = -52092;

	t19 = (x77==(x78<(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x83 = 0U;
	static int32_t x84 = 2910;
	static volatile int32_t t20 = -1;

	t20 = (x81==(x82<(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MIN;
	static int16_t x86 = -8545;
	static int16_t x88 = 1383;
	volatile int32_t t21 = 1;

	t21 = (x85==(x86<(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	static int8_t x90 = 1;
	int64_t x91 = INT64_MIN;
	int32_t t22 = -48;

	t22 = (x89==(x90<(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int16_t x94 = INT16_MIN;
	int8_t x96 = INT8_MIN;
	int32_t t23 = -15931;

	t23 = (x93==(x94<(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 50539444LLU;
	int64_t x99 = -1684LL;
	int16_t x100 = -1;
	volatile int32_t t24 = -128206;

	t24 = (x97==(x98<(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MIN;
	static int16_t x102 = INT16_MIN;
	uint32_t x104 = UINT32_MAX;
	volatile int32_t t25 = 2912032;

	t25 = (x101==(x102<(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x106 = INT16_MIN;
	volatile uint32_t x108 = 516232441U;
	int32_t t26 = 1;

	t26 = (x105==(x106<(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x110 = INT32_MAX;
	int64_t x111 = 28683221481LL;
	int16_t x112 = 69;
	static int32_t t27 = -1904250;

	t27 = (x109==(x110<(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int64_t x114 = INT64_MIN;
	volatile int32_t x115 = -1;
	static int8_t x116 = INT8_MIN;

	t28 = (x113==(x114<(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 5014129U;
	volatile uint32_t x118 = 62858U;
	uint64_t x119 = 2488745304382479LLU;
	static int32_t t29 = -502479961;

	t29 = (x117==(x118<(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int64_t x122 = INT64_MIN;
	int64_t x123 = INT64_MAX;
	int32_t t30 = 0;

	t30 = (x121==(x122<(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x125 = 3U;
	int64_t x126 = INT64_MIN;
	static int8_t x127 = -24;
	uint16_t x128 = 3U;
	volatile int32_t t31 = 75028047;

	t31 = (x125==(x126<(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = -1;
	int32_t x131 = INT32_MAX;
	int32_t x132 = 619097;
	volatile int32_t t32 = 2261659;

	t32 = (x129==(x130<(x131<=x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = 10648;
	int8_t x134 = 3;
	int16_t x135 = 1;
	uint64_t x136 = UINT64_MAX;

	t33 = (x133==(x134<(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = 80814;
	int8_t x139 = 1;
	volatile int16_t x140 = 62;
	static int32_t t34 = 0;

	t34 = (x137==(x138<(x139<=x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -1;
	int8_t x142 = 0;
	static uint64_t x143 = 1415433144824LLU;
	static int8_t x144 = -5;
	int32_t t35 = 617442582;

	t35 = (x141==(x142<(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = -28;
	static int16_t x147 = INT16_MAX;
	uint16_t x148 = 42U;
	int32_t t36 = 25;

	t36 = (x145==(x146<(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = 27U;
	volatile int8_t x151 = -14;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -1066765713;

	t37 = (x149==(x150<(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 622843962750491LLU;
	int16_t x154 = INT16_MAX;
	int8_t x155 = INT8_MAX;

	t38 = (x153==(x154<(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 1135LLU;
	volatile uint32_t x158 = UINT32_MAX;
	static uint32_t x159 = UINT32_MAX;

	t39 = (x157==(x158<(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x162 = INT16_MAX;
	static uint8_t x163 = 3U;
	uint64_t x164 = UINT64_MAX;
	int32_t t40 = 57;

	t40 = (x161==(x162<(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 0;
	int8_t x166 = -1;
	int32_t x167 = INT32_MIN;
	uint64_t x168 = 9760LLU;
	volatile int32_t t41 = 5023;

	t41 = (x165==(x166<(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MIN;
	uint8_t x171 = UINT8_MAX;
	int16_t x172 = INT16_MAX;
	int32_t t42 = 6521637;

	t42 = (x169==(x170<(x171<=x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x174 = UINT32_MAX;
	uint64_t x175 = 1457922306LLU;
	volatile uint32_t x176 = 7030514U;
	int32_t t43 = 940;

	t43 = (x173==(x174<(x175<=x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 3U;
	volatile int16_t x178 = -1;
	int32_t x179 = INT32_MIN;
	volatile uint32_t x180 = UINT32_MAX;
	int32_t t44 = -269672026;

	t44 = (x177==(x178<(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x184 = 7U;
	int32_t t45 = -449;

	t45 = (x181==(x182<(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 0;
	volatile uint8_t x186 = 5U;
	int8_t x187 = INT8_MIN;
	uint64_t x188 = 6481300478429722LLU;

	t46 = (x185==(x186<(x187<=x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 686497111494LLU;
	int64_t x190 = -1LL;
	uint64_t x191 = 11087LLU;
	static int32_t t47 = 1;

	t47 = (x189==(x190<(x191<=x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	volatile uint16_t x194 = 26685U;
	int16_t x196 = INT16_MIN;
	int32_t t48 = -8;

	t48 = (x193==(x194<(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 2U;
	volatile uint8_t x198 = 15U;
	uint16_t x200 = 5U;
	static volatile int32_t t49 = 351667;

	t49 = (x197==(x198<(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 245007823968LL;
	volatile uint64_t x202 = 105301535580391LLU;
	volatile uint8_t x203 = UINT8_MAX;
	int16_t x204 = 0;

	t50 = (x201==(x202<(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = 73U;
	int16_t x206 = INT16_MIN;
	int16_t x207 = 6833;
	uint16_t x208 = 0U;
	volatile int32_t t51 = -8257192;

	t51 = (x205==(x206<(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	static int64_t x210 = INT64_MIN;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = -1986560;

	t52 = (x209==(x210<(x211<=x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x213 = UINT32_MAX;
	int64_t x214 = -884545165LL;
	int16_t x215 = 0;
	uint64_t x216 = UINT64_MAX;
	int32_t t53 = -120483;

	t53 = (x213==(x214<(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	uint8_t x219 = 14U;
	int64_t x220 = 177673912747LL;
	int32_t t54 = 1192802;

	t54 = (x217==(x218<(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = INT32_MAX;
	volatile int16_t x223 = -1;
	int64_t x224 = 39245373084570675LL;
	volatile int32_t t55 = 459;

	t55 = (x221==(x222<(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1208;
	int8_t x226 = INT8_MIN;
	static int16_t x227 = INT16_MIN;
	static uint32_t x228 = UINT32_MAX;
	int32_t t56 = -340;

	t56 = (x225==(x226<(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = 1U;
	int16_t x231 = INT16_MIN;
	volatile int32_t t57 = -885;

	t57 = (x229==(x230<(x231<=x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -57;
	static uint8_t x234 = UINT8_MAX;
	static int32_t x235 = INT32_MAX;
	static uint16_t x236 = 13U;
	int32_t t58 = 479;

	t58 = (x233==(x234<(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x237 = UINT32_MAX;
	int32_t x238 = INT32_MIN;
	volatile uint8_t x239 = 3U;
	static uint32_t x240 = 0U;
	volatile int32_t t59 = -6795;

	t59 = (x237==(x238<(x239<=x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = -1;
	uint64_t x242 = 141LLU;
	volatile int32_t x243 = INT32_MAX;
	int32_t t60 = 229378;

	t60 = (x241==(x242<(x243<=x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MIN;
	int64_t x246 = 126424145LL;
	volatile uint32_t x247 = 345U;
	volatile int32_t t61 = -34;

	t61 = (x245==(x246<(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 3;
	uint32_t x252 = 109U;
	static volatile int32_t t62 = -989753937;

	t62 = (x249==(x250<(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	int32_t x254 = INT32_MIN;
	int32_t t63 = -323064;

	t63 = (x253==(x254<(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x257 = 2U;
	volatile int32_t x258 = INT32_MIN;
	int64_t x259 = INT64_MIN;
	static int8_t x260 = -1;
	volatile int32_t t64 = 1;

	t64 = (x257==(x258<(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x262 = INT8_MIN;
	volatile int16_t x264 = -26;
	static int32_t t65 = 7536;

	t65 = (x261==(x262<(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	int32_t x266 = INT32_MAX;
	int32_t x267 = INT32_MIN;
	uint64_t x268 = UINT64_MAX;
	static int32_t t66 = -3994;

	t66 = (x265==(x266<(x267<=x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = 1598821036682LLU;
	int8_t x271 = 0;
	volatile uint64_t x272 = 7384LLU;
	volatile int32_t t67 = 1;

	t67 = (x269==(x270<(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 4LLU;
	int16_t x274 = 1752;
	static int8_t x275 = INT8_MIN;
	static uint16_t x276 = 25U;
	int32_t t68 = 10390;

	t68 = (x273==(x274<(x275<=x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = 17528;
	int8_t x278 = INT8_MIN;
	uint8_t x279 = 29U;
	int32_t x280 = INT32_MAX;

	t69 = (x277==(x278<(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	volatile uint32_t x282 = 148592852U;
	uint32_t x284 = UINT32_MAX;
	static volatile int32_t t70 = 246033693;

	t70 = (x281==(x282<(x283<=x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x286 = 52093663LLU;
	int16_t x288 = 0;
	volatile int32_t t71 = -462813094;

	t71 = (x285==(x286<(x287<=x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x291 = 179U;
	int64_t x292 = INT64_MIN;

	t72 = (x289==(x290<(x291<=x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	volatile int16_t x294 = INT16_MIN;
	int16_t x295 = INT16_MIN;
	static int16_t x296 = -29;
	static volatile int32_t t73 = 4;

	t73 = (x293==(x294<(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 26U;
	int16_t x299 = INT16_MAX;
	uint64_t x300 = 1021915082143LLU;
	volatile int32_t t74 = -2;

	t74 = (x297==(x298<(x299<=x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	int32_t x302 = 326870;
	int32_t x303 = 530;
	uint32_t x304 = 1543U;
	static int32_t t75 = -1390925;

	t75 = (x301==(x302<(x303<=x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x306 = 0U;
	uint32_t x308 = UINT32_MAX;
	int32_t t76 = -1;

	t76 = (x305==(x306<(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x311 = UINT8_MAX;
	uint64_t x312 = UINT64_MAX;
	volatile int32_t t77 = 5;

	t77 = (x309==(x310<(x311<=x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 1U;
	uint16_t x314 = 76U;
	uint16_t x315 = 2U;
	uint8_t x316 = 1U;
	static volatile int32_t t78 = -133960;

	t78 = (x313==(x314<(x315<=x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x319 = UINT16_MAX;
	int64_t x320 = INT64_MIN;
	volatile int32_t t79 = -1461973;

	t79 = (x317==(x318<(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	int32_t x322 = INT32_MAX;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t80 = -18130695;

	t80 = (x321==(x322<(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x325 = UINT32_MAX;
	int16_t x327 = 51;
	uint16_t x328 = UINT16_MAX;

	t81 = (x325==(x326<(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x329 = UINT8_MAX;
	int64_t x331 = INT64_MIN;
	int32_t x332 = INT32_MIN;
	int32_t t82 = -7612;

	t82 = (x329==(x330<(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 517U;
	int32_t x334 = INT32_MIN;
	int16_t x335 = INT16_MAX;
	uint8_t x336 = 1U;
	int32_t t83 = -621224;

	t83 = (x333==(x334<(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x338 = 10212U;
	volatile int8_t x339 = INT8_MAX;
	int8_t x340 = -1;
	int32_t t84 = -123893;

	t84 = (x337==(x338<(x339<=x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = UINT16_MAX;
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = 1;
	static int16_t x344 = 1;
	volatile int32_t t85 = 24;

	t85 = (x341==(x342<(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	static volatile uint8_t x346 = 7U;
	uint32_t x347 = 3U;
	uint64_t x348 = 64568277LLU;
	static int32_t t86 = -31684;

	t86 = (x345==(x346<(x347<=x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = INT16_MIN;
	int64_t x350 = -1063548635493134LL;
	static volatile int8_t x352 = -1;
	static int32_t t87 = -154;

	t87 = (x349==(x350<(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MIN;
	int32_t t88 = -3218;

	t88 = (x353==(x354<(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -1;
	int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MIN;
	int64_t x360 = -1LL;
	int32_t t89 = 17243;

	t89 = (x357==(x358<(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 982U;
	int8_t x362 = 31;
	int32_t x364 = INT32_MAX;
	int32_t t90 = -90;

	t90 = (x361==(x362<(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x365 = UINT64_MAX;
	int8_t x366 = INT8_MAX;
	volatile uint8_t x367 = 94U;
	int16_t x368 = INT16_MAX;
	volatile int32_t t91 = 34;

	t91 = (x365==(x366<(x367<=x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = 1;
	int64_t x371 = INT64_MIN;
	volatile int16_t x372 = INT16_MIN;
	volatile int32_t t92 = 8098;

	t92 = (x369==(x370<(x371<=x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = -1;
	uint16_t x374 = 273U;
	uint16_t x375 = UINT16_MAX;
	uint8_t x376 = 15U;
	int32_t t93 = -211;

	t93 = (x373==(x374<(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MIN;
	static uint32_t x379 = 214379542U;
	uint64_t x380 = 183LLU;
	static int32_t t94 = -16;

	t94 = (x377==(x378<(x379<=x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int32_t x383 = INT32_MAX;
	static uint64_t x384 = UINT64_MAX;

	t95 = (x381==(x382<(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x387 = 1;
	volatile int64_t x388 = -28720339641744634LL;
	static volatile int32_t t96 = -5211;

	t96 = (x385==(x386<(x387<=x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = 2051;
	uint64_t x390 = 230071596LLU;
	uint16_t x391 = 176U;
	static int16_t x392 = INT16_MIN;
	int32_t t97 = -1010;

	t97 = (x389==(x390<(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	uint64_t x394 = 320004253987856309LLU;
	int16_t x396 = INT16_MIN;

	t98 = (x393==(x394<(x395<=x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	int32_t x399 = INT32_MAX;
	static volatile int32_t x400 = 765226;

	t99 = (x397==(x398<(x399<=x400)));

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

