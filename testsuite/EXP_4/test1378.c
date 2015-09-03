#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 545592286;
uint16_t x11 = 0U;
int64_t x18 = 492236364LL;
static volatile uint64_t t4 = 100LLU;
int64_t x21 = 599077291LL;
static uint64_t x24 = UINT64_MAX;
int64_t x28 = 75843383LL;
uint16_t x31 = 3547U;
volatile int8_t x33 = INT8_MIN;
static int16_t x39 = INT16_MAX;
static int32_t x40 = INT32_MIN;
volatile int8_t x44 = 53;
int32_t x45 = -1;
uint64_t x47 = UINT64_MAX;
int64_t x48 = INT64_MIN;
int32_t x54 = INT32_MAX;
int8_t x57 = -1;
int32_t x59 = -1;
uint64_t x62 = 378864485112342545LLU;
volatile uint64_t t15 = 60862706603335LLU;
int64_t x65 = 1LL;
int16_t x67 = 1002;
int32_t x75 = INT32_MIN;
int32_t t19 = -5;
uint8_t x81 = 55U;
uint32_t x82 = 104U;
static int32_t t21 = -54;
static int16_t x93 = -1;
uint32_t x98 = 895329U;
int16_t x99 = INT16_MAX;
int8_t x100 = -2;
volatile int32_t t24 = 13340;
uint64_t x110 = 86963593953683504LLU;
int16_t x112 = -2998;
volatile int64_t x117 = 0LL;
static uint32_t x119 = UINT32_MAX;
volatile uint64_t x136 = UINT64_MAX;
int32_t x137 = -4910463;
static int64_t x139 = -1LL;
volatile int64_t x140 = -1LL;
int16_t x141 = -6;
int32_t x144 = -1;
static int32_t t33 = -112;
uint8_t x154 = UINT8_MAX;
int16_t x158 = INT16_MIN;
static volatile int64_t t37 = -170LL;
volatile int32_t x164 = -7;
static int32_t x165 = -1;
volatile int32_t t39 = 9;
uint8_t x171 = 0U;
uint64_t x172 = 713978730636618LLU;
int16_t x173 = -1;
int32_t t42 = -30236;
int32_t x182 = INT32_MAX;
volatile int16_t x184 = -1;
int64_t x208 = INT64_MIN;
int8_t x209 = 0;
volatile int16_t x210 = -68;
volatile int32_t t50 = 1;
volatile uint64_t x219 = 11257368108180LLU;
volatile int32_t x220 = -2408;
static int64_t t52 = 0LL;
static uint32_t x221 = 112137U;
uint8_t x224 = UINT8_MAX;
static uint32_t x229 = UINT32_MAX;
int64_t x231 = -689883803LL;
uint32_t t55 = 397109209U;
static volatile uint64_t t56 = 137250068448922225LLU;
static int32_t x237 = -215;
int8_t x239 = 1;
static int16_t x247 = -295;
int64_t x248 = -1LL;
static int16_t x249 = INT16_MIN;
volatile int8_t x251 = -1;
static volatile int32_t t60 = 805333;
int32_t x258 = 11235145;
int64_t x259 = -1LL;
uint8_t x260 = 1U;
static volatile int64_t t62 = -348942LL;
int64_t t64 = 1105203605161070LL;
int32_t x280 = INT32_MAX;
int32_t t65 = 7102008;
int16_t x291 = INT16_MAX;
uint32_t x292 = UINT32_MAX;
static volatile uint32_t t67 = 1U;
uint16_t x294 = UINT16_MAX;
uint8_t x295 = UINT8_MAX;
volatile int64_t t68 = -1868850976LL;
volatile int32_t t69 = -962860;
uint8_t x313 = UINT8_MAX;
volatile int32_t x318 = -1;
static int32_t x330 = INT32_MAX;
int16_t x334 = 1862;
static volatile int32_t x336 = -197;
static int32_t t76 = -99;
volatile int16_t x341 = INT16_MIN;
int16_t x342 = INT16_MIN;
volatile int32_t t77 = 4813938;
uint32_t x357 = UINT32_MAX;
int16_t x358 = INT16_MIN;
static volatile int32_t x363 = -6;
static volatile int64_t x366 = 3LL;
static int64_t x380 = INT64_MIN;
static int16_t x384 = INT16_MAX;
int16_t x397 = INT16_MIN;
uint8_t x398 = 26U;
int64_t x399 = INT64_MIN;
volatile int8_t x402 = INT8_MIN;
volatile int64_t x408 = INT64_MIN;
uint16_t x410 = UINT16_MAX;
int64_t x413 = -2798277893LL;
volatile int8_t x416 = -1;
volatile int64_t t94 = -1399261246501750LL;
volatile int16_t x419 = INT16_MIN;
int32_t x420 = -1;
volatile int64_t x427 = INT64_MAX;
static int8_t x434 = INT8_MAX;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	volatile int8_t x2 = -5;
	static int64_t x3 = 410LL;
	uint16_t x4 = 490U;

	t0 = (x1^(x2-(x3<x4)));

	if (t0 != 122) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -64333700LL;
	uint32_t x6 = 871728776U;
	int16_t x7 = INT16_MAX;
	uint8_t x8 = 9U;
	volatile int64_t t1 = -12724270966172LL;

	t1 = (x5^(x6-(x7<x8)));

	if (t1 != -807411980LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	static volatile uint32_t x10 = UINT32_MAX;
	int32_t x12 = INT32_MIN;
	int64_t t2 = 7LL;

	t2 = (x9^(x10-(x11<x12)));

	if (t2 != -4294967296LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 2U;
	int16_t x14 = INT16_MAX;
	volatile int8_t x15 = 0;
	int64_t x16 = INT64_MIN;
	static volatile int32_t t3 = 25499332;

	t3 = (x13^(x14-(x15<x16)));

	if (t3 != 32765) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 1204982417LLU;
	uint16_t x19 = 2U;
	int32_t x20 = -1;

	t4 = (x17^(x18-(x19<x20)));

	if (t4 != 1518632157LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = 1;
	static int8_t x23 = 54;
	volatile int64_t t5 = -17LL;

	t5 = (x21^(x22-(x23<x24)));

	if (t5 != 599077291LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 1262685922U;
	static uint32_t x26 = 5346U;
	volatile int64_t x27 = INT64_MAX;
	uint32_t t6 = 38766U;

	t6 = (x25^(x26-(x27<x28)));

	if (t6 != 1262688768U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 0;
	int16_t x30 = INT16_MAX;
	int32_t x32 = -28927;
	static int32_t t7 = -33998;

	t7 = (x29^(x30-(x31<x32)));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 9708U;
	static uint8_t x35 = 81U;
	uint64_t x36 = 1293762797017508LLU;
	uint32_t t8 = 47U;

	t8 = (x33^(x34-(x35<x36)));

	if (t8 != 4294957675U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 0U;
	int16_t x38 = -2004;
	static int32_t t9 = 9932208;

	t9 = (x37^(x38-(x39<x40)));

	if (t9 != -2004) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int16_t x42 = INT16_MIN;
	volatile uint8_t x43 = 12U;
	volatile int32_t t10 = -13830;

	t10 = (x41^(x42-(x43<x44)));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = UINT8_MAX;
	volatile int32_t t11 = -7133910;

	t11 = (x45^(x46-(x47<x48)));

	if (t11 != -256) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	static uint8_t x50 = UINT8_MAX;
	uint64_t x51 = 603384161LLU;
	uint8_t x52 = 62U;
	volatile int64_t t12 = -532914151772LL;

	t12 = (x49^(x50-(x51<x52)));

	if (t12 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint32_t x55 = UINT32_MAX;
	volatile int64_t x56 = INT64_MAX;
	int64_t t13 = 387852LL;

	t13 = (x53^(x54-(x55<x56)));

	if (t13 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = 1324;
	int8_t x60 = INT8_MIN;
	int32_t t14 = -1863;

	t14 = (x57^(x58-(x59<x60)));

	if (t14 != -1325) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MAX;
	int32_t x63 = -23178;
	static int8_t x64 = INT8_MIN;

	t15 = (x61^(x62-(x63<x64)));

	if (t15 != 378864485112342639LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x66 = 19901U;
	int16_t x68 = 855;
	static volatile int64_t t16 = 762795071990LL;

	t16 = (x65^(x66-(x67<x68)));

	if (t16 != 19900LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -1LL;
	int64_t x70 = -1LL;
	uint8_t x71 = 6U;
	int16_t x72 = INT16_MIN;
	int64_t t17 = 816067061LL;

	t17 = (x69^(x70-(x71<x72)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 30U;
	int16_t x74 = INT16_MIN;
	int64_t x76 = INT64_MAX;
	int32_t t18 = 531756728;

	t18 = (x73^(x74-(x75<x76)));

	if (t18 != -32799) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -43;
	int8_t x78 = -15;
	int8_t x79 = -1;
	uint64_t x80 = UINT64_MAX;

	t19 = (x77^(x78-(x79<x80)));

	if (t19 != 36) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x83 = 72LLU;
	uint16_t x84 = 225U;
	volatile uint32_t t20 = 0U;

	t20 = (x81^(x82-(x83<x84)));

	if (t20 != 80U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = -1;
	int32_t x90 = -1;
	static int8_t x91 = INT8_MAX;
	volatile int8_t x92 = 0;

	t21 = (x89^(x90-(x91<x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = -1LL;
	volatile int16_t x95 = INT16_MIN;
	int8_t x96 = -1;
	volatile int64_t t22 = 34411144267159LL;

	t22 = (x93^(x94-(x95<x96)));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x97 = -1;
	uint32_t t23 = 0U;

	t23 = (x97^(x98-(x99<x100)));

	if (t23 != 4294071966U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = UINT8_MAX;
	volatile int8_t x102 = -1;
	int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MAX;

	t24 = (x101^(x102-(x103<x104)));

	if (t24 != -255) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x105 = INT32_MIN;
	int16_t x106 = -1;
	volatile int16_t x107 = -1;
	int32_t x108 = INT32_MIN;
	volatile int32_t t25 = INT32_MAX;

	t25 = (x105^(x106-(x107<x108)));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 1892317LLU;
	static int64_t x111 = 7LL;
	uint64_t t26 = 1498359LLU;

	t26 = (x109^(x110-(x111<x112)));

	if (t26 != 86963593955571693LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x118 = -1;
	int16_t x120 = 2;
	volatile int64_t t27 = 498LL;

	t27 = (x117^(x118-(x119<x120)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x121 = UINT64_MAX;
	int32_t x122 = 7780;
	volatile uint32_t x123 = 1U;
	int64_t x124 = 105241369551LL;
	volatile uint64_t t28 = 121061LLU;

	t28 = (x121^(x122-(x123<x124)));

	if (t28 != 18446744073709543836LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x125 = INT64_MIN;
	static int16_t x126 = -1;
	uint64_t x127 = 2799262388508144LLU;
	static int16_t x128 = INT16_MAX;
	volatile int64_t t29 = INT64_MAX;

	t29 = (x125^(x126-(x127<x128)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x129 = INT8_MIN;
	static uint64_t x130 = 1058469080056405LLU;
	int16_t x131 = INT16_MIN;
	int64_t x132 = INT64_MIN;
	volatile uint64_t t30 = 8037LLU;

	t30 = (x129^(x130-(x131<x132)));

	if (t30 != 18445685604629495253LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MIN;
	uint64_t x134 = 2012499623516052LLU;
	int64_t x135 = INT64_MIN;
	static uint64_t t31 = 3549874276LLU;

	t31 = (x133^(x134-(x135<x136)));

	if (t31 != 18444731572648908691LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x138 = -1LL;
	int64_t t32 = 871LL;

	t32 = (x137^(x138-(x139<x140)));

	if (t32 != 4910462LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x142 = UINT8_MAX;
	uint64_t x143 = UINT64_MAX;

	t33 = (x141^(x142-(x143<x144)));

	if (t33 != -251) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x145 = INT64_MIN;
	volatile uint16_t x146 = 16566U;
	static uint8_t x147 = 3U;
	static uint8_t x148 = 54U;
	volatile int64_t t34 = -248572599382060109LL;

	t34 = (x145^(x146-(x147<x148)));

	if (t34 != -9223372036854759243LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MIN;
	volatile uint8_t x150 = UINT8_MAX;
	uint8_t x151 = 63U;
	int64_t x152 = INT64_MIN;
	int32_t t35 = 1;

	t35 = (x149^(x150-(x151<x152)));

	if (t35 != -32513) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = 0;
	uint16_t x155 = 0U;
	int32_t x156 = -16323702;
	static int32_t t36 = 5731;

	t36 = (x153^(x154-(x155<x156)));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x157 = 1LL;
	int32_t x159 = INT32_MAX;
	volatile int64_t x160 = -731344711642LL;

	t37 = (x157^(x158-(x159<x160)));

	if (t37 != -32767LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x161 = 4151986939LLU;
	volatile int16_t x162 = INT16_MIN;
	static uint32_t x163 = 3184U;
	uint64_t t38 = 172945384LLU;

	t38 = (x161^(x162-(x163<x164)));

	if (t38 != 18446744069557531908LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x166 = -7;
	volatile uint32_t x167 = 150158360U;
	int16_t x168 = -1;

	t39 = (x165^(x166-(x167<x168)));

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x169 = INT32_MIN;
	uint32_t x170 = 8126794U;
	uint32_t t40 = 645957U;

	t40 = (x169^(x170-(x171<x172)));

	if (t40 != 2155610441U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x174 = INT64_MIN;
	int64_t x175 = 636772255791LL;
	uint32_t x176 = 688930664U;
	volatile int64_t t41 = INT64_MAX;

	t41 = (x173^(x174-(x175<x176)));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = UINT16_MAX;
	int16_t x178 = -1;
	int64_t x179 = -1LL;
	static int16_t x180 = INT16_MAX;

	t42 = (x177^(x178-(x179<x180)));

	if (t42 != -65535) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MIN;
	static int64_t x183 = INT64_MIN;
	int32_t t43 = 14;

	t43 = (x181^(x182-(x183<x184)));

	if (t43 != -2147483522) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x185 = -3323686;
	volatile uint8_t x186 = 4U;
	volatile int16_t x187 = -1;
	int64_t x188 = INT64_MAX;
	int32_t t44 = 7551167;

	t44 = (x185^(x186-(x187<x188)));

	if (t44 != -3323687) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MIN;
	int16_t x190 = -97;
	static uint64_t x191 = 3047160734305739210LLU;
	static int16_t x192 = 9549;
	volatile int64_t t45 = 38576LL;

	t45 = (x189^(x190-(x191<x192)));

	if (t45 != 9223372036854775711LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x193 = INT64_MAX;
	int64_t x194 = -5LL;
	static uint16_t x195 = 0U;
	int8_t x196 = INT8_MIN;
	int64_t t46 = -26377014533404LL;

	t46 = (x193^(x194-(x195<x196)));

	if (t46 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x197 = INT64_MIN;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = INT16_MAX;
	uint32_t x200 = 46038170U;
	static volatile int64_t t47 = -13535849714006886LL;

	t47 = (x197^(x198-(x199<x200)));

	if (t47 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x201 = -1;
	static int16_t x202 = 285;
	volatile int64_t x203 = INT64_MIN;
	static uint16_t x204 = UINT16_MAX;
	int32_t t48 = -2099744;

	t48 = (x201^(x202-(x203<x204)));

	if (t48 != -285) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x205 = INT16_MIN;
	int8_t x206 = INT8_MAX;
	int8_t x207 = -1;
	int32_t t49 = -363237;

	t49 = (x205^(x206-(x207<x208)));

	if (t49 != -32641) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x211 = 5LLU;
	static volatile int8_t x212 = 0;

	t50 = (x209^(x210-(x211<x212)));

	if (t50 != -68) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x213 = 1U;
	int16_t x214 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MIN;
	static uint32_t t51 = 223341U;

	t51 = (x213^(x214-(x215<x216)));

	if (t51 != 4294934529U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MAX;
	volatile int32_t x218 = -1;

	t52 = (x217^(x218-(x219<x220)));

	if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = -1;
	volatile uint64_t t53 = 969248025114841877LLU;

	t53 = (x221^(x222-(x223<x224)));

	if (t53 != 18446744073709439479LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x225 = UINT16_MAX;
	int16_t x226 = -1122;
	int8_t x227 = INT8_MIN;
	uint64_t x228 = 108006480LLU;
	int32_t t54 = 0;

	t54 = (x225^(x226-(x227<x228)));

	if (t54 != -64415) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x230 = INT16_MIN;
	int16_t x232 = INT16_MIN;

	t55 = (x229^(x230-(x231<x232)));

	if (t55 != 32768U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 19268856LLU;
	uint16_t x234 = 247U;
	uint8_t x235 = 17U;
	static volatile uint16_t x236 = 14U;

	t56 = (x233^(x234-(x235<x236)));

	if (t56 != 19268623LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x238 = UINT64_MAX;
	volatile uint32_t x240 = UINT32_MAX;
	volatile uint64_t t57 = 31588797608175LLU;

	t57 = (x237^(x238-(x239<x240)));

	if (t57 != 215LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MAX;
	int64_t x246 = -1LL;
	int64_t t58 = 386510376034169LL;

	t58 = (x245^(x246-(x247<x248)));

	if (t58 != -32767LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x250 = -1LL;
	int64_t x252 = INT64_MIN;
	volatile int64_t t59 = 24031LL;

	t59 = (x249^(x250-(x251<x252)));

	if (t59 != 32767LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x253 = -1;
	uint16_t x254 = 0U;
	int64_t x255 = 1109775693401698LL;
	static volatile uint16_t x256 = 283U;

	t60 = (x253^(x254-(x255<x256)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x257 = 22292U;
	volatile uint32_t t61 = 709173U;

	t61 = (x257^(x258-(x259<x260)));

	if (t61 != 11221084U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x261 = INT64_MIN;
	static int8_t x262 = INT8_MIN;
	static int16_t x263 = INT16_MIN;
	uint8_t x264 = 34U;

	t62 = (x261^(x262-(x263<x264)));

	if (t62 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x269 = UINT32_MAX;
	volatile uint8_t x270 = UINT8_MAX;
	int16_t x271 = -1;
	int16_t x272 = INT16_MIN;
	volatile uint32_t t63 = 534172056U;

	t63 = (x269^(x270-(x271<x272)));

	if (t63 != 4294967040U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x273 = UINT8_MAX;
	int64_t x274 = INT64_MIN;
	uint8_t x275 = 24U;
	uint8_t x276 = 2U;

	t64 = (x273^(x274-(x275<x276)));

	if (t64 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = -1;
	volatile uint8_t x278 = 2U;
	uint64_t x279 = UINT64_MAX;

	t65 = (x277^(x278-(x279<x280)));

	if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x285 = 53LLU;
	uint16_t x286 = UINT16_MAX;
	int64_t x287 = -1025697LL;
	int64_t x288 = INT64_MIN;
	uint64_t t66 = 157224867443561847LLU;

	t66 = (x285^(x286-(x287<x288)));

	if (t66 != 65482LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x289 = 75650947U;
	int16_t x290 = -1;

	t67 = (x289^(x290-(x291<x292)));

	if (t67 != 4219316349U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = INT64_MAX;
	uint64_t x296 = 570697LLU;

	t68 = (x293^(x294-(x295<x296)));

	if (t68 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = INT16_MIN;
	int16_t x302 = INT16_MIN;
	volatile uint64_t x303 = 13115321485749LLU;
	uint16_t x304 = UINT16_MAX;

	t69 = (x301^(x302-(x303<x304)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x309 = -2;
	static volatile int16_t x310 = INT16_MIN;
	volatile int8_t x311 = -24;
	uint32_t x312 = 8905120U;
	static int32_t t70 = 173391;

	t70 = (x309^(x310-(x311<x312)));

	if (t70 != 32766) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x314 = -674;
	volatile int16_t x315 = 0;
	int64_t x316 = INT64_MIN;
	static volatile int32_t t71 = 0;

	t71 = (x313^(x314-(x315<x316)));

	if (t71 != -607) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = -32355646263949LL;
	volatile uint8_t x319 = UINT8_MAX;
	int8_t x320 = INT8_MIN;
	volatile int64_t t72 = 986639578768077LL;

	t72 = (x317^(x318-(x319<x320)));

	if (t72 != 32355646263948LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x321 = 25U;
	static int8_t x322 = INT8_MAX;
	uint32_t x323 = 2136635609U;
	static int64_t x324 = 1809229LL;
	volatile int32_t t73 = 637;

	t73 = (x321^(x322-(x323<x324)));

	if (t73 != 102) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x329 = -1028779;
	uint8_t x331 = 10U;
	static int32_t x332 = 1017176;
	int32_t t74 = 25040999;

	t74 = (x329^(x330-(x331<x332)));

	if (t74 != -2146454869) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MIN;
	uint8_t x335 = 51U;
	int32_t t75 = 467117659;

	t75 = (x333^(x334-(x335<x336)));

	if (t75 != -30906) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x337 = INT16_MIN;
	int8_t x338 = -1;
	int8_t x339 = INT8_MIN;
	static uint64_t x340 = 246934659183641278LLU;

	t76 = (x337^(x338-(x339<x340)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x343 = -1;
	int32_t x344 = -223576;

	t77 = (x341^(x342-(x343<x344)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x349 = UINT64_MAX;
	static int16_t x350 = 192;
	uint16_t x351 = 2U;
	int32_t x352 = INT32_MIN;
	uint64_t t78 = 3LLU;

	t78 = (x349^(x350-(x351<x352)));

	if (t78 != 18446744073709551423LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = -1;
	volatile int8_t x354 = INT8_MAX;
	int16_t x355 = INT16_MIN;
	int32_t x356 = INT32_MAX;
	volatile int32_t t79 = 63;

	t79 = (x353^(x354-(x355<x356)));

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x359 = -74771946881118LL;
	int8_t x360 = -1;
	uint32_t t80 = 11063U;

	t80 = (x357^(x358-(x359<x360)));

	if (t80 != 32768U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x361 = 13153225;
	uint8_t x362 = UINT8_MAX;
	uint32_t x364 = 332624599U;
	static int32_t t81 = -86;

	t81 = (x361^(x362-(x363<x364)));

	if (t81 != 13153078) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x365 = -265751979836287LL;
	static int8_t x367 = -1;
	uint32_t x368 = UINT32_MAX;
	volatile int64_t t82 = -5LL;

	t82 = (x365^(x366-(x367<x368)));

	if (t82 != -265751979836286LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = INT64_MIN;
	uint32_t x370 = 1U;
	int8_t x371 = -1;
	int32_t x372 = -1;
	int64_t t83 = 29550LL;

	t83 = (x369^(x370-(x371<x372)));

	if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = -1;
	static volatile int8_t x374 = -51;
	int8_t x375 = INT8_MAX;
	int32_t x376 = -421;
	volatile int32_t t84 = 924794074;

	t84 = (x373^(x374-(x375<x376)));

	if (t84 != 50) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x377 = 42857389;
	int16_t x378 = INT16_MIN;
	uint16_t x379 = UINT16_MAX;
	int32_t t85 = 115701223;

	t85 = (x377^(x378-(x379<x380)));

	if (t85 != -42830931) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MIN;
	static int16_t x383 = INT16_MIN;
	volatile int32_t t86 = 1;

	t86 = (x381^(x382-(x383<x384)));

	if (t86 != 2147450879) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x385 = INT8_MIN;
	volatile int64_t x386 = INT64_MIN;
	uint8_t x387 = UINT8_MAX;
	int16_t x388 = INT16_MIN;
	volatile int64_t t87 = -142839LL;

	t87 = (x385^(x386-(x387<x388)));

	if (t87 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = -21;
	uint64_t x390 = UINT64_MAX;
	int16_t x391 = INT16_MAX;
	int32_t x392 = INT32_MIN;
	uint64_t t88 = 3517663400LLU;

	t88 = (x389^(x390-(x391<x392)));

	if (t88 != 20LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x393 = INT32_MIN;
	volatile int32_t x394 = -1;
	static int64_t x395 = -1LL;
	volatile uint16_t x396 = 353U;
	static volatile int32_t t89 = 259652168;

	t89 = (x393^(x394-(x395<x396)));

	if (t89 != 2147483646) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x400 = 0U;
	volatile int32_t t90 = -101;

	t90 = (x397^(x398-(x399<x400)));

	if (t90 != -32743) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = INT16_MAX;
	int8_t x403 = 52;
	uint8_t x404 = 55U;
	static volatile int32_t t91 = 522;

	t91 = (x401^(x402-(x403<x404)));

	if (t91 != -32640) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x405 = INT64_MAX;
	static int64_t x406 = 1917LL;
	int64_t x407 = -3549LL;
	volatile int64_t t92 = -8013033757335LL;

	t92 = (x405^(x406-(x407<x408)));

	if (t92 != 9223372036854773890LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x409 = -1;
	uint64_t x411 = 6563003208672912368LLU;
	volatile int16_t x412 = -1;
	static volatile int32_t t93 = -780566483;

	t93 = (x409^(x410-(x411<x412)));

	if (t93 != -65535) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x414 = 1U;
	int16_t x415 = 129;

	t94 = (x413^(x414-(x415<x416)));

	if (t94 != -2798277894LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = -2355;
	uint32_t x418 = 1U;
	uint32_t t95 = 9659540U;

	t95 = (x417^(x418-(x419<x420)));

	if (t95 != 4294964941U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x421 = INT8_MIN;
	volatile int32_t x422 = INT32_MIN;
	int32_t x423 = INT32_MAX;
	int32_t x424 = INT32_MIN;
	int32_t t96 = 6127355;

	t96 = (x421^(x422-(x423<x424)));

	if (t96 != 2147483520) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x425 = INT64_MIN;
	volatile int16_t x426 = -4051;
	uint8_t x428 = 10U;
	int64_t t97 = -123206LL;

	t97 = (x425^(x426-(x427<x428)));

	if (t97 != 9223372036854771757LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = INT64_MIN;
	int16_t x430 = 13;
	static uint8_t x431 = 3U;
	uint16_t x432 = 30U;
	int64_t t98 = -776563695424874LL;

	t98 = (x429^(x430-(x431<x432)));

	if (t98 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x433 = INT8_MIN;
	volatile int16_t x435 = -243;
	int8_t x436 = -3;
	int32_t t99 = 11;

	t99 = (x433^(x434-(x435<x436)));

	if (t99 != -2) { NG(); } else { ; }
	
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

