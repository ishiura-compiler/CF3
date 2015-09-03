#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = 7U;
int32_t x6 = 590217745;
int32_t x8 = INT32_MIN;
volatile int32_t t2 = -10947760;
volatile int32_t t4 = 680;
uint64_t x24 = UINT64_MAX;
int64_t t7 = INT64_MIN;
int16_t x35 = -102;
int32_t t9 = 0;
uint16_t x45 = 6U;
int32_t t11 = 1793894;
uint16_t x49 = 3U;
int16_t x55 = INT16_MAX;
uint64_t x58 = 7777023952985LLU;
uint64_t x63 = UINT64_MAX;
uint8_t x66 = 6U;
volatile int64_t x70 = -1051368LL;
int64_t x81 = INT64_MIN;
static int32_t x83 = -83;
volatile int64_t t20 = INT64_MIN;
static int32_t x85 = -1;
volatile int32_t t21 = -58014816;
int16_t x90 = INT16_MIN;
int32_t x91 = -3;
volatile int32_t x93 = INT32_MIN;
int32_t t23 = INT32_MIN;
static int64_t x103 = 7816722336LL;
static volatile int64_t t25 = 292457082433587LL;
int32_t x110 = 11874731;
int16_t x111 = -1;
uint16_t x116 = 182U;
int8_t x119 = INT8_MIN;
int16_t x121 = INT16_MAX;
int64_t x128 = 2123937283932008LL;
volatile int16_t x129 = -1;
static uint16_t x132 = UINT16_MAX;
volatile int32_t t32 = 4;
int32_t x133 = -1;
int8_t x136 = -2;
int32_t t33 = -219;
volatile uint64_t x153 = UINT64_MAX;
static int32_t x154 = INT32_MIN;
static uint64_t t38 = UINT64_MAX;
int64_t x158 = -1LL;
int8_t x165 = INT8_MIN;
volatile int32_t t41 = 9531;
int16_t x172 = INT16_MIN;
int32_t t45 = -20571743;
volatile int64_t x191 = INT64_MIN;
static uint64_t x201 = UINT64_MAX;
volatile int16_t x214 = INT16_MAX;
int64_t x215 = INT64_MIN;
static volatile int32_t t53 = 3282;
volatile int32_t x218 = -1;
static uint16_t x219 = 21U;
volatile int8_t x220 = INT8_MIN;
static int32_t x225 = INT32_MIN;
int32_t x226 = INT32_MAX;
static int16_t x244 = -1;
int32_t x245 = -281664082;
int32_t t62 = 907553;
uint8_t x253 = UINT8_MAX;
static volatile uint16_t x262 = UINT16_MAX;
static int16_t x266 = INT16_MAX;
int8_t x272 = -1;
int16_t x274 = INT16_MAX;
int8_t x276 = 0;
int16_t x279 = INT16_MIN;
int64_t x281 = INT64_MAX;
int64_t t70 = INT64_MAX;
volatile int32_t x289 = INT32_MIN;
int16_t x291 = -4982;
static int64_t x293 = -1LL;
static volatile uint32_t x296 = UINT32_MAX;
int32_t x297 = -12;
uint64_t x301 = 1LLU;
static int8_t x310 = 1;
volatile int64_t t77 = -88876486991519LL;
uint16_t x313 = 978U;
uint16_t x324 = UINT16_MAX;
volatile int16_t x327 = INT16_MAX;
int16_t x337 = -1;
int8_t x342 = -3;
volatile int64_t x344 = INT64_MIN;
volatile int32_t t85 = -18;
volatile int32_t x345 = INT32_MAX;
int16_t x346 = INT16_MIN;
int64_t x347 = INT64_MAX;
uint16_t x350 = 16079U;
uint32_t x353 = 39841U;
static volatile uint64_t x356 = UINT64_MAX;
int8_t x357 = INT8_MIN;
volatile int32_t t89 = 16017356;
static int64_t x374 = 37478LL;
static volatile int32_t t93 = INT32_MAX;
volatile uint32_t t94 = 142U;
uint8_t x384 = 1U;
volatile int64_t x387 = INT64_MAX;


void f0(void) {
	int64_t x2 = INT64_MIN;
	uint64_t x3 = UINT64_MAX;
	static volatile int16_t x4 = INT16_MAX;
	static int32_t t0 = -179882221;

	t0 = (x1|(x2<(x3^x4)));

	if (t0 != 7) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	uint32_t x7 = 300U;
	volatile int32_t t1 = -23209;

	t1 = (x5|(x6<(x7^x8)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MAX;
	static volatile int32_t x10 = INT32_MIN;
	volatile int8_t x11 = INT8_MIN;
	volatile uint32_t x12 = 142U;

	t2 = (x9|(x10<(x11^x12)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 1U;
	int16_t x14 = 14345;
	int64_t x15 = -2035601056433208592LL;
	uint32_t x16 = 278588050U;
	static volatile int32_t t3 = -108;

	t3 = (x13|(x14<(x15^x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 10189U;
	int32_t x18 = INT32_MAX;
	static uint32_t x19 = 1918750837U;
	int32_t x20 = 33;

	t4 = (x17|(x18<(x19^x20)));

	if (t4 != 10189) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	volatile int32_t x22 = INT32_MIN;
	static int32_t x23 = INT32_MIN;
	static int32_t t5 = -525365;

	t5 = (x21|(x22<(x23^x24)));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	uint8_t x26 = 0U;
	int8_t x27 = -1;
	int64_t x28 = -3424854610991453LL;
	int64_t t6 = 654464286LL;

	t6 = (x25|(x26<(x27^x28)));

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	static uint64_t x30 = UINT64_MAX;
	uint16_t x31 = 32754U;
	volatile int8_t x32 = INT8_MAX;

	t7 = (x29|(x30<(x31^x32)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -6;
	uint8_t x34 = 123U;
	volatile uint32_t x36 = 1U;
	volatile int32_t t8 = 0;

	t8 = (x33|(x34<(x35^x36)));

	if (t8 != -5) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	int32_t x38 = INT32_MAX;
	uint8_t x39 = 2U;
	int32_t x40 = -32;

	t9 = (x37|(x38<(x39^x40)));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 13016U;
	volatile int64_t x42 = 16509LL;
	uint64_t x43 = 708696809910LLU;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = -18255;

	t10 = (x41|(x42<(x43^x44)));

	if (t10 != 13017) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = UINT64_MAX;
	static int8_t x47 = INT8_MIN;
	volatile uint32_t x48 = 0U;

	t11 = (x45|(x46<(x47^x48)));

	if (t11 != 6) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x50 = 1U;
	static int16_t x51 = 1;
	static int32_t x52 = 36262027;
	static int32_t t12 = 1;

	t12 = (x49|(x50<(x51^x52)));

	if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -663254048117283LL;
	uint32_t x54 = 87584052U;
	int16_t x56 = -5;
	volatile int64_t t13 = -32792979825441933LL;

	t13 = (x53|(x54<(x55^x56)));

	if (t13 != -663254048117283LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MIN;
	int64_t x59 = -51819673066921589LL;
	uint64_t x60 = 124362999315LLU;
	static int32_t t14 = -1772767;

	t14 = (x57|(x58<(x59^x60)));

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static uint8_t x62 = 5U;
	int16_t x64 = INT16_MIN;
	int32_t t15 = 22456;

	t15 = (x61|(x62<(x63^x64)));

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = UINT8_MAX;
	uint32_t x67 = 2U;
	int64_t x68 = INT64_MIN;
	int32_t t16 = 1;

	t16 = (x65|(x66<(x67^x68)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = UINT8_MAX;
	int64_t x71 = INT64_MIN;
	int32_t x72 = -1;
	static volatile int32_t t17 = 60361;

	t17 = (x69|(x70<(x71^x72)));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 0;
	uint32_t x74 = 24133U;
	static int16_t x75 = -11;
	uint16_t x76 = 0U;
	volatile int32_t t18 = -1;

	t18 = (x73|(x74<(x75^x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	static int32_t x78 = -1;
	static uint64_t x79 = 440191217LLU;
	static uint32_t x80 = 3084U;
	volatile int32_t t19 = 26404;

	t19 = (x77|(x78<(x79^x80)));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = UINT32_MAX;
	int16_t x84 = INT16_MIN;

	t20 = (x81|(x82<(x83^x84)));

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x86 = 12U;
	static int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MAX;

	t21 = (x85|(x86<(x87^x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	volatile uint32_t x92 = UINT32_MAX;
	int32_t t22 = INT32_MIN;

	t22 = (x89|(x90<(x91^x92)));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = -1;
	static int32_t x95 = INT32_MAX;
	volatile int64_t x96 = INT64_MIN;

	t23 = (x93|(x94<(x95^x96)));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = -1LL;
	int8_t x98 = INT8_MIN;
	static uint8_t x99 = 11U;
	volatile int32_t x100 = INT32_MIN;
	int64_t t24 = 51034510202951LL;

	t24 = (x97|(x98<(x99^x100)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = 30LL;
	int8_t x102 = INT8_MAX;
	int64_t x104 = INT64_MIN;

	t25 = (x101|(x102<(x103^x104)));

	if (t25 != 30LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MIN;
	int8_t x106 = INT8_MAX;
	int64_t x107 = -1LL;
	volatile int16_t x108 = INT16_MIN;
	volatile int64_t t26 = -2850233LL;

	t26 = (x105|(x106<(x107^x108)));

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -678740508LL;
	uint8_t x112 = 0U;
	static volatile int64_t t27 = 58876607082103LL;

	t27 = (x109|(x110<(x111^x112)));

	if (t27 != -678740508LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = UINT32_MAX;
	int64_t x114 = -440367LL;
	uint8_t x115 = 31U;
	static volatile uint32_t t28 = UINT32_MAX;

	t28 = (x113|(x114<(x115^x116)));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	static int64_t x118 = -173745LL;
	uint32_t x120 = UINT32_MAX;
	int32_t t29 = -211053413;

	t29 = (x117|(x118<(x119^x120)));

	if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = 7;
	int32_t x123 = INT32_MAX;
	int16_t x124 = INT16_MIN;
	volatile int32_t t30 = 1010771;

	t30 = (x121|(x122<(x123^x124)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -28;
	uint32_t x126 = UINT32_MAX;
	int8_t x127 = -1;
	int32_t t31 = -17;

	t31 = (x125|(x126<(x127^x128)));

	if (t31 != -28) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = -50281587;
	int32_t x131 = -731;

	t32 = (x129|(x130<(x131^x132)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = INT64_MIN;
	static int16_t x135 = -1;

	t33 = (x133|(x134<(x135^x136)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = UINT32_MAX;
	int64_t x138 = 3929LL;
	int64_t x139 = INT64_MIN;
	uint8_t x140 = 3U;
	uint32_t t34 = UINT32_MAX;

	t34 = (x137|(x138<(x139^x140)));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	static int8_t x142 = -1;
	int8_t x143 = 2;
	static volatile int8_t x144 = -11;
	static int32_t t35 = 19;

	t35 = (x141|(x142<(x143^x144)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	int16_t x146 = 52;
	int64_t x147 = INT64_MAX;
	uint64_t x148 = UINT64_MAX;
	static volatile int64_t t36 = 7897546819627LL;

	t36 = (x145|(x146<(x147^x148)));

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = UINT16_MAX;
	int32_t x150 = -1;
	static int32_t x151 = INT32_MIN;
	static uint16_t x152 = 6U;
	int32_t t37 = -17173;

	t37 = (x149|(x150<(x151^x152)));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x155 = 5706275801470LL;
	volatile int16_t x156 = INT16_MAX;

	t38 = (x153|(x154<(x155^x156)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 409U;
	static int32_t x159 = INT32_MIN;
	volatile int64_t x160 = -1LL;
	int32_t t39 = -1813365;

	t39 = (x157|(x158<(x159^x160)));

	if (t39 != 409) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MAX;
	int32_t x162 = 2472042;
	uint64_t x163 = 84027030760131733LLU;
	int32_t x164 = 66685762;
	static volatile int32_t t40 = -1435428;

	t40 = (x161|(x162<(x163^x164)));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x166 = -1;
	int16_t x167 = 5;
	volatile int32_t x168 = -32719;

	t41 = (x165|(x166<(x167^x168)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 31;
	volatile int64_t x170 = -5612LL;
	int64_t x171 = INT64_MIN;
	volatile int32_t t42 = -1;

	t42 = (x169|(x170<(x171^x172)));

	if (t42 != 31) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 1002027188654261LLU;
	int8_t x174 = INT8_MIN;
	volatile int8_t x175 = INT8_MAX;
	int32_t x176 = -1;
	volatile uint64_t t43 = 63584LLU;

	t43 = (x173|(x174<(x175^x176)));

	if (t43 != 1002027188654261LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	uint8_t x178 = UINT8_MAX;
	uint32_t x179 = 128U;
	static int16_t x180 = INT16_MIN;
	volatile int32_t t44 = -3;

	t44 = (x177|(x178<(x179^x180)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 5;
	int16_t x182 = -25;
	static volatile uint8_t x183 = 2U;
	uint64_t x184 = 73766320717890662LLU;

	t45 = (x181|(x182<(x183^x184)));

	if (t45 != 5) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 851910708LLU;
	int32_t x186 = -238;
	int32_t x187 = -7333376;
	volatile int64_t x188 = INT64_MIN;
	uint64_t t46 = 6606522437174LLU;

	t46 = (x185|(x186<(x187^x188)));

	if (t46 != 851910709LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 16049LLU;
	volatile int8_t x190 = INT8_MIN;
	int32_t x192 = INT32_MIN;
	volatile uint64_t t47 = 292603895142949LLU;

	t47 = (x189|(x190<(x191^x192)));

	if (t47 != 16049LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 21U;
	uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MAX;
	static int8_t x196 = INT8_MIN;
	volatile int32_t t48 = -5;

	t48 = (x193|(x194<(x195^x196)));

	if (t48 != 21) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = 0;
	uint32_t x198 = 6240U;
	int32_t x199 = INT32_MAX;
	volatile int8_t x200 = INT8_MIN;
	volatile int32_t t49 = 707453;

	t49 = (x197|(x198<(x199^x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x202 = UINT32_MAX;
	volatile uint64_t x203 = UINT64_MAX;
	int8_t x204 = INT8_MAX;
	volatile uint64_t t50 = UINT64_MAX;

	t50 = (x201|(x202<(x203^x204)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MIN;
	int64_t x206 = 278574153223497201LL;
	int8_t x207 = -22;
	uint8_t x208 = 45U;
	volatile int32_t t51 = 125523;

	t51 = (x205|(x206<(x207^x208)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	static int64_t x210 = INT64_MIN;
	uint32_t x211 = 9454649U;
	int8_t x212 = INT8_MIN;
	int64_t t52 = INT64_MAX;

	t52 = (x209|(x210<(x211^x212)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MAX;
	uint64_t x216 = 1LLU;

	t53 = (x213|(x214<(x215^x216)));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	static int64_t t54 = -46LL;

	t54 = (x217|(x218<(x219^x220)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 61;
	uint32_t x222 = 407U;
	int64_t x223 = 3339200LL;
	int32_t x224 = INT32_MIN;
	static int32_t t55 = -635056;

	t55 = (x221|(x222<(x223^x224)));

	if (t55 != 61) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x227 = INT8_MIN;
	uint64_t x228 = 356752973736875LLU;
	static volatile int32_t t56 = -3822;

	t56 = (x225|(x226<(x227^x228)));

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x229 = 8426783193916834LLU;
	int32_t x230 = -1;
	volatile int32_t x231 = -655400;
	uint32_t x232 = 2773879U;
	uint64_t t57 = 0LLU;

	t57 = (x229|(x230<(x231^x232)));

	if (t57 != 8426783193916834LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MIN;
	uint64_t x235 = 1705657852712169LLU;
	uint64_t x236 = UINT64_MAX;
	static int32_t t58 = INT32_MIN;

	t58 = (x233|(x234<(x235^x236)));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 59U;
	uint16_t x238 = 16U;
	int8_t x239 = INT8_MIN;
	int64_t x240 = -1LL;
	volatile int32_t t59 = -109364;

	t59 = (x237|(x238<(x239^x240)));

	if (t59 != 59) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int32_t x242 = 14589577;
	int32_t x243 = -171;
	volatile int32_t t60 = INT32_MIN;

	t60 = (x241|(x242<(x243^x244)));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x246 = 100720LLU;
	static int32_t x247 = 2658961;
	volatile int64_t x248 = INT64_MIN;
	int32_t t61 = 1202;

	t61 = (x245|(x246<(x247^x248)));

	if (t61 != -281664081) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 3U;
	int64_t x250 = 9529932831587189LL;
	int64_t x251 = 87LL;
	static uint8_t x252 = 0U;

	t62 = (x249|(x250<(x251^x252)));

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x254 = -50;
	uint64_t x255 = UINT64_MAX;
	int64_t x256 = INT64_MAX;
	int32_t t63 = 476899;

	t63 = (x253|(x254<(x255^x256)));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -37956;
	int16_t x258 = -2;
	uint32_t x259 = 817U;
	volatile int64_t x260 = INT64_MAX;
	int32_t t64 = -3;

	t64 = (x257|(x258<(x259^x260)));

	if (t64 != -37955) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -123132608LL;
	uint32_t x263 = 27558U;
	int32_t x264 = -820;
	volatile int64_t t65 = -23330785554507056LL;

	t65 = (x261|(x262<(x263^x264)));

	if (t65 != -123132607LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	uint32_t x267 = 48759U;
	uint16_t x268 = 3U;
	static volatile int32_t t66 = 804;

	t66 = (x265|(x266<(x267^x268)));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 312514733866471241LLU;
	int8_t x270 = INT8_MAX;
	static volatile uint32_t x271 = 5129U;
	volatile uint64_t t67 = 992449304630407005LLU;

	t67 = (x269|(x270<(x271^x272)));

	if (t67 != 312514733866471241LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 2595U;
	uint32_t x275 = 0U;
	static int32_t t68 = 59458177;

	t68 = (x273|(x274<(x275^x276)));

	if (t68 != 2595) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	static int64_t x278 = -1LL;
	static uint32_t x280 = UINT32_MAX;
	int64_t t69 = -4327554910LL;

	t69 = (x277|(x278<(x279^x280)));

	if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = -1;
	volatile uint64_t x283 = 122271012698460603LLU;
	uint32_t x284 = 3471312U;

	t70 = (x281|(x282<(x283^x284)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = 1020;
	int8_t x286 = -1;
	int16_t x287 = INT16_MIN;
	int16_t x288 = INT16_MIN;
	int32_t t71 = 29411609;

	t71 = (x285|(x286<(x287^x288)));

	if (t71 != 1021) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = 1LL;
	static volatile int64_t x292 = 27627763614LL;
	int32_t t72 = INT32_MIN;

	t72 = (x289|(x290<(x291^x292)));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = -1244683;
	int32_t x295 = -9;
	int64_t t73 = -264908349099LL;

	t73 = (x293|(x294<(x295^x296)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = INT64_MIN;
	int32_t x299 = INT32_MIN;
	static int16_t x300 = INT16_MIN;
	volatile int32_t t74 = -61;

	t74 = (x297|(x298<(x299^x300)));

	if (t74 != -11) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = 0;
	int32_t x303 = INT32_MIN;
	static int8_t x304 = 7;
	static uint64_t t75 = 114824113LLU;

	t75 = (x301|(x302<(x303^x304)));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 9U;
	uint8_t x306 = 16U;
	uint8_t x307 = 0U;
	int32_t x308 = INT32_MIN;
	uint32_t t76 = 197667454U;

	t76 = (x305|(x306<(x307^x308)));

	if (t76 != 9U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	static uint64_t x311 = UINT64_MAX;
	volatile int8_t x312 = -43;

	t77 = (x309|(x310<(x311^x312)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = -1;
	int32_t x315 = -1;
	int8_t x316 = -2;
	static volatile int32_t t78 = -20052;

	t78 = (x313|(x314<(x315^x316)));

	if (t78 != 979) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	volatile int16_t x318 = INT16_MAX;
	static int16_t x319 = -1;
	static uint16_t x320 = 12U;
	int32_t t79 = -65306;

	t79 = (x317|(x318<(x319^x320)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x321 = -1;
	volatile uint32_t x322 = 18U;
	static uint64_t x323 = 93260382721475073LLU;
	int32_t t80 = -89;

	t80 = (x321|(x322<(x323^x324)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	int8_t x326 = INT8_MIN;
	static int64_t x328 = INT64_MIN;
	int32_t t81 = -55;

	t81 = (x325|(x326<(x327^x328)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 1;
	uint16_t x330 = UINT16_MAX;
	int8_t x331 = -1;
	volatile int16_t x332 = INT16_MIN;
	int32_t t82 = -480354;

	t82 = (x329|(x330<(x331^x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = -9938807599257LL;
	int16_t x334 = INT16_MIN;
	uint8_t x335 = 0U;
	int32_t x336 = INT32_MIN;
	volatile int64_t t83 = -60110510LL;

	t83 = (x333|(x334<(x335^x336)));

	if (t83 != -9938807599257LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = INT64_MIN;
	static int8_t x339 = INT8_MIN;
	volatile int64_t x340 = 2581498LL;
	static int32_t t84 = -30746930;

	t84 = (x337|(x338<(x339^x340)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	volatile uint8_t x343 = 3U;

	t85 = (x341|(x342<(x343^x344)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x348 = UINT8_MAX;
	int32_t t86 = INT32_MAX;

	t86 = (x345|(x346<(x347^x348)));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 1394LL;
	int16_t x351 = -1;
	int64_t x352 = INT64_MIN;
	int64_t t87 = 207644963487LL;

	t87 = (x349|(x350<(x351^x352)));

	if (t87 != 1395LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = -1;
	int16_t x355 = INT16_MIN;
	uint32_t t88 = 7U;

	t88 = (x353|(x354<(x355^x356)));

	if (t88 != 39841U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = INT64_MAX;
	static int16_t x359 = -99;
	uint16_t x360 = 27127U;

	t89 = (x357|(x358<(x359^x360)));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	uint16_t x362 = 11865U;
	uint64_t x363 = 38965LLU;
	volatile int8_t x364 = INT8_MAX;
	int32_t t90 = 48215;

	t90 = (x361|(x362<(x363^x364)));

	if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 1U;
	int16_t x366 = -5;
	int64_t x367 = -6876844640LL;
	static uint16_t x368 = UINT16_MAX;
	int32_t t91 = 2905816;

	t91 = (x365|(x366<(x367^x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -7197;
	static int8_t x370 = INT8_MIN;
	static uint8_t x371 = 2U;
	int8_t x372 = INT8_MIN;
	int32_t t92 = 435053365;

	t92 = (x369|(x370<(x371^x372)));

	if (t92 != -7197) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	uint32_t x375 = UINT32_MAX;
	uint64_t x376 = 12714671740LLU;

	t93 = (x373|(x374<(x375^x376)));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x377 = 184U;
	static int64_t x378 = 7913064146LL;
	uint8_t x379 = UINT8_MAX;
	uint64_t x380 = 72LLU;

	t94 = (x377|(x378<(x379^x380)));

	if (t94 != 184U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	static int16_t x382 = -3;
	int16_t x383 = -1;
	int64_t t95 = 72348745LL;

	t95 = (x381|(x382<(x383^x384)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = 466U;
	static uint32_t x386 = 4673U;
	static int8_t x388 = 1;
	int32_t t96 = -15603;

	t96 = (x385|(x386<(x387^x388)));

	if (t96 != 467) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 19;
	int8_t x390 = INT8_MIN;
	uint32_t x391 = 4U;
	int16_t x392 = 19;
	static int32_t t97 = 525036161;

	t97 = (x389|(x390<(x391^x392)));

	if (t97 != 19) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = -2;
	int64_t x394 = -2LL;
	int32_t x395 = INT32_MIN;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t98 = -8717;

	t98 = (x393|(x394<(x395^x396)));

	if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MAX;
	int8_t x398 = -1;
	int16_t x399 = INT16_MIN;
	volatile int64_t x400 = -16554328LL;
	static volatile int32_t t99 = -1;

	t99 = (x397|(x398<(x399^x400)));

	if (t99 != 32767) { NG(); } else { ; }
	
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

