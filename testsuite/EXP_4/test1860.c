#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int32_t x3 = -8;
static volatile uint64_t t3 = 856030389633405155LLU;
static volatile int64_t x23 = INT64_MIN;
int8_t x24 = 4;
static uint16_t x27 = 62U;
int16_t x28 = 7;
int64_t x32 = -107923970186255LL;
int8_t x37 = INT8_MIN;
int8_t x41 = 1;
int64_t x47 = -1LL;
volatile uint32_t x48 = 459U;
uint32_t x49 = 491U;
int32_t x52 = 1;
uint16_t x56 = 1U;
uint16_t x64 = 18840U;
uint32_t t14 = 740U;
uint64_t x71 = 604781765LLU;
volatile int64_t t16 = 13425656072LL;
volatile int16_t x78 = -1;
volatile uint16_t x80 = UINT16_MAX;
volatile uint64_t t17 = 11255862LLU;
static int32_t x81 = INT32_MIN;
int32_t x85 = INT32_MIN;
uint32_t t20 = 35U;
int32_t x93 = INT32_MAX;
int8_t x100 = 2;
volatile uint32_t t22 = 103U;
uint8_t x102 = 1U;
int8_t x104 = INT8_MIN;
int64_t t23 = 1192925LL;
int16_t x130 = INT16_MIN;
static int8_t x132 = INT8_MAX;
int32_t t27 = 39;
static uint64_t x138 = 65486134439606006LLU;
uint64_t t31 = 449918314159390LLU;
uint8_t x154 = 10U;
int32_t x155 = -1288857;
static volatile uint64_t t32 = 120646546363739598LLU;
int8_t x162 = -43;
volatile int64_t t34 = -54965087LL;
volatile uint32_t t35 = 4871U;
static uint32_t x172 = UINT32_MAX;
int8_t x174 = INT8_MIN;
int8_t x182 = 27;
volatile int64_t x191 = -1LL;
int16_t x206 = INT16_MIN;
int32_t x207 = 220135813;
int64_t x209 = INT64_MIN;
volatile int8_t x210 = -21;
int16_t x223 = 1132;
uint8_t x232 = 4U;
int32_t t49 = -76160565;
uint64_t t50 = 8698119681354LLU;
uint8_t x237 = 0U;
volatile uint8_t x241 = 4U;
int16_t x242 = -1;
int64_t x243 = -1LL;
static int32_t x249 = -22852;
volatile int8_t x250 = 6;
uint32_t x251 = 419982U;
uint32_t x254 = 20U;
volatile int32_t x273 = -282;
int64_t x281 = INT64_MIN;
uint16_t x282 = 7244U;
int16_t x283 = -24;
int32_t t61 = 246435;
int8_t x293 = -1;
int32_t x295 = INT32_MIN;
int8_t x307 = INT8_MIN;
int64_t x313 = -1LL;
static int8_t x315 = -12;
static int64_t x328 = INT64_MAX;
volatile uint64_t t65 = 53LLU;
uint16_t x329 = UINT16_MAX;
uint32_t x344 = UINT32_MAX;
static volatile uint64_t t68 = 2LLU;
int16_t x348 = INT16_MIN;
volatile int16_t x362 = 0;
int64_t t73 = -441166849983545014LL;
int32_t x372 = -435320599;
uint16_t x386 = 42U;
volatile uint16_t x387 = 3102U;
volatile int32_t t81 = -2417;
int8_t x420 = -7;
int16_t x423 = INT16_MIN;
int16_t x433 = 0;
uint8_t x450 = 72U;
volatile int64_t t91 = 1941899759LL;
volatile int32_t x456 = -4867743;
int8_t x459 = 7;
int8_t x472 = -1;
int8_t x480 = 43;
volatile int16_t x485 = INT16_MIN;


void f0(void) {
	static volatile int16_t x2 = INT16_MAX;
	uint16_t x4 = 0U;
	int32_t t0 = -4950;

	t0 = (x1+(x2+(x3|x4)));

	if (t0 != -9) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -1LL;
	volatile uint32_t x10 = 10U;
	volatile int32_t x11 = INT32_MAX;
	int8_t x12 = -1;
	int64_t t1 = -41295LL;

	t1 = (x9+(x10+(x11|x12)));

	if (t1 != 8LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 0U;
	uint8_t x14 = 103U;
	int8_t x15 = -9;
	static int8_t x16 = INT8_MAX;
	static volatile int32_t t2 = -2937143;

	t2 = (x13+(x14+(x15|x16)));

	if (t2 != 102) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 89171U;
	uint64_t x18 = 418014LLU;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = 1U;

	t3 = (x17+(x18+(x19|x20)));

	if (t3 != 507058LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = INT16_MAX;
	int64_t x22 = 18LL;
	volatile int64_t t4 = -2821665834736330906LL;

	t4 = (x21+(x22+(x23|x24)));

	if (t4 != -9223372036854743019LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 12;
	volatile int8_t x26 = INT8_MAX;
	static volatile int32_t t5 = -1;

	t5 = (x25+(x26+(x27|x28)));

	if (t5 != 202) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -1LL;
	static volatile int32_t x30 = INT32_MIN;
	static int64_t x31 = -84321322454066LL;
	volatile int64_t t6 = 2902100LL;

	t6 = (x29+(x30+(x31|x32)));

	if (t6 != -70508336958466LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x38 = UINT64_MAX;
	volatile uint32_t x39 = UINT32_MAX;
	int8_t x40 = INT8_MAX;
	uint64_t t7 = 1490682048121448944LLU;

	t7 = (x37+(x38+(x39|x40)));

	if (t7 != 4294967166LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x42 = -1;
	int32_t x43 = INT32_MAX;
	int64_t x44 = -1LL;
	volatile int64_t t8 = -21281LL;

	t8 = (x41+(x42+(x43|x44)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = 2872;
	uint64_t x46 = 1LLU;
	static uint64_t t9 = 62820550LLU;

	t9 = (x45+(x46+(x47|x48)));

	if (t9 != 2872LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = INT32_MAX;
	int64_t x51 = INT64_MIN;
	volatile int64_t t10 = -1910382380LL;

	t10 = (x49+(x50+(x51|x52)));

	if (t10 != -9223372034707291669LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MIN;
	volatile int16_t x54 = 815;
	uint64_t x55 = 248140LLU;
	uint64_t t11 = 0LLU;

	t11 = (x53+(x54+(x55|x56)));

	if (t11 != 18446744071562316924LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x57 = 1;
	static uint8_t x58 = 65U;
	int16_t x59 = INT16_MAX;
	static int16_t x60 = -1;
	static volatile int32_t t12 = 3462091;

	t12 = (x57+(x58+(x59|x60)));

	if (t12 != 65) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x61 = 1;
	int32_t x62 = INT32_MAX;
	volatile int16_t x63 = INT16_MIN;
	static volatile int32_t t13 = -17766405;

	t13 = (x61+(x62+(x63|x64)));

	if (t13 != 2147469720) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x65 = 8U;
	uint8_t x66 = 1U;
	uint8_t x67 = UINT8_MAX;
	volatile uint32_t x68 = 16160266U;

	t14 = (x65+(x66+(x67|x68)));

	if (t14 != 16160520U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 4U;
	static int16_t x70 = INT16_MIN;
	static uint32_t x72 = 611100U;
	static uint64_t t15 = 41699LLU;

	t15 = (x69+(x70+(x71|x72)));

	if (t15 != 604831713LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = UINT8_MAX;
	int64_t x74 = INT64_MIN;
	static uint32_t x75 = 209305028U;
	volatile int32_t x76 = INT32_MIN;

	t16 = (x73+(x74+(x75|x76)));

	if (t16 != -9223372034497986877LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = 563263074LLU;
	int64_t x79 = -1LL;

	t17 = (x77+(x78+(x79|x80)));

	if (t17 != 563263072LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x82 = INT64_MIN;
	uint8_t x83 = 0U;
	uint64_t x84 = UINT64_MAX;
	static volatile uint64_t t18 = 277649LLU;

	t18 = (x81+(x82+(x83|x84)));

	if (t18 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x86 = UINT32_MAX;
	volatile int32_t x87 = 386903569;
	int8_t x88 = -31;
	uint32_t t19 = 1124609602U;

	t19 = (x85+(x86+(x87|x88)));

	if (t19 != 2147483632U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x89 = UINT32_MAX;
	static int8_t x90 = INT8_MIN;
	int16_t x91 = -1;
	volatile int16_t x92 = -1;

	t20 = (x89+(x90+(x91|x92)));

	if (t20 != 4294967166U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x94 = -1;
	int32_t x95 = INT32_MAX;
	uint32_t x96 = UINT32_MAX;
	uint32_t t21 = 6090746U;

	t21 = (x93+(x94+(x95|x96)));

	if (t21 != 2147483645U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x97 = INT16_MIN;
	volatile uint32_t x98 = 37255949U;
	int32_t x99 = INT32_MIN;

	t22 = (x97+(x98+(x99|x100)));

	if (t22 != 2184706831U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = 12582LL;
	uint16_t x103 = UINT16_MAX;

	t23 = (x101+(x102+(x103|x104)));

	if (t23 != 12582LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MIN;
	int32_t x118 = -87651;
	int32_t x119 = -2140592;
	int64_t x120 = -88091LL;
	volatile int64_t t24 = 29253643LL;

	t24 = (x117+(x118+(x119|x120)));

	if (t24 != -89838LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x121 = INT32_MIN;
	uint64_t x122 = UINT64_MAX;
	volatile int16_t x123 = INT16_MAX;
	uint32_t x124 = UINT32_MAX;
	uint64_t t25 = 3864618547LLU;

	t25 = (x121+(x122+(x123|x124)));

	if (t25 != 2147483646LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = 3;
	volatile uint64_t x126 = UINT64_MAX;
	int8_t x127 = INT8_MIN;
	int16_t x128 = -261;
	volatile uint64_t t26 = 337373620801441110LLU;

	t26 = (x125+(x126+(x127|x128)));

	if (t26 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x129 = 3U;
	int8_t x131 = -3;

	t27 = (x129+(x130+(x131|x132)));

	if (t27 != -32766) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MIN;
	uint64_t x134 = 235648308LLU;
	volatile int64_t x135 = INT64_MIN;
	static int16_t x136 = -1;
	static volatile uint64_t t28 = 167632871982750982LLU;

	t28 = (x133+(x134+(x135|x136)));

	if (t28 != 235615539LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = -512599LL;
	int32_t x139 = -598615186;
	int32_t x140 = -1;
	uint64_t t29 = 208912815233LLU;

	t29 = (x137+(x138+(x139|x140)));

	if (t29 != 65486134439093406LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x141 = 405763LL;
	volatile uint64_t x142 = 33736LLU;
	int64_t x143 = -35361LL;
	int64_t x144 = -1049716843518LL;
	static volatile uint64_t t30 = 130434946331678LLU;

	t30 = (x141+(x142+(x143|x144)));

	if (t30 != 406186LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x149 = 2073514971453042LLU;
	uint8_t x150 = 21U;
	int8_t x151 = 21;
	int32_t x152 = -1;

	t31 = (x149+(x150+(x151|x152)));

	if (t31 != 2073514971453062LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = UINT64_MAX;
	volatile int16_t x156 = INT16_MIN;

	t32 = (x153+(x154+(x155|x156)));

	if (t32 != 18446744073709540720LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x157 = -1;
	uint16_t x158 = UINT16_MAX;
	int32_t x159 = INT32_MIN;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t33 = 6LLU;

	t33 = (x157+(x158+(x159|x160)));

	if (t33 != 65533LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x161 = 408778041LL;
	volatile int8_t x163 = -33;
	static int8_t x164 = INT8_MAX;

	t34 = (x161+(x162+(x163|x164)));

	if (t34 != 408777997LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = INT16_MIN;
	uint32_t x166 = UINT32_MAX;
	uint32_t x167 = UINT32_MAX;
	int32_t x168 = -225320318;

	t35 = (x165+(x166+(x167|x168)));

	if (t35 != 4294934526U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x169 = 2251LLU;
	uint8_t x170 = UINT8_MAX;
	int8_t x171 = INT8_MIN;
	uint64_t t36 = 54965169045LLU;

	t36 = (x169+(x170+(x171|x172)));

	if (t36 != 2505LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = -1;
	int8_t x175 = -7;
	volatile uint64_t x176 = 3213LLU;
	volatile uint64_t t37 = 1715245114238231518LLU;

	t37 = (x173+(x174+(x175|x176)));

	if (t37 != 18446744073709551484LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = INT32_MIN;
	volatile uint8_t x178 = UINT8_MAX;
	int16_t x179 = -1;
	uint32_t x180 = 392U;
	static volatile uint32_t t38 = 5U;

	t38 = (x177+(x178+(x179|x180)));

	if (t38 != 2147483902U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x181 = 27237LLU;
	uint16_t x183 = 11U;
	uint64_t x184 = UINT64_MAX;
	uint64_t t39 = 153419649120112LLU;

	t39 = (x181+(x182+(x183|x184)));

	if (t39 != 27263LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = -1;
	int8_t x190 = 29;
	static int64_t x192 = 1329746245760LL;
	static volatile int64_t t40 = -52314LL;

	t40 = (x189+(x190+(x191|x192)));

	if (t40 != 27LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = INT8_MAX;
	int16_t x198 = -1;
	volatile uint64_t x199 = UINT64_MAX;
	volatile int32_t x200 = -253588;
	volatile uint64_t t41 = 406937664749LLU;

	t41 = (x197+(x198+(x199|x200)));

	if (t41 != 125LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = -48;
	static volatile int64_t x202 = 0LL;
	int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MAX;
	volatile int64_t t42 = -2398926211LL;

	t42 = (x201+(x202+(x203|x204)));

	if (t42 != -49LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = -1;
	static uint64_t x208 = UINT64_MAX;
	static uint64_t t43 = 124LLU;

	t43 = (x205+(x206+(x207|x208)));

	if (t43 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x211 = UINT8_MAX;
	int64_t x212 = 305679341333LL;
	volatile int64_t t44 = -432026LL;

	t44 = (x209+(x210+(x211|x212)));

	if (t44 != -9223371731175434262LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x213 = UINT64_MAX;
	int16_t x214 = INT16_MAX;
	static int64_t x215 = -1LL;
	volatile int64_t x216 = INT64_MAX;
	uint64_t t45 = 31406352703868580LLU;

	t45 = (x213+(x214+(x215|x216)));

	if (t45 != 32765LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = -1;
	uint8_t x218 = 47U;
	volatile uint8_t x219 = 0U;
	static int64_t x220 = INT64_MIN;
	static int64_t t46 = 39238063200411LL;

	t46 = (x217+(x218+(x219|x220)));

	if (t46 != -9223372036854775762LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x221 = 1;
	int8_t x222 = INT8_MIN;
	static uint16_t x224 = 25U;
	volatile int32_t t47 = -2927;

	t47 = (x221+(x222+(x223|x224)));

	if (t47 != 1022) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x225 = 123U;
	uint64_t x226 = UINT64_MAX;
	uint16_t x227 = 37U;
	int16_t x228 = -1;
	uint64_t t48 = 274752LLU;

	t48 = (x225+(x226+(x227|x228)));

	if (t48 != 121LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MIN;
	volatile int16_t x230 = -1;
	volatile int8_t x231 = INT8_MAX;

	t49 = (x229+(x230+(x231|x232)));

	if (t49 != -2147483522) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x233 = -7250336876049LL;
	int64_t x234 = -1LL;
	uint64_t x235 = 44046141548662LLU;
	uint8_t x236 = UINT8_MAX;

	t50 = (x233+(x234+(x235|x236)));

	if (t50 != 36795804672749LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x238 = INT16_MIN;
	uint32_t x239 = UINT32_MAX;
	static int32_t x240 = -7;
	static volatile uint32_t t51 = 41788172U;

	t51 = (x237+(x238+(x239|x240)));

	if (t51 != 4294934527U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x244 = INT32_MIN;
	int64_t t52 = 2373930844537542365LL;

	t52 = (x241+(x242+(x243|x244)));

	if (t52 != 2LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x245 = UINT8_MAX;
	uint16_t x246 = 0U;
	int32_t x247 = -329;
	uint32_t x248 = 3593U;
	uint32_t t53 = 527258875U;

	t53 = (x245+(x246+(x247|x248)));

	if (t53 != 4294967230U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x252 = INT32_MIN;
	volatile uint32_t t54 = 81U;

	t54 = (x249+(x250+(x251|x252)));

	if (t54 != 2147880784U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = -30;
	static int16_t x255 = -112;
	int8_t x256 = 1;
	static uint32_t t55 = 39U;

	t55 = (x253+(x254+(x255|x256)));

	if (t55 != 4294967175U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = INT32_MIN;
	uint16_t x262 = UINT16_MAX;
	volatile int32_t x263 = INT32_MIN;
	int16_t x264 = -1;
	int32_t t56 = -232;

	t56 = (x261+(x262+(x263|x264)));

	if (t56 != -2147418114) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x269 = 19U;
	uint8_t x270 = 5U;
	uint8_t x271 = 89U;
	uint16_t x272 = 5U;
	static volatile int32_t t57 = -253;

	t57 = (x269+(x270+(x271|x272)));

	if (t57 != 117) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x274 = INT16_MIN;
	volatile int64_t x275 = -1LL;
	int64_t x276 = -95289572LL;
	volatile int64_t t58 = 3LL;

	t58 = (x273+(x274+(x275|x276)));

	if (t58 != -33051LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x277 = INT16_MAX;
	int8_t x278 = 1;
	int32_t x279 = INT32_MIN;
	volatile int16_t x280 = 376;
	volatile int32_t t59 = -45;

	t59 = (x277+(x278+(x279|x280)));

	if (t59 != -2147450504) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x284 = 11121U;
	int64_t t60 = -166977147960LL;

	t60 = (x281+(x282+(x283|x284)));

	if (t60 != -9223372036854768571LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x289 = 47;
	static int16_t x290 = INT16_MIN;
	volatile int16_t x291 = INT16_MIN;
	uint8_t x292 = UINT8_MAX;

	t61 = (x289+(x290+(x291|x292)));

	if (t61 != -65234) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x294 = 1U;
	static volatile int8_t x296 = -61;
	int32_t t62 = 16618194;

	t62 = (x293+(x294+(x295|x296)));

	if (t62 != -61) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x305 = 1075858LLU;
	volatile int16_t x306 = -1;
	static uint32_t x308 = UINT32_MAX;
	volatile uint64_t t63 = 17405151101648112LLU;

	t63 = (x305+(x306+(x307|x308)));

	if (t63 != 4296043152LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x314 = -33;
	volatile uint8_t x316 = 4U;
	int64_t t64 = -2907839666350LL;

	t64 = (x313+(x314+(x315|x316)));

	if (t64 != -46LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x325 = UINT32_MAX;
	volatile int16_t x326 = INT16_MIN;
	uint64_t x327 = 154053051LLU;

	t65 = (x325+(x326+(x327|x328)));

	if (t65 != 9223372041149710334LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x330 = INT32_MIN;
	uint8_t x331 = 3U;
	volatile int8_t x332 = 1;
	static volatile int32_t t66 = 221;

	t66 = (x329+(x330+(x331|x332)));

	if (t66 != -2147418110) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x333 = 0;
	int16_t x334 = -1;
	volatile int16_t x335 = INT16_MAX;
	static int8_t x336 = 48;
	volatile int32_t t67 = -101081;

	t67 = (x333+(x334+(x335|x336)));

	if (t67 != 32766) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x341 = 394549350559760478LLU;
	volatile int16_t x342 = 14909;
	static int16_t x343 = INT16_MIN;

	t68 = (x341+(x342+(x343|x344)));

	if (t68 != 394549350559775386LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x345 = 42U;
	uint16_t x346 = UINT16_MAX;
	volatile int32_t x347 = INT32_MIN;
	static int32_t t69 = 3;

	t69 = (x345+(x346+(x347|x348)));

	if (t69 != 32809) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x349 = INT16_MAX;
	volatile uint16_t x350 = 1561U;
	uint32_t x351 = UINT32_MAX;
	int64_t x352 = INT64_MIN;
	volatile int64_t t70 = -457206LL;

	t70 = (x349+(x350+(x351|x352)));

	if (t70 != -9223372032559774185LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x353 = -1;
	static uint64_t x354 = 10040693854745LLU;
	uint32_t x355 = 438221206U;
	static volatile int16_t x356 = INT16_MIN;
	uint64_t t71 = 2134330LLU;

	t71 = (x353+(x354+(x355|x356)));

	if (t71 != 10044988804014LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x361 = 6U;
	int64_t x363 = -871LL;
	int8_t x364 = -15;
	static int64_t t72 = -65083029LL;

	t72 = (x361+(x362+(x363|x364)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x365 = 1;
	volatile uint16_t x366 = 0U;
	int64_t x367 = INT64_MIN;
	static uint8_t x368 = UINT8_MAX;

	t73 = (x365+(x366+(x367|x368)));

	if (t73 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x369 = 14;
	volatile int8_t x370 = INT8_MIN;
	static uint8_t x371 = UINT8_MAX;
	int32_t t74 = -5057;

	t74 = (x369+(x370+(x371|x372)));

	if (t74 != -435320691) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x373 = -542;
	volatile int64_t x374 = -358551594659LL;
	uint64_t x375 = 118822524LLU;
	volatile int32_t x376 = -1979;
	volatile uint64_t t75 = 67703398LLU;

	t75 = (x373+(x374+(x375|x376)));

	if (t75 != 18446743715157956028LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x377 = INT8_MAX;
	static volatile int16_t x378 = -1;
	uint8_t x379 = UINT8_MAX;
	uint8_t x380 = 0U;
	static volatile int32_t t76 = 21662680;

	t76 = (x377+(x378+(x379|x380)));

	if (t76 != 381) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x381 = -172;
	static int8_t x382 = -3;
	uint8_t x383 = UINT8_MAX;
	volatile uint64_t x384 = 9316LLU;
	volatile uint64_t t77 = 372713625996653LLU;

	t77 = (x381+(x382+(x383|x384)));

	if (t77 != 9296LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x385 = 1;
	uint16_t x388 = 4663U;
	int32_t t78 = 5501391;

	t78 = (x385+(x386+(x387|x388)));

	if (t78 != 7786) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x393 = INT8_MIN;
	static volatile int32_t x394 = -1;
	int64_t x395 = -1LL;
	int16_t x396 = 3241;
	static volatile int64_t t79 = -64LL;

	t79 = (x393+(x394+(x395|x396)));

	if (t79 != -130LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x397 = 70361939973765149LLU;
	volatile uint8_t x398 = 13U;
	int32_t x399 = INT32_MIN;
	int32_t x400 = INT32_MIN;
	volatile uint64_t t80 = 26LLU;

	t80 = (x397+(x398+(x399|x400)));

	if (t80 != 70361937826281514LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x401 = -1;
	static volatile int8_t x402 = INT8_MIN;
	static int16_t x403 = 276;
	int8_t x404 = -3;

	t81 = (x401+(x402+(x403|x404)));

	if (t81 != -132) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x405 = 11280U;
	volatile int16_t x406 = -1;
	volatile int8_t x407 = -1;
	static int8_t x408 = 54;
	static volatile int32_t t82 = 938518731;

	t82 = (x405+(x406+(x407|x408)));

	if (t82 != 11278) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x409 = UINT8_MAX;
	int8_t x410 = -7;
	uint64_t x411 = 295429LLU;
	int32_t x412 = -1;
	static volatile uint64_t t83 = 29028029654386530LLU;

	t83 = (x409+(x410+(x411|x412)));

	if (t83 != 247LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x417 = 22208;
	int16_t x418 = -4;
	static volatile int64_t x419 = INT64_MIN;
	int64_t t84 = -42863263LL;

	t84 = (x417+(x418+(x419|x420)));

	if (t84 != 22197LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x421 = INT32_MIN;
	volatile int32_t x422 = INT32_MIN;
	int64_t x424 = 106751317LL;
	volatile int64_t t85 = -14276712LL;

	t85 = (x421+(x422+(x423|x424)));

	if (t85 != -4294974123LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x425 = INT32_MIN;
	static volatile int16_t x426 = -1;
	uint64_t x427 = 18LLU;
	uint8_t x428 = 33U;
	volatile uint64_t t86 = 847271180651243LLU;

	t86 = (x425+(x426+(x427|x428)));

	if (t86 != 18446744071562068018LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x434 = INT16_MAX;
	volatile int16_t x435 = 5917;
	int64_t x436 = -1LL;
	int64_t t87 = -16082516LL;

	t87 = (x433+(x434+(x435|x436)));

	if (t87 != 32766LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x437 = INT32_MIN;
	int16_t x438 = INT16_MAX;
	int8_t x439 = -1;
	int32_t x440 = INT32_MIN;
	volatile int32_t t88 = -13955224;

	t88 = (x437+(x438+(x439|x440)));

	if (t88 != -2147450882) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x441 = 707;
	uint64_t x442 = 18412732LLU;
	int8_t x443 = -1;
	int64_t x444 = 841LL;
	uint64_t t89 = 71621198098LLU;

	t89 = (x441+(x442+(x443|x444)));

	if (t89 != 18413438LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x445 = UINT8_MAX;
	static int8_t x446 = INT8_MAX;
	static int64_t x447 = 2489949LL;
	int16_t x448 = INT16_MIN;
	static volatile int64_t t90 = -1276436013LL;

	t90 = (x445+(x446+(x447|x448)));

	if (t90 != -37LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x449 = -1;
	int64_t x451 = 0LL;
	static uint32_t x452 = 7U;

	t91 = (x449+(x450+(x451|x452)));

	if (t91 != 78LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x453 = UINT32_MAX;
	int8_t x454 = INT8_MIN;
	int64_t x455 = INT64_MIN;
	volatile int64_t t92 = -834587783LL;

	t92 = (x453+(x454+(x455|x456)));

	if (t92 != 4290099424LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x457 = 199U;
	uint64_t x458 = 33LLU;
	volatile int8_t x460 = -1;
	uint64_t t93 = 247430LLU;

	t93 = (x457+(x458+(x459|x460)));

	if (t93 != 231LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x461 = 35U;
	static int16_t x462 = INT16_MAX;
	static int64_t x463 = -1LL;
	static uint64_t x464 = 219LLU;
	volatile uint64_t t94 = 3715032207985098201LLU;

	t94 = (x461+(x462+(x463|x464)));

	if (t94 != 32801LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x469 = INT8_MIN;
	static int32_t x470 = -27;
	static int32_t x471 = 88008560;
	int32_t t95 = 284784;

	t95 = (x469+(x470+(x471|x472)));

	if (t95 != -156) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x473 = -2;
	volatile uint16_t x474 = 113U;
	uint16_t x475 = 2982U;
	volatile int8_t x476 = -1;
	int32_t t96 = -22;

	t96 = (x473+(x474+(x475|x476)));

	if (t96 != 110) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x477 = -1;
	int8_t x478 = INT8_MIN;
	int8_t x479 = 56;
	int32_t t97 = 2;

	t97 = (x477+(x478+(x479|x480)));

	if (t97 != -70) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x481 = 0;
	volatile int16_t x482 = INT16_MIN;
	uint16_t x483 = 6779U;
	volatile int8_t x484 = 11;
	int32_t t98 = -1;

	t98 = (x481+(x482+(x483|x484)));

	if (t98 != -25989) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x486 = -7;
	int8_t x487 = 1;
	int8_t x488 = INT8_MIN;
	int32_t t99 = -175131310;

	t99 = (x485+(x486+(x487|x488)));

	if (t99 != -32902) { NG(); } else { ; }
	
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

