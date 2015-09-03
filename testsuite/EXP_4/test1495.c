#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
volatile int32_t x5 = 1654;
volatile int32_t t1 = -172;
volatile int64_t x10 = INT64_MIN;
static uint8_t x15 = UINT8_MAX;
static uint64_t x18 = 1718533LLU;
static uint32_t x24 = UINT32_MAX;
volatile int64_t x28 = 464318LL;
volatile uint8_t x29 = 19U;
static int16_t x32 = INT16_MIN;
static volatile uint32_t t7 = 470994543U;
int32_t x33 = -1297;
int32_t x37 = INT32_MAX;
int8_t x40 = 0;
uint64_t x43 = 775581064110093LLU;
uint16_t x45 = UINT16_MAX;
int64_t x51 = -1LL;
volatile int8_t x57 = -1;
volatile int32_t t14 = -6852557;
static uint32_t x76 = 21U;
int16_t x79 = INT16_MIN;
uint16_t x83 = 1752U;
volatile int64_t t20 = 82591868LL;
volatile uint8_t x88 = 85U;
volatile uint64_t t21 = 37LLU;
static int64_t x92 = INT64_MIN;
uint64_t t22 = 1543851LLU;
int16_t x102 = INT16_MIN;
int8_t x111 = 1;
uint16_t x112 = 2272U;
int32_t t29 = 2752;
volatile uint32_t x123 = UINT32_MAX;
volatile int8_t x124 = 1;
static int32_t x130 = INT32_MIN;
static volatile int64_t x148 = INT64_MAX;
int64_t x150 = INT64_MIN;
int32_t x151 = INT32_MAX;
int32_t x155 = -1;
int16_t x156 = INT16_MAX;
int32_t t39 = 4069876;
int32_t x167 = INT32_MIN;
int64_t x168 = 451133LL;
uint64_t x172 = 5687984LLU;
int32_t x178 = INT32_MIN;
int64_t x181 = INT64_MIN;
int64_t x184 = -1LL;
static int64_t x194 = INT64_MIN;
uint8_t x203 = 10U;
static volatile uint32_t x204 = 479337U;
uint64_t x206 = 247160393738487059LLU;
volatile int16_t x214 = -1;
int16_t x218 = INT16_MAX;
static volatile int8_t x221 = INT8_MIN;
volatile int16_t x223 = -1;
int16_t x231 = -255;
int64_t t57 = 6850785LL;
int32_t t58 = 5544;
int32_t x239 = -1;
volatile int32_t x242 = -1;
volatile int32_t t61 = 36096;
volatile int8_t x253 = -11;
int32_t t63 = 743;
int8_t x260 = INT8_MIN;
volatile int32_t x261 = INT32_MAX;
int16_t x263 = INT16_MIN;
volatile int32_t t65 = 0;
int64_t x272 = -1LL;
int16_t x281 = 481;
volatile int32_t x291 = -1;
static volatile uint8_t x293 = UINT8_MAX;
uint64_t x297 = 147677047972571LLU;
static int8_t x304 = 3;
static int8_t x308 = -1;
static uint32_t t76 = 2043U;
int64_t t77 = -20LL;
static int64_t x315 = INT64_MIN;
uint32_t x319 = 10U;
static int64_t x323 = 11814586080LL;
int64_t x324 = INT64_MIN;
static int16_t x327 = INT16_MIN;
static int16_t x328 = INT16_MAX;
int64_t t81 = -117215964263539234LL;
int16_t x334 = INT16_MIN;
int32_t x338 = INT32_MIN;
volatile int64_t x342 = -1LL;
int8_t x349 = -1;
uint64_t x351 = 33196596410164616LLU;
int64_t x358 = INT64_MIN;
uint8_t x365 = UINT8_MAX;
int32_t x367 = -52789;
static int32_t x372 = -1;
static int32_t x377 = INT32_MIN;
int16_t x380 = 7475;
int32_t t94 = INT32_MIN;
static uint8_t x383 = UINT8_MAX;
volatile int8_t x384 = 3;
int64_t x387 = 8442211462LL;
uint16_t x388 = UINT16_MAX;
uint64_t t96 = UINT64_MAX;
int32_t x390 = -8305738;
volatile uint32_t t97 = 15969U;


void f0(void) {
	int16_t x2 = 7;
	uint64_t x3 = 1645LLU;
	int8_t x4 = 45;
	int32_t t0 = 54;

	t0 = (x1^(x2&(x3<x4)));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	int32_t x7 = INT32_MIN;
	uint8_t x8 = UINT8_MAX;

	t1 = (x5^(x6&(x7<x8)));

	if (t1 != 1654) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 11U;
	volatile int16_t x11 = 22;
	volatile uint32_t x12 = 1788U;
	volatile int64_t t2 = -3821LL;

	t2 = (x9^(x10&(x11<x12)));

	if (t2 != 11LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -41317753227854987LL;
	volatile uint16_t x14 = 25279U;
	static int8_t x16 = 13;
	int64_t t3 = 57472981690778565LL;

	t3 = (x13^(x14&(x15<x16)));

	if (t3 != -41317753227854987LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int16_t x19 = 33;
	uint8_t x20 = 11U;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x17^(x18&(x19<x20)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = INT64_MAX;
	int16_t x22 = INT16_MIN;
	int8_t x23 = -4;
	static int64_t t5 = INT64_MAX;

	t5 = (x21^(x22&(x23<x24)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	uint64_t x26 = UINT64_MAX;
	volatile uint32_t x27 = UINT32_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x25^(x26&(x27<x28)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 60811393U;
	static int16_t x31 = 41;

	t7 = (x29^(x30&(x31<x32)));

	if (t7 != 19U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = 212583LL;
	volatile int32_t x35 = -494;
	static int8_t x36 = INT8_MAX;
	int64_t t8 = 8LL;

	t8 = (x33^(x34&(x35<x36)));

	if (t8 != -1298LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = 1822;
	int8_t x39 = INT8_MIN;
	volatile int32_t t9 = INT32_MAX;

	t9 = (x37^(x38&(x39<x40)));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MAX;
	int64_t x42 = INT64_MIN;
	static uint64_t x44 = UINT64_MAX;
	volatile int64_t t10 = 86492172LL;

	t10 = (x41^(x42&(x43<x44)));

	if (t10 != 32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = -1LL;
	int8_t x47 = -1;
	uint8_t x48 = UINT8_MAX;
	int64_t t11 = -1LL;

	t11 = (x45^(x46&(x47<x48)));

	if (t11 != 65534LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int16_t x50 = INT16_MAX;
	static uint32_t x52 = 508454404U;
	int32_t t12 = 10222819;

	t12 = (x49^(x50&(x51<x52)));

	if (t12 != 65534) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -2730745431LL;
	static uint8_t x54 = 11U;
	int16_t x55 = INT16_MAX;
	int16_t x56 = -5;
	volatile int64_t t13 = 1LL;

	t13 = (x53^(x54&(x55<x56)));

	if (t13 != -2730745431LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x58 = 1U;
	int16_t x59 = INT16_MAX;
	int32_t x60 = -1;

	t14 = (x57^(x58&(x59<x60)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int64_t x62 = INT64_MIN;
	volatile uint8_t x63 = 31U;
	int64_t x64 = INT64_MAX;
	volatile int64_t t15 = 167061528845844LL;

	t15 = (x61^(x62&(x63<x64)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int16_t x66 = INT16_MAX;
	int16_t x67 = 3;
	static volatile int32_t x68 = -110315;
	static int32_t t16 = 5;

	t16 = (x65^(x66&(x67<x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = UINT64_MAX;
	int8_t x70 = -1;
	uint64_t x71 = UINT64_MAX;
	volatile int32_t x72 = -1;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x69^(x70&(x71<x72)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	uint8_t x74 = 33U;
	int8_t x75 = INT8_MIN;
	int32_t t18 = INT32_MIN;

	t18 = (x73^(x74&(x75<x76)));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 321606638778818LL;
	int16_t x78 = 12952;
	int8_t x80 = INT8_MAX;
	int64_t t19 = 753LL;

	t19 = (x77^(x78&(x79<x80)));

	if (t19 != 321606638778818LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = INT32_MAX;
	int64_t x82 = -1LL;
	uint16_t x84 = UINT16_MAX;

	t20 = (x81^(x82&(x83<x84)));

	if (t20 != 2147483646LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	uint64_t x86 = 2319182766LLU;
	int32_t x87 = INT32_MAX;

	t21 = (x85^(x86&(x87<x88)));

	if (t21 != 4294967295LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -160LL;
	uint64_t x90 = 39LLU;
	volatile int16_t x91 = -1;

	t22 = (x89^(x90&(x91<x92)));

	if (t22 != 18446744073709551456LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 6900725289868422156LLU;
	static uint16_t x94 = UINT16_MAX;
	volatile uint16_t x95 = 456U;
	uint32_t x96 = UINT32_MAX;
	uint64_t t23 = 35LLU;

	t23 = (x93^(x94&(x95<x96)));

	if (t23 != 6900725289868422157LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	static uint32_t x98 = UINT32_MAX;
	static uint32_t x99 = 5U;
	uint64_t x100 = 8010817374LLU;
	uint64_t t24 = 4819LLU;

	t24 = (x97^(x98&(x99<x100)));

	if (t24 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 21U;
	uint8_t x103 = 1U;
	uint32_t x104 = 14108465U;
	static int32_t t25 = 52507860;

	t25 = (x101^(x102&(x103<x104)));

	if (t25 != 21) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	uint8_t x106 = 13U;
	uint32_t x107 = UINT32_MAX;
	static uint8_t x108 = 34U;
	volatile int32_t t26 = INT32_MIN;

	t26 = (x105^(x106&(x107<x108)));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 1670445486U;
	uint8_t x110 = 5U;
	uint32_t t27 = 5940680U;

	t27 = (x109^(x110&(x111<x112)));

	if (t27 != 1670445487U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 244462427375LLU;
	int8_t x114 = INT8_MAX;
	static uint64_t x115 = 8410LLU;
	static volatile int32_t x116 = 995;
	uint64_t t28 = 16431288LLU;

	t28 = (x113^(x114&(x115<x116)));

	if (t28 != 244462427375LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	uint8_t x118 = UINT8_MAX;
	static int8_t x119 = 14;
	int32_t x120 = INT32_MIN;

	t29 = (x117^(x118&(x119<x120)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	volatile int64_t x122 = -2226057278458198427LL;
	static volatile int64_t t30 = -2051290170404283LL;

	t30 = (x121^(x122&(x123<x124)));

	if (t30 != -2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int8_t x126 = -1;
	static volatile int16_t x127 = 1;
	uint64_t x128 = UINT64_MAX;
	int32_t t31 = 2863689;

	t31 = (x125^(x126&(x127<x128)));

	if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 431674LL;
	int64_t x131 = -3794LL;
	volatile int8_t x132 = INT8_MIN;
	int64_t t32 = 30513203913480LL;

	t32 = (x129^(x130&(x131<x132)));

	if (t32 != 431674LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = -1LL;
	int8_t x134 = -1;
	uint8_t x135 = 0U;
	int32_t x136 = INT32_MAX;
	int64_t t33 = -3817733323010512136LL;

	t33 = (x133^(x134&(x135<x136)));

	if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = 12;
	volatile uint64_t x139 = 0LLU;
	uint64_t x140 = 5209759587050796LLU;
	int32_t t34 = -102110511;

	t34 = (x137^(x138&(x139<x140)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -189;
	uint16_t x142 = 1449U;
	volatile int8_t x143 = -5;
	uint16_t x144 = 974U;
	volatile int32_t t35 = -392;

	t35 = (x141^(x142&(x143<x144)));

	if (t35 != -190) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = -3;
	static int32_t x146 = 851;
	int32_t x147 = -50;
	volatile int32_t t36 = -3664992;

	t36 = (x145^(x146&(x147<x148)));

	if (t36 != -4) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = 1LL;
	uint16_t x152 = 12514U;
	volatile int64_t t37 = -8175094664318948LL;

	t37 = (x149^(x150&(x151<x152)));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = INT8_MIN;
	static uint64_t x154 = 194814503192975052LLU;
	uint64_t t38 = 64484974LLU;

	t38 = (x153^(x154&(x155<x156)));

	if (t38 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = -1;
	int8_t x158 = -1;
	int64_t x159 = -1LL;
	volatile uint64_t x160 = 4090036372760LLU;

	t39 = (x157^(x158&(x159<x160)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 0;
	int8_t x162 = 0;
	int16_t x163 = INT16_MIN;
	uint8_t x164 = 1U;
	int32_t t40 = 2614041;

	t40 = (x161^(x162&(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	static uint32_t x166 = 287U;
	volatile uint32_t t41 = 10564U;

	t41 = (x165^(x166&(x167<x168)));

	if (t41 != 2147483649U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = 182;
	uint8_t x170 = UINT8_MAX;
	uint8_t x171 = UINT8_MAX;
	int32_t t42 = -2975;

	t42 = (x169^(x170&(x171<x172)));

	if (t42 != 183) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -11760;
	int16_t x174 = INT16_MAX;
	int16_t x175 = INT16_MAX;
	int8_t x176 = 0;
	int32_t t43 = 271671;

	t43 = (x173^(x174&(x175<x176)));

	if (t43 != -11760) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -83;
	static int16_t x179 = -1;
	int32_t x180 = -4027;
	volatile int32_t t44 = -53;

	t44 = (x177^(x178&(x179<x180)));

	if (t44 != -83) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	volatile int64_t t45 = INT64_MIN;

	t45 = (x181^(x182&(x183<x184)));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	static int64_t x186 = -26467LL;
	static int32_t x187 = INT32_MIN;
	uint64_t x188 = 80728621675LLU;
	volatile int64_t t46 = -2LL;

	t46 = (x185^(x186&(x187<x188)));

	if (t46 != 4294967295LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	int32_t x190 = INT32_MAX;
	static volatile int64_t x191 = INT64_MIN;
	static int8_t x192 = 16;
	static volatile uint32_t t47 = 40U;

	t47 = (x189^(x190&(x191<x192)));

	if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	volatile uint8_t x195 = UINT8_MAX;
	volatile uint32_t x196 = 2U;
	int64_t t48 = INT64_MIN;

	t48 = (x193^(x194&(x195<x196)));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 1U;
	int64_t x198 = INT64_MIN;
	volatile uint8_t x199 = 75U;
	int16_t x200 = -1;
	int64_t t49 = -175LL;

	t49 = (x197^(x198&(x199<x200)));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	static int32_t x202 = 1;
	static int32_t t50 = 373209087;

	t50 = (x201^(x202&(x203<x204)));

	if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x205 = 1;
	int8_t x207 = INT8_MIN;
	int8_t x208 = INT8_MAX;
	uint64_t t51 = 7613379714060511LLU;

	t51 = (x205^(x206&(x207<x208)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -1;
	uint32_t x210 = 108526780U;
	int64_t x211 = INT64_MIN;
	int8_t x212 = 25;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (x209^(x210&(x211<x212)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 1LL;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = UINT8_MAX;
	int64_t t53 = 1943LL;

	t53 = (x213^(x214&(x215<x216)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 40226589U;
	int32_t x219 = -1;
	static volatile int16_t x220 = -11;
	volatile uint32_t t54 = 57U;

	t54 = (x217^(x218&(x219<x220)));

	if (t54 != 40226589U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x222 = INT8_MAX;
	int64_t x224 = INT64_MAX;
	volatile int32_t t55 = -60713229;

	t55 = (x221^(x222&(x223<x224)));

	if (t55 != -127) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = -1;
	uint16_t x226 = UINT16_MAX;
	int64_t x227 = INT64_MIN;
	volatile int32_t x228 = INT32_MIN;
	int32_t t56 = -1389901;

	t56 = (x225^(x226&(x227<x228)));

	if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -11683;
	int64_t x230 = INT64_MIN;
	volatile int8_t x232 = -1;

	t57 = (x229^(x230&(x231<x232)));

	if (t57 != -11683LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int32_t x234 = INT32_MIN;
	int8_t x235 = -1;
	static uint32_t x236 = UINT32_MAX;

	t58 = (x233^(x234&(x235<x236)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x237 = INT16_MIN;
	static uint32_t x238 = 162564642U;
	int32_t x240 = INT32_MIN;
	static uint32_t t59 = 11396110U;

	t59 = (x237^(x238&(x239<x240)));

	if (t59 != 4294934528U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int32_t x243 = -5293796;
	static uint8_t x244 = 65U;
	int32_t t60 = -1414;

	t60 = (x241^(x242&(x243<x244)));

	if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	int16_t x246 = 2;
	uint32_t x247 = UINT32_MAX;
	uint64_t x248 = UINT64_MAX;

	t61 = (x245^(x246&(x247<x248)));

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	int64_t x250 = 1459LL;
	uint16_t x251 = UINT16_MAX;
	volatile int16_t x252 = INT16_MIN;
	int64_t t62 = 231812582255300645LL;

	t62 = (x249^(x250&(x251<x252)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x254 = -1;
	volatile int32_t x255 = INT32_MAX;
	static volatile uint16_t x256 = UINT16_MAX;

	t63 = (x253^(x254&(x255<x256)));

	if (t63 != -11) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	uint16_t x258 = 127U;
	volatile int32_t x259 = INT32_MIN;
	int32_t t64 = -1;

	t64 = (x257^(x258&(x259<x260)));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x262 = INT8_MAX;
	int8_t x264 = INT8_MAX;

	t65 = (x261^(x262&(x263<x264)));

	if (t65 != 2147483646) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	uint16_t x266 = UINT16_MAX;
	uint8_t x267 = 13U;
	static int32_t x268 = 12;
	volatile int64_t t66 = INT64_MIN;

	t66 = (x265^(x266&(x267<x268)));

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	int8_t x270 = -19;
	static volatile int64_t x271 = -82740542269LL;
	static volatile int64_t t67 = -77929120946LL;

	t67 = (x269^(x270&(x271<x272)));

	if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	static uint16_t x274 = 58U;
	static int8_t x275 = 21;
	static int16_t x276 = -4642;
	volatile int32_t t68 = -68852;

	t68 = (x273^(x274&(x275<x276)));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 43U;
	int32_t x278 = -323585;
	int64_t x279 = -1LL;
	int32_t x280 = INT32_MIN;
	static volatile int32_t t69 = 922;

	t69 = (x277^(x278&(x279<x280)));

	if (t69 != 43) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x282 = 3LLU;
	volatile int16_t x283 = -70;
	volatile int8_t x284 = INT8_MIN;
	volatile uint64_t t70 = 340LLU;

	t70 = (x281^(x282&(x283<x284)));

	if (t70 != 481LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1171565348297367095LL;
	int32_t x286 = -1;
	uint64_t x287 = UINT64_MAX;
	int8_t x288 = INT8_MAX;
	int64_t t71 = 5LL;

	t71 = (x285^(x286&(x287<x288)));

	if (t71 != -1171565348297367095LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	uint32_t x290 = 1U;
	int8_t x292 = -14;
	static volatile uint32_t t72 = 34U;

	t72 = (x289^(x290&(x291<x292)));

	if (t72 != 2147483647U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = 6910;
	static uint32_t x295 = UINT32_MAX;
	int16_t x296 = INT16_MIN;
	volatile int32_t t73 = 0;

	t73 = (x293^(x294&(x295<x296)));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MIN;
	uint16_t x299 = UINT16_MAX;
	int16_t x300 = 22;
	volatile uint64_t t74 = 92LLU;

	t74 = (x297^(x298&(x299<x300)));

	if (t74 != 147677047972571LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = -25;
	static int64_t x302 = INT64_MIN;
	int16_t x303 = -1;
	static volatile int64_t t75 = -6501LL;

	t75 = (x301^(x302&(x303<x304)));

	if (t75 != -25LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 1956562U;
	uint16_t x306 = UINT16_MAX;
	int16_t x307 = INT16_MIN;

	t76 = (x305^(x306&(x307<x308)));

	if (t76 != 1956563U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	static int64_t x310 = INT64_MIN;
	int8_t x311 = INT8_MAX;
	volatile uint8_t x312 = 59U;

	t77 = (x309^(x310&(x311<x312)));

	if (t77 != 65535LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 3;
	int64_t x314 = 3671744208LL;
	volatile int64_t x316 = -1LL;
	volatile int64_t t78 = 282928723667917372LL;

	t78 = (x313^(x314&(x315<x316)));

	if (t78 != 3LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 797484776662033LL;
	int64_t x318 = INT64_MAX;
	int16_t x320 = INT16_MAX;
	volatile int64_t t79 = 1LL;

	t79 = (x317^(x318&(x319<x320)));

	if (t79 != 797484776662032LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int64_t x322 = 24107452212LL;
	int64_t t80 = INT64_MIN;

	t80 = (x321^(x322&(x323<x324)));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	volatile int64_t x326 = -1LL;

	t81 = (x325^(x326&(x327<x328)));

	if (t81 != -32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = 562512270209909LLU;
	int8_t x330 = 1;
	static int8_t x331 = 5;
	int8_t x332 = 2;
	static volatile uint64_t t82 = 2791LLU;

	t82 = (x329^(x330&(x331<x332)));

	if (t82 != 562512270209909LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	uint64_t x335 = UINT64_MAX;
	int64_t x336 = -1LL;
	volatile int32_t t83 = -117442805;

	t83 = (x333^(x334&(x335<x336)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	int16_t x339 = INT16_MIN;
	uint64_t x340 = 108619257822945LLU;
	static volatile int32_t t84 = 15731;

	t84 = (x337^(x338&(x339<x340)));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -42346;
	uint64_t x343 = 71985810690633LLU;
	int16_t x344 = 7691;
	int64_t t85 = -94104LL;

	t85 = (x341^(x342&(x343<x344)));

	if (t85 != -42346LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	volatile uint8_t x346 = UINT8_MAX;
	int64_t x347 = INT64_MAX;
	int8_t x348 = INT8_MIN;
	int64_t t86 = INT64_MIN;

	t86 = (x345^(x346&(x347<x348)));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x350 = 7U;
	uint32_t x352 = 2U;
	int32_t t87 = 387906;

	t87 = (x349^(x350&(x351<x352)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MIN;
	uint32_t x355 = 3553903U;
	int32_t x356 = -401;
	int64_t t88 = 29984466979751LL;

	t88 = (x353^(x354&(x355<x356)));

	if (t88 != -2147483648LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int32_t x359 = INT32_MIN;
	int16_t x360 = 509;
	volatile int64_t t89 = 814LL;

	t89 = (x357^(x358&(x359<x360)));

	if (t89 != -32768LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 54U;
	static int64_t x362 = INT64_MIN;
	int8_t x363 = -53;
	volatile int32_t x364 = INT32_MIN;
	static volatile int64_t t90 = 154013533654LL;

	t90 = (x361^(x362&(x363<x364)));

	if (t90 != 54LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x366 = 1U;
	int64_t x368 = 423922307367145LL;
	int32_t t91 = -21588;

	t91 = (x365^(x366&(x367<x368)));

	if (t91 != 254) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = -1;
	int16_t x370 = INT16_MIN;
	static int64_t x371 = -20681917673834LL;
	volatile int32_t t92 = -1719684;

	t92 = (x369^(x370&(x371<x372)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x373 = -1;
	int32_t x374 = INT32_MIN;
	uint16_t x375 = 24U;
	int16_t x376 = 106;
	int32_t t93 = 3332;

	t93 = (x373^(x374&(x375<x376)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = INT16_MIN;
	static int32_t x379 = INT32_MAX;

	t94 = (x377^(x378&(x379<x380)));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1LL;
	static uint64_t x382 = UINT64_MAX;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (x381^(x382&(x383<x384)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	static uint64_t x386 = 3111035057LLU;

	t96 = (x385^(x386&(x387<x388)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 29U;
	uint64_t x391 = UINT64_MAX;
	uint16_t x392 = UINT16_MAX;

	t97 = (x389^(x390&(x391<x392)));

	if (t97 != 29U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	volatile uint16_t x394 = UINT16_MAX;
	volatile int32_t x395 = INT32_MAX;
	int8_t x396 = -1;
	volatile int32_t t98 = -2303743;

	t98 = (x393^(x394&(x395<x396)));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -2007456769724907LL;
	volatile uint64_t x398 = UINT64_MAX;
	uint16_t x399 = 15U;
	int32_t x400 = INT32_MIN;
	volatile uint64_t t99 = 15001LLU;

	t99 = (x397^(x398&(x399<x400)));

	if (t99 != 18444736616939826709LLU) { NG(); } else { ; }
	
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

