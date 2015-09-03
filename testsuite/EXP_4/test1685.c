#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
uint32_t x3 = UINT32_MAX;
uint8_t x10 = 8U;
static int8_t x12 = -57;
uint32_t x16 = 503U;
volatile int32_t x24 = 746065396;
int32_t x26 = INT32_MIN;
volatile int8_t x27 = -1;
int64_t x45 = INT64_MIN;
uint16_t x49 = 1986U;
int32_t t12 = 62;
uint64_t x57 = UINT64_MAX;
volatile int32_t t15 = -4;
volatile int32_t t16 = -96211;
int16_t x69 = INT16_MIN;
int8_t x70 = INT8_MIN;
int8_t x71 = 0;
int64_t x73 = INT64_MIN;
volatile int16_t x76 = INT16_MIN;
int16_t x78 = INT16_MIN;
uint32_t x79 = UINT32_MAX;
static int8_t x83 = -1;
static int32_t x85 = INT32_MIN;
volatile int32_t x89 = INT32_MIN;
volatile uint64_t x92 = 285057477LLU;
static int32_t t22 = 0;
int8_t x102 = INT8_MAX;
static int16_t x104 = 932;
uint16_t x108 = UINT16_MAX;
volatile int32_t t26 = -385638805;
static int8_t x110 = INT8_MIN;
volatile int32_t t27 = 25;
int16_t x115 = INT16_MIN;
int32_t t28 = 447;
static int32_t x128 = INT32_MIN;
int8_t x132 = -1;
volatile int32_t t32 = 0;
uint64_t x137 = 0LLU;
volatile int32_t x142 = 0;
static int64_t x144 = INT64_MIN;
uint64_t x151 = 915486398168312LLU;
uint32_t x154 = 4583U;
int32_t t38 = 0;
int8_t x159 = INT8_MIN;
int16_t x161 = INT16_MIN;
static int16_t x163 = -1;
volatile uint32_t x166 = 388959U;
static int32_t x168 = INT32_MAX;
uint64_t x169 = UINT64_MAX;
int32_t t42 = -1996;
int32_t t43 = -1297;
static volatile int64_t x182 = INT64_MAX;
static uint16_t x183 = UINT16_MAX;
uint16_t x186 = 1312U;
static uint32_t x203 = 3U;
volatile int32_t t50 = -24107;
uint64_t x205 = 365710300598LLU;
static int64_t x207 = INT64_MIN;
volatile int16_t x209 = INT16_MAX;
int16_t x210 = 14336;
volatile int32_t t53 = 1;
int32_t x218 = 473821;
int8_t x222 = 6;
int8_t x224 = 7;
volatile int32_t t56 = -117;
uint32_t x229 = 125551887U;
int16_t x230 = INT16_MIN;
int16_t x231 = -37;
static int16_t x232 = INT16_MIN;
static int8_t x234 = -1;
uint32_t x244 = 3153091U;
int16_t x245 = INT16_MIN;
int16_t x247 = INT16_MAX;
int16_t x251 = INT16_MAX;
int32_t x255 = INT32_MIN;
volatile int32_t t63 = -1;
uint8_t x260 = 18U;
static int32_t t64 = -10371289;
int8_t x264 = 1;
static volatile int32_t t66 = -128646999;
uint32_t x274 = UINT32_MAX;
static uint16_t x277 = 143U;
volatile int32_t t70 = 107;
int32_t x291 = INT32_MIN;
int64_t x293 = -1LL;
uint64_t x295 = 8LLU;
static int16_t x296 = -1;
int16_t x300 = -14;
volatile int32_t t74 = -176609894;
int16_t x303 = INT16_MIN;
volatile int32_t x304 = INT32_MIN;
volatile int64_t x306 = INT64_MIN;
uint64_t x315 = 1119LLU;
static uint32_t x320 = UINT32_MAX;
volatile uint32_t x324 = UINT32_MAX;
uint16_t x334 = UINT16_MAX;
static uint32_t x340 = 0U;
static uint32_t x341 = 23U;
int32_t x347 = -103863120;
int32_t x358 = 2;
uint8_t x359 = UINT8_MAX;
volatile uint16_t x360 = 456U;
int32_t t89 = -891;
int16_t x373 = INT16_MIN;
int32_t t95 = 391860968;
volatile uint32_t x391 = UINT32_MAX;
volatile int32_t t97 = -193100;
int32_t t98 = 183;
volatile int8_t x398 = -1;
uint32_t x399 = UINT32_MAX;


void f0(void) {
	volatile int32_t x2 = 10542;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = -2975;

	t0 = (x1==(x2^(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 38992LLU;
	uint16_t x6 = 126U;
	int64_t x7 = -1LL;
	volatile uint64_t x8 = 11143LLU;
	int32_t t1 = -3153428;

	t1 = (x5==(x6^(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 18U;
	int64_t x11 = INT64_MAX;
	int32_t t2 = 508260787;

	t2 = (x9==(x10^(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 15009;
	uint16_t x14 = UINT16_MAX;
	uint32_t x15 = 1609408047U;
	int32_t t3 = 265;

	t3 = (x13==(x14^(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int64_t x18 = INT64_MIN;
	int16_t x19 = 15947;
	int32_t x20 = -1;
	int32_t t4 = 6665917;

	t4 = (x17==(x18^(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MIN;
	static uint8_t x22 = 36U;
	static uint64_t x23 = 8451LLU;
	static volatile int32_t t5 = 1817;

	t5 = (x21==(x22^(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -2LL;
	static int16_t x28 = -1;
	static volatile int32_t t6 = -191717855;

	t6 = (x25==(x26^(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 1U;
	uint16_t x30 = UINT16_MAX;
	volatile int16_t x31 = INT16_MAX;
	int64_t x32 = 1519778708276428584LL;
	int32_t t7 = 0;

	t7 = (x29==(x30^(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 254344321LLU;
	int32_t x34 = INT32_MAX;
	uint64_t x35 = UINT64_MAX;
	int16_t x36 = -5;
	int32_t t8 = -1040;

	t8 = (x33==(x34^(x35<=x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int32_t x38 = INT32_MIN;
	static int8_t x39 = INT8_MAX;
	int64_t x40 = -199594LL;
	volatile int32_t t9 = -631079888;

	t9 = (x37==(x38^(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	uint16_t x42 = 46U;
	volatile int32_t x43 = INT32_MAX;
	volatile uint32_t x44 = 10758346U;
	int32_t t10 = 528373045;

	t10 = (x41==(x42^(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = INT8_MAX;
	volatile int32_t x47 = INT32_MIN;
	uint64_t x48 = 2042LLU;
	int32_t t11 = -236754;

	t11 = (x45==(x46^(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x50 = INT64_MIN;
	uint32_t x51 = 89U;
	volatile uint32_t x52 = 7835U;

	t12 = (x49==(x50^(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	uint8_t x54 = 2U;
	int8_t x55 = -14;
	int8_t x56 = -1;
	int32_t t13 = 1;

	t13 = (x53==(x54^(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = 50429076690572LL;
	uint16_t x59 = 62U;
	int32_t x60 = INT32_MIN;
	int32_t t14 = 1;

	t14 = (x57==(x58^(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	static volatile int16_t x62 = -1;
	static uint32_t x63 = 156U;
	volatile int32_t x64 = 6362606;

	t15 = (x61==(x62^(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	uint8_t x66 = 30U;
	uint64_t x67 = UINT64_MAX;
	uint8_t x68 = UINT8_MAX;

	t16 = (x65==(x66^(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x72 = INT64_MAX;
	volatile int32_t t17 = 26868;

	t17 = (x69==(x70^(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x74 = INT64_MAX;
	uint8_t x75 = 11U;
	static volatile int32_t t18 = 134448;

	t18 = (x73==(x74^(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int64_t x80 = -1LL;
	static int32_t t19 = -4;

	t19 = (x77==(x78^(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = UINT16_MAX;
	static int64_t x82 = INT64_MIN;
	volatile int32_t x84 = -1;
	int32_t t20 = 176124;

	t20 = (x81==(x82^(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = -1LL;
	int32_t x87 = INT32_MIN;
	volatile int32_t x88 = -510696;
	int32_t t21 = -336;

	t21 = (x85==(x86^(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x90 = 99U;
	int16_t x91 = -1;

	t22 = (x89==(x90^(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -6244650LL;
	int32_t x94 = -3;
	int8_t x95 = -1;
	int32_t x96 = INT32_MIN;
	static int32_t t23 = 293942575;

	t23 = (x93==(x94^(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = -4;
	int16_t x99 = -1;
	uint32_t x100 = 100U;
	volatile int32_t t24 = 0;

	t24 = (x97==(x98^(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x101 = 87LLU;
	volatile int32_t x103 = INT32_MIN;
	volatile int32_t t25 = -7677694;

	t25 = (x101==(x102^(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int16_t x106 = -1;
	volatile int32_t x107 = INT32_MIN;

	t26 = (x105==(x106^(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MAX;
	uint64_t x111 = 111709396377LLU;
	uint8_t x112 = 3U;

	t27 = (x109==(x110^(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = INT64_MIN;
	volatile uint32_t x114 = 1939475U;
	static int32_t x116 = INT32_MAX;

	t28 = (x113==(x114^(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	static int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	static int16_t x120 = -1;
	volatile int32_t t29 = -40;

	t29 = (x117==(x118^(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 43U;
	uint16_t x122 = UINT16_MAX;
	int64_t x123 = INT64_MAX;
	int64_t x124 = INT64_MIN;
	int32_t t30 = 730037305;

	t30 = (x121==(x122^(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 85991242117586775LLU;
	static int16_t x126 = INT16_MAX;
	int64_t x127 = 1LL;
	int32_t t31 = 5;

	t31 = (x125==(x126^(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = UINT64_MAX;
	int32_t x130 = -16;
	uint8_t x131 = 61U;

	t32 = (x129==(x130^(x131<=x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	int16_t x134 = -1;
	int64_t x135 = -1LL;
	int32_t x136 = INT32_MIN;
	int32_t t33 = -2068721;

	t33 = (x133==(x134^(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x138 = 70360734776LLU;
	volatile int16_t x139 = INT16_MIN;
	uint64_t x140 = 3337LLU;
	static volatile int32_t t34 = -946;

	t34 = (x137==(x138^(x139<=x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int16_t x143 = INT16_MAX;
	int32_t t35 = 13236;

	t35 = (x141==(x142^(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x145 = UINT64_MAX;
	uint8_t x146 = 59U;
	uint8_t x147 = 3U;
	volatile int64_t x148 = -1LL;
	volatile int32_t t36 = -6677;

	t36 = (x145==(x146^(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 31U;
	static volatile int32_t x150 = INT32_MIN;
	int16_t x152 = INT16_MAX;
	int32_t t37 = -410175684;

	t37 = (x149==(x150^(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 6U;
	int8_t x155 = 12;
	int32_t x156 = INT32_MIN;

	t38 = (x153==(x154^(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	static volatile uint32_t x158 = 2841424U;
	int32_t x160 = INT32_MIN;
	int32_t t39 = -1858;

	t39 = (x157==(x158^(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x162 = 20U;
	static int8_t x164 = INT8_MIN;
	static volatile int32_t t40 = -15;

	t40 = (x161==(x162^(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	int8_t x167 = INT8_MIN;
	volatile int32_t t41 = -7;

	t41 = (x165==(x166^(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x170 = -1;
	int8_t x171 = -1;
	volatile int8_t x172 = INT8_MIN;

	t42 = (x169==(x170^(x171<=x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	uint32_t x174 = 77287699U;
	volatile uint16_t x175 = UINT16_MAX;
	int64_t x176 = INT64_MIN;

	t43 = (x173==(x174^(x175<=x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -7;
	volatile uint16_t x178 = 3810U;
	volatile int8_t x179 = INT8_MAX;
	int16_t x180 = INT16_MAX;
	volatile int32_t t44 = 0;

	t44 = (x177==(x178^(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x181 = UINT32_MAX;
	uint32_t x184 = 35U;
	int32_t t45 = -8;

	t45 = (x181==(x182^(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x185 = 29U;
	int16_t x187 = -108;
	uint8_t x188 = UINT8_MAX;
	int32_t t46 = 21;

	t46 = (x185==(x186^(x187<=x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	volatile uint64_t x190 = 1595708295433LLU;
	volatile uint32_t x191 = 7641058U;
	static int16_t x192 = -1;
	int32_t t47 = -1274;

	t47 = (x189==(x190^(x191<=x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = UINT32_MAX;
	int64_t x194 = INT64_MIN;
	int8_t x195 = INT8_MIN;
	int32_t x196 = 586502;
	static volatile int32_t t48 = -1;

	t48 = (x193==(x194^(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -2659;
	static volatile uint64_t x198 = UINT64_MAX;
	int8_t x199 = INT8_MIN;
	int64_t x200 = -1LL;
	static volatile int32_t t49 = 1;

	t49 = (x197==(x198^(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MAX;
	int8_t x202 = -1;
	volatile uint8_t x204 = 6U;

	t50 = (x201==(x202^(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = 4455961;
	volatile int64_t x208 = INT64_MAX;
	static int32_t t51 = 6;

	t51 = (x205==(x206^(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x211 = 2037542489157789227LLU;
	static int16_t x212 = INT16_MAX;
	int32_t t52 = 60938;

	t52 = (x209==(x210^(x211<=x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	volatile int16_t x214 = INT16_MIN;
	int32_t x215 = 1246990;
	volatile int32_t x216 = -3243218;

	t53 = (x213==(x214^(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MIN;
	uint64_t x219 = 205889578266381LLU;
	uint64_t x220 = 31018599235LLU;
	int32_t t54 = -242689;

	t54 = (x217==(x218^(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x221 = 25122465238695414LLU;
	static uint64_t x223 = UINT64_MAX;
	static int32_t t55 = -1047775675;

	t55 = (x221==(x222^(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 2U;
	volatile uint64_t x226 = UINT64_MAX;
	int8_t x227 = INT8_MIN;
	volatile uint32_t x228 = 220253812U;

	t56 = (x225==(x226^(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t t57 = -257447665;

	t57 = (x229==(x230^(x231<=x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = INT16_MIN;
	volatile int8_t x235 = 24;
	int64_t x236 = 286694058668558406LL;
	volatile int32_t t58 = 753;

	t58 = (x233==(x234^(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	int64_t x238 = -1LL;
	int8_t x239 = INT8_MIN;
	uint64_t x240 = 1608825173175LLU;
	static int32_t t59 = 96067120;

	t59 = (x237==(x238^(x239<=x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	static int8_t x242 = INT8_MAX;
	int64_t x243 = -16246LL;
	volatile int32_t t60 = -2269232;

	t60 = (x241==(x242^(x243<=x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = 38;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t61 = 480;

	t61 = (x245==(x246^(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x249 = INT32_MIN;
	uint32_t x250 = 313878U;
	volatile int64_t x252 = -3635956LL;
	static volatile int32_t t62 = -38;

	t62 = (x249==(x250^(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MIN;
	uint16_t x254 = 0U;
	uint32_t x256 = 14U;

	t63 = (x253==(x254^(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x257 = 8U;
	uint64_t x258 = 34245194311151133LLU;
	int64_t x259 = INT64_MIN;

	t64 = (x257==(x258^(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 8456770510981LLU;
	uint32_t x262 = UINT32_MAX;
	int64_t x263 = -1LL;
	volatile int32_t t65 = 463;

	t65 = (x261==(x262^(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -3;
	static int8_t x266 = 1;
	static int8_t x267 = -1;
	uint32_t x268 = 3350U;

	t66 = (x265==(x266^(x267<=x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = -1;
	uint32_t x270 = 15825979U;
	static int8_t x271 = INT8_MAX;
	int8_t x272 = INT8_MIN;
	int32_t t67 = 26031016;

	t67 = (x269==(x270^(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	static uint8_t x275 = UINT8_MAX;
	int8_t x276 = -13;
	volatile int32_t t68 = -37;

	t68 = (x273==(x274^(x275<=x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = 3U;
	static int64_t x279 = -12258682617198064LL;
	uint32_t x280 = 203U;
	int32_t t69 = -551;

	t69 = (x277==(x278^(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = UINT64_MAX;
	int32_t x282 = INT32_MIN;
	volatile int32_t x283 = INT32_MIN;
	static int8_t x284 = INT8_MIN;

	t70 = (x281==(x282^(x283<=x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 171607350U;
	volatile int64_t x286 = INT64_MIN;
	static int16_t x287 = INT16_MIN;
	uint64_t x288 = 6572519036267LLU;
	volatile int32_t t71 = 1657;

	t71 = (x285==(x286^(x287<=x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	int32_t x290 = -27914;
	int64_t x292 = -1LL;
	volatile int32_t t72 = 31939490;

	t72 = (x289==(x290^(x291<=x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = -1;
	static volatile int32_t t73 = -1;

	t73 = (x293==(x294^(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = INT32_MAX;
	int64_t x298 = INT64_MAX;
	static int64_t x299 = -1107480781LL;

	t74 = (x297==(x298^(x299<=x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = -1;
	int8_t x302 = 0;
	int32_t t75 = -32267;

	t75 = (x301==(x302^(x303<=x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	int32_t x307 = -1;
	static int8_t x308 = INT8_MIN;
	static int32_t t76 = 1;

	t76 = (x305==(x306^(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = INT16_MIN;
	int32_t x310 = -1;
	volatile int16_t x311 = INT16_MIN;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -65259;

	t77 = (x309==(x310^(x311<=x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MAX;
	static uint8_t x314 = 117U;
	int16_t x316 = INT16_MAX;
	int32_t t78 = -564;

	t78 = (x313==(x314^(x315<=x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	volatile int8_t x318 = 13;
	volatile int64_t x319 = -356703387532667648LL;
	volatile int32_t t79 = 1;

	t79 = (x317==(x318^(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 13826441949LLU;
	int32_t x322 = 545830;
	uint64_t x323 = UINT64_MAX;
	int32_t t80 = 87;

	t80 = (x321==(x322^(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MIN;
	int32_t x326 = -1;
	int8_t x327 = -1;
	int32_t x328 = -1;
	volatile int32_t t81 = 557029747;

	t81 = (x325==(x326^(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = -1;
	volatile int16_t x330 = INT16_MIN;
	uint32_t x331 = UINT32_MAX;
	int64_t x332 = 426306878LL;
	int32_t t82 = -495215;

	t82 = (x329==(x330^(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 0;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = 58054427LLU;
	volatile int32_t t83 = 30244;

	t83 = (x333==(x334^(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -107661;
	int64_t x338 = -1LL;
	int32_t x339 = -1;
	static volatile int32_t t84 = 580587028;

	t84 = (x337==(x338^(x339<=x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = INT16_MAX;
	static int8_t x343 = -40;
	volatile int32_t x344 = INT32_MIN;
	static volatile int32_t t85 = 985209;

	t85 = (x341==(x342^(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = -1;
	volatile int8_t x346 = -1;
	static uint8_t x348 = 101U;
	int32_t t86 = -3126;

	t86 = (x345==(x346^(x347<=x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = -15;
	volatile uint16_t x350 = UINT16_MAX;
	volatile int16_t x351 = -1;
	volatile int16_t x352 = -1;
	int32_t t87 = 3105602;

	t87 = (x349==(x350^(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	static int32_t x354 = -1373410;
	static uint16_t x355 = UINT16_MAX;
	volatile int16_t x356 = -1;
	int32_t t88 = 9411879;

	t88 = (x353==(x354^(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = 1449U;

	t89 = (x357==(x358^(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 8U;
	int32_t x362 = -659453084;
	uint16_t x363 = UINT16_MAX;
	static volatile int16_t x364 = 7385;
	int32_t t90 = -356305;

	t90 = (x361==(x362^(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = 0;
	uint32_t x366 = UINT32_MAX;
	static uint16_t x367 = 176U;
	static volatile int64_t x368 = 1LL;
	volatile int32_t t91 = -1401;

	t91 = (x365==(x366^(x367<=x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	uint32_t x370 = 1097151U;
	uint8_t x371 = 8U;
	static uint64_t x372 = 15771847LLU;
	int32_t t92 = 2727;

	t92 = (x369==(x370^(x371<=x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x374 = 14U;
	static int8_t x375 = -1;
	uint16_t x376 = UINT16_MAX;
	static int32_t t93 = 2034;

	t93 = (x373==(x374^(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = 206LL;
	uint64_t x378 = 4LLU;
	volatile int8_t x379 = -1;
	volatile uint16_t x380 = 6949U;
	int32_t t94 = 225365688;

	t94 = (x377==(x378^(x379<=x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	int8_t x382 = -2;
	int8_t x383 = -14;
	int16_t x384 = INT16_MIN;

	t95 = (x381==(x382^(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = 814U;
	uint8_t x386 = 6U;
	static volatile int64_t x387 = -1LL;
	static volatile uint32_t x388 = 1071114275U;
	int32_t t96 = 44175;

	t96 = (x385==(x386^(x387<=x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = -1;
	volatile int32_t x390 = -507782;
	uint32_t x392 = 9U;

	t97 = (x389==(x390^(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -6;
	uint32_t x394 = UINT32_MAX;
	volatile uint32_t x395 = 39505966U;
	uint32_t x396 = 162254U;

	t98 = (x393==(x394^(x395<=x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = -400LL;
	int8_t x400 = -1;
	volatile int32_t t99 = 917326;

	t99 = (x397==(x398^(x399<=x400)));

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

