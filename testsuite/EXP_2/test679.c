#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 156U;
int64_t t1 = -16983830LL;
volatile int32_t x16 = -56339;
uint64_t x26 = 2136199LLU;
uint64_t x36 = 298637280485937698LLU;
static volatile int32_t x39 = -1;
int32_t x40 = 0;
volatile uint64_t t8 = 256971315007313LLU;
uint16_t x45 = 31U;
volatile uint8_t x46 = 110U;
int64_t x54 = INT64_MIN;
uint16_t x58 = 4U;
uint64_t x61 = 1850116579LLU;
int8_t x64 = INT8_MIN;
static uint8_t x75 = 1U;
uint32_t x76 = 38244U;
int32_t x87 = 32333;
volatile int64_t t18 = -3725925709182LL;
int16_t x95 = -1;
int8_t x96 = -1;
volatile int16_t x117 = INT16_MIN;
volatile int16_t x118 = -1;
volatile uint16_t x127 = 943U;
static volatile int64_t t26 = 82494616841704381LL;
uint64_t x142 = 4142317611LLU;
volatile int32_t t30 = -1362814;
int8_t x159 = -1;
int32_t x162 = INT32_MAX;
uint64_t x164 = UINT64_MAX;
int16_t x169 = -182;
uint32_t x172 = 9U;
int32_t x175 = -1;
volatile int8_t x177 = -1;
uint64_t t37 = 15LLU;
volatile int16_t x190 = INT16_MAX;
int32_t x210 = -1;
int16_t x219 = INT16_MIN;
uint32_t x221 = 15U;
int64_t x228 = -1LL;
int16_t x231 = -8;
int32_t x235 = -595762419;
volatile int64_t x237 = -186LL;
volatile int64_t t48 = 21456702093761LL;
int16_t x243 = -1;
int32_t x249 = 580;
static uint32_t t52 = 159391U;
int64_t x257 = INT64_MIN;
int16_t x258 = 189;
uint64_t x260 = UINT64_MAX;
volatile uint64_t x268 = UINT64_MAX;
uint64_t t55 = 1LLU;
volatile int8_t x269 = -1;
uint32_t x285 = 5114U;
volatile int16_t x294 = INT16_MIN;
int32_t x309 = INT32_MAX;
int8_t x312 = 52;
int16_t x314 = -1;
int32_t x322 = 0;
uint64_t t67 = 614LLU;
static volatile int64_t x327 = 148368492776LL;
uint64_t x328 = 393322510977143LLU;
int8_t x331 = -1;
int16_t x338 = -1;
int64_t x339 = INT64_MIN;
volatile uint64_t t72 = 14445413LLU;
volatile uint64_t t75 = 981741497881278LLU;
uint8_t x357 = 94U;
static int8_t x361 = -3;
volatile uint64_t t79 = 0LLU;
volatile int8_t x379 = 10;
int8_t x380 = INT8_MIN;
uint64_t x387 = 3766857868120770455LLU;
uint32_t x388 = 48648U;
int64_t x390 = -1LL;
static volatile int64_t x393 = -1LL;
volatile int16_t x394 = -1;
static int64_t t84 = -2056444323LL;
int32_t x397 = INT32_MIN;
uint64_t x398 = UINT64_MAX;
int64_t x400 = 16108216504952308LL;
uint8_t x408 = 26U;
volatile uint64_t x415 = UINT64_MAX;
int8_t x416 = INT8_MIN;
uint32_t t90 = 1U;
int32_t x425 = INT32_MIN;
volatile int32_t x437 = -190812127;
static volatile int32_t x439 = -1;
volatile int64_t t94 = -18704578135684LL;
volatile int8_t x461 = 1;
volatile int64_t t96 = -62LL;
volatile uint64_t x467 = UINT64_MAX;
static volatile int8_t x468 = INT8_MIN;
int16_t x469 = -1;
int32_t x470 = 1;
int8_t x472 = -1;


void f0(void) {
	int32_t x6 = INT32_MAX;
	int16_t x7 = -2016;
	int8_t x8 = 6;
	static int32_t t0 = -11526351;

	t0 = ((x5+(x6%x7))*x8);

	if (t0 != 1698) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 128U;
	volatile uint16_t x10 = 17U;
	int64_t x11 = INT64_MIN;
	int16_t x12 = INT16_MIN;

	t1 = ((x9+(x10%x11))*x12);

	if (t1 != -4751360LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = UINT8_MAX;
	volatile int64_t x14 = -1LL;
	int32_t x15 = INT32_MIN;
	static volatile int64_t t2 = 15371161854611228LL;

	t2 = ((x13+(x14%x15))*x16);

	if (t2 != -14310106LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = -1491192;
	int64_t x18 = 163LL;
	uint64_t x19 = 1683274882291865LLU;
	uint64_t x20 = 760510701LLU;
	static volatile uint64_t t3 = 49602568347764LLU;

	t3 = ((x17+(x18%x19))*x20);

	if (t3 != 18445610130199550287LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MAX;
	int32_t x24 = -1;
	volatile int64_t t4 = 1609508806199LL;

	t4 = ((x21+(x22%x23))*x24);

	if (t4 != 32769LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 0;
	static uint64_t x27 = 1924537117604LLU;
	int64_t x28 = -1LL;
	volatile uint64_t t5 = 1011LLU;

	t5 = ((x25+(x26%x27))*x28);

	if (t5 != 18446744073707415417LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	volatile int8_t x30 = 1;
	uint64_t x31 = 515122LLU;
	uint16_t x32 = 3U;
	volatile uint64_t t6 = 11465LLU;

	t6 = ((x29+(x30%x31))*x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x33 = UINT64_MAX;
	uint16_t x34 = 75U;
	int16_t x35 = INT16_MIN;
	uint64_t t7 = 3LLU;

	t7 = ((x33+(x34%x35))*x36);

	if (t7 != 3652414682249838036LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 35580044557905982LLU;
	uint64_t x38 = 237490LLU;

	t8 = ((x37+(x38%x39))*x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x47 = 366239LLU;
	int64_t x48 = 1776402LL;
	static volatile uint64_t t9 = 117171971LLU;

	t9 = ((x45+(x46%x47))*x48);

	if (t9 != 250472682LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = -1;
	int32_t x51 = -5;
	static volatile uint64_t x52 = 459287LLU;
	uint64_t t10 = 980195408935534640LLU;

	t10 = ((x49+(x50%x51))*x52);

	if (t10 != 18446744058659175913LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = 4;
	int32_t x55 = -161;
	int16_t x56 = INT16_MIN;
	volatile int64_t t11 = -11275LL;

	t11 = ((x53+(x54%x55))*x56);

	if (t11 != 4489216LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 18U;
	static int32_t x59 = INT32_MAX;
	volatile int32_t x60 = 120;
	volatile int32_t t12 = 3105;

	t12 = ((x57+(x58%x59))*x60);

	if (t12 != 2640) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = INT8_MAX;
	int64_t x63 = 4103LL;
	uint64_t t13 = 330LLU;

	t13 = ((x61+(x62%x63))*x64);

	if (t13 != 18446743836894613248LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x73 = INT32_MAX;
	int16_t x74 = -1;
	uint32_t t14 = 71860U;

	t14 = ((x73+(x74%x75))*x76);

	if (t14 != 4294929052U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x77 = -1;
	volatile int32_t x78 = 30056714;
	int64_t x79 = INT64_MAX;
	static int64_t x80 = -1LL;
	int64_t t15 = -163LL;

	t15 = ((x77+(x78%x79))*x80);

	if (t15 != -30056713LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MIN;
	static volatile int64_t x82 = 3856838LL;
	static uint16_t x83 = 1430U;
	volatile uint64_t x84 = 412270319LLU;
	volatile uint64_t t16 = 37LLU;

	t16 = ((x81+(x82%x83))*x84);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x85 = INT8_MIN;
	volatile uint64_t x86 = 2026465361822297357LLU;
	static uint64_t x88 = 9149043936642281215LLU;
	volatile uint64_t t17 = 1919607419850840LLU;

	t17 = ((x85+(x86%x87))*x88);

	if (t17 != 9132227474285398961LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x89 = UINT8_MAX;
	int64_t x90 = -1LL;
	static uint8_t x91 = UINT8_MAX;
	int16_t x92 = 44;

	t18 = ((x89+(x90%x91))*x92);

	if (t18 != 11176LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = 8127220820832283LLU;
	int32_t x94 = -193;
	volatile uint64_t t19 = 28537LLU;

	t19 = ((x93+(x94%x95))*x96);

	if (t19 != 18438616852888719333LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x101 = UINT16_MAX;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 1488260693598429417LLU;
	int8_t x104 = INT8_MIN;
	uint64_t t20 = 226057153622LLU;

	t20 = ((x101+(x102%x103))*x104);

	if (t20 != 17018904300904363648LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x113 = 0U;
	volatile uint64_t x114 = 801535689772214140LLU;
	static int32_t x115 = -1;
	static uint8_t x116 = 107U;
	volatile uint64_t t21 = 227944750018535LLU;

	t21 = ((x113+(x114%x115))*x116);

	if (t21 != 11977342510788706516LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x119 = 2781288LL;
	int16_t x120 = INT16_MIN;
	volatile int64_t t22 = -77LL;

	t22 = ((x117+(x118%x119))*x120);

	if (t22 != 1073774592LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = 462313610;
	static uint32_t x122 = 5239170U;
	int32_t x123 = -1033;
	int8_t x124 = INT8_MIN;
	uint32_t t23 = 1U;

	t23 = ((x121+(x122%x123))*x124);

	if (t23 != 282786304U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = INT8_MAX;
	volatile uint32_t x126 = 454U;
	int8_t x128 = INT8_MIN;
	static uint32_t t24 = 12031819U;

	t24 = ((x125+(x126%x127))*x128);

	if (t24 != 4294892928U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x129 = -1LL;
	int16_t x130 = INT16_MAX;
	int16_t x131 = 6;
	int8_t x132 = INT8_MIN;
	int64_t t25 = 564072430244986106LL;

	t25 = ((x129+(x130%x131))*x132);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = 75362;
	int64_t x134 = INT64_MIN;
	volatile int8_t x135 = INT8_MIN;
	int16_t x136 = 58;

	t26 = ((x133+(x134%x135))*x136);

	if (t26 != 4370996LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x137 = -1;
	uint8_t x138 = UINT8_MAX;
	static uint16_t x139 = 7493U;
	int8_t x140 = INT8_MIN;
	int32_t t27 = -50392;

	t27 = ((x137+(x138%x139))*x140);

	if (t27 != -32512) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x141 = -7717;
	int32_t x143 = INT32_MIN;
	static int8_t x144 = INT8_MIN;
	volatile uint64_t t28 = 1069372770243LLU;

	t28 = ((x141+(x142%x143))*x144);

	if (t28 != 18446743543493885184LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x145 = UINT64_MAX;
	static int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MAX;
	static uint64_t x148 = 1175274439LLU;
	volatile uint64_t t29 = 760480900192666LLU;

	t29 = ((x145+(x146%x147))*x148);

	if (t29 != 18446705561141460025LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x149 = 9;
	volatile uint16_t x150 = 15482U;
	int32_t x151 = INT32_MIN;
	int8_t x152 = INT8_MIN;

	t30 = ((x149+(x150%x151))*x152);

	if (t30 != -1982848) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = 0;
	uint16_t x154 = 2794U;
	volatile int16_t x155 = -21;
	int32_t x156 = INT32_MAX;
	int32_t t31 = INT32_MAX;

	t31 = ((x153+(x154%x155))*x156);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = 1;
	int64_t x158 = -1LL;
	volatile int64_t x160 = INT64_MIN;
	int64_t t32 = INT64_MIN;

	t32 = ((x157+(x158%x159))*x160);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MIN;
	uint32_t x163 = 14U;
	volatile uint64_t t33 = 910LLU;

	t33 = ((x161+(x162%x163))*x164);

	if (t33 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x170 = INT32_MAX;
	static int32_t x171 = 5123;
	static uint32_t t34 = 184033457U;

	t34 = ((x169+(x170%x171))*x172);

	if (t34 != 34497U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = 942811704570062LLU;
	int8_t x174 = -27;
	volatile uint8_t x176 = UINT8_MAX;
	static volatile uint64_t t35 = 8636985857LLU;

	t35 = ((x173+(x174%x175))*x176);

	if (t35 != 240416984665365810LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x178 = INT16_MIN;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MIN;
	volatile uint64_t t36 = 2293749746497152837LLU;

	t36 = ((x177+(x178%x179))*x180);

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x181 = UINT64_MAX;
	uint16_t x182 = 54U;
	int32_t x183 = -1;
	static int32_t x184 = -1;

	t37 = ((x181+(x182%x183))*x184);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = INT16_MIN;
	static uint64_t x186 = 2101098LLU;
	int8_t x187 = INT8_MAX;
	static int8_t x188 = -1;
	volatile uint64_t t38 = 54402536318LLU;

	t38 = ((x185+(x186%x187))*x188);

	if (t38 != 32758LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = -1;
	static int32_t x191 = INT32_MIN;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t39 = 52LLU;

	t39 = ((x189+(x190%x191))*x192);

	if (t39 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x193 = 6652U;
	uint64_t x194 = 83131547885LLU;
	int32_t x195 = -1;
	uint32_t x196 = 11980U;
	volatile uint64_t t40 = 115LLU;

	t40 = ((x193+(x194%x195))*x196);

	if (t40 != 995916023353260LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x209 = UINT64_MAX;
	volatile uint32_t x211 = 1590533022U;
	static int8_t x212 = INT8_MAX;
	volatile uint64_t t41 = 28567095624365586LLU;

	t41 = ((x209+(x210%x211))*x212);

	if (t41 != 141465458750LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x213 = UINT8_MAX;
	static uint64_t x214 = 5527097LLU;
	static int32_t x215 = -8;
	static uint8_t x216 = 0U;
	volatile uint64_t t42 = 40705LLU;

	t42 = ((x213+(x214%x215))*x216);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x217 = UINT64_MAX;
	static uint64_t x218 = 26338271757661491LLU;
	int8_t x220 = -1;
	volatile uint64_t t43 = 11219LLU;

	t43 = ((x217+(x218%x219))*x220);

	if (t43 != 18420405801951890126LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x222 = INT16_MIN;
	int64_t x223 = INT64_MAX;
	int16_t x224 = -1;
	int64_t t44 = 30107522941436952LL;

	t44 = ((x221+(x222%x223))*x224);

	if (t44 != 32753LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x225 = 5U;
	uint16_t x226 = 1U;
	static int64_t x227 = INT64_MIN;
	static int64_t t45 = 2385LL;

	t45 = ((x225+(x226%x227))*x228);

	if (t45 != -6LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x229 = 7LLU;
	volatile int32_t x230 = INT32_MIN;
	int16_t x232 = -1;
	volatile uint64_t t46 = 11159562989518403LLU;

	t46 = ((x229+(x230%x231))*x232);

	if (t46 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x233 = INT8_MIN;
	volatile int32_t x234 = -12;
	int8_t x236 = -31;
	volatile int32_t t47 = -5083;

	t47 = ((x233+(x234%x235))*x236);

	if (t47 != 4340) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x238 = -1;
	int16_t x239 = INT16_MAX;
	volatile uint16_t x240 = 1493U;

	t48 = ((x237+(x238%x239))*x240);

	if (t48 != -279191LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x241 = 233420036LLU;
	int16_t x242 = INT16_MIN;
	uint32_t x244 = 1023802U;
	volatile uint64_t t49 = 503157672620890110LLU;

	t49 = ((x241+(x242%x243))*x244);

	if (t49 != 238975899696872LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x245 = UINT32_MAX;
	int16_t x246 = INT16_MAX;
	int16_t x247 = 18;
	int8_t x248 = 1;
	uint32_t t50 = 49019U;

	t50 = ((x245+(x246%x247))*x248);

	if (t50 != 6U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x250 = 9U;
	int16_t x251 = -1;
	static uint8_t x252 = 40U;
	uint32_t t51 = 33473U;

	t51 = ((x249+(x250%x251))*x252);

	if (t51 != 23560U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x253 = INT8_MIN;
	uint32_t x254 = UINT32_MAX;
	int8_t x255 = INT8_MIN;
	uint8_t x256 = 0U;

	t52 = ((x253+(x254%x255))*x256);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x259 = -1;
	uint64_t t53 = 38769001230965217LLU;

	t53 = ((x257+(x258%x259))*x260);

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = 1530788462239186LL;
	volatile uint32_t x262 = 408U;
	int32_t x263 = 510635;
	int16_t x264 = -96;
	int64_t t54 = 20437790285420LL;

	t54 = ((x261+(x262%x263))*x264);

	if (t54 != -146955692375001024LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x265 = -7;
	int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MIN;

	t55 = ((x265+(x266%x267))*x268);

	if (t55 != 135LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x270 = INT32_MAX;
	int16_t x271 = INT16_MIN;
	static uint16_t x272 = 36U;
	int32_t t56 = 80;

	t56 = ((x269+(x270%x271))*x272);

	if (t56 != 1179576) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x277 = 931243714746162LLU;
	static uint32_t x278 = 0U;
	int32_t x279 = INT32_MAX;
	uint16_t x280 = 92U;
	static uint64_t t57 = 325635513738LLU;

	t57 = ((x277+(x278%x279))*x280);

	if (t57 != 85674421756646904LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x281 = 111498271;
	static volatile uint64_t x282 = UINT64_MAX;
	int8_t x283 = -1;
	static int16_t x284 = 0;
	volatile uint64_t t58 = 81371LLU;

	t58 = ((x281+(x282%x283))*x284);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x286 = INT64_MIN;
	int32_t x287 = INT32_MIN;
	int32_t x288 = 2;
	static int64_t t59 = -704936387LL;

	t59 = ((x285+(x286%x287))*x288);

	if (t59 != 10228LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x293 = -1;
	static int8_t x295 = -1;
	static int16_t x296 = -1016;
	static volatile int32_t t60 = -48494;

	t60 = ((x293+(x294%x295))*x296);

	if (t60 != 1016) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x297 = UINT8_MAX;
	uint32_t x298 = 120U;
	int32_t x299 = -1;
	static int32_t x300 = INT32_MIN;
	uint32_t t61 = 13891U;

	t61 = ((x297+(x298%x299))*x300);

	if (t61 != 2147483648U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = -1;
	int32_t x303 = INT32_MIN;
	int16_t x304 = INT16_MAX;
	int32_t t62 = -116377512;

	t62 = ((x301+(x302%x303))*x304);

	if (t62 != -4226943) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x305 = INT32_MIN;
	int16_t x306 = -1;
	uint64_t x307 = 49272LLU;
	volatile int8_t x308 = -5;
	volatile uint64_t t63 = 13154LLU;

	t63 = ((x305+(x306%x307))*x308);

	if (t63 != 10737206245LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x310 = INT64_MIN;
	int8_t x311 = 4;
	int64_t t64 = -18368161594LL;

	t64 = ((x309+(x310%x311))*x312);

	if (t64 != 111669149644LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x313 = 4LLU;
	int32_t x315 = 67888799;
	static uint8_t x316 = 8U;
	volatile uint64_t t65 = 7LLU;

	t65 = ((x313+(x314%x315))*x316);

	if (t65 != 24LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x317 = 255623034982736LLU;
	int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	int64_t x320 = INT64_MIN;
	uint64_t t66 = 25150811LLU;

	t66 = ((x317+(x318%x319))*x320);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x321 = 11;
	uint64_t x323 = 51341150700LLU;
	static uint32_t x324 = 426U;

	t67 = ((x321+(x322%x323))*x324);

	if (t67 != 4686LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x325 = INT8_MAX;
	int32_t x326 = 505;
	static uint64_t t68 = 4460068320837220LLU;

	t68 = ((x325+(x326%x327))*x328);

	if (t68 != 248579826937554376LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = -1LL;
	uint16_t x330 = 6392U;
	uint8_t x332 = UINT8_MAX;
	int64_t t69 = -5091390799259LL;

	t69 = ((x329+(x330%x331))*x332);

	if (t69 != -255LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x333 = INT64_MIN;
	volatile int8_t x334 = 0;
	int16_t x335 = INT16_MAX;
	uint64_t x336 = 881795261274951LLU;
	uint64_t t70 = 290LLU;

	t70 = ((x333+(x334%x335))*x336);

	if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = -1;
	static uint32_t x340 = UINT32_MAX;
	volatile int64_t t71 = 111808574883047370LL;

	t71 = ((x337+(x338%x339))*x340);

	if (t71 != -8589934590LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x341 = INT32_MAX;
	volatile uint64_t x342 = 6820007640898539LLU;
	int8_t x343 = 17;
	static uint64_t x344 = 2054272742326218LLU;

	t72 = ((x341+(x342%x343))*x344);

	if (t72 != 15177100997013798750LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = -19870;
	int32_t x346 = -4634;
	int8_t x347 = 2;
	uint8_t x348 = 5U;
	int32_t t73 = -11497;

	t73 = ((x345+(x346%x347))*x348);

	if (t73 != -99350) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x349 = UINT64_MAX;
	volatile uint64_t x350 = UINT64_MAX;
	static int16_t x351 = INT16_MAX;
	int16_t x352 = INT16_MAX;
	volatile uint64_t t74 = 3722316843470211700LLU;

	t74 = ((x349+(x350%x351))*x352);

	if (t74 != 458738LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x353 = 39659388136277LLU;
	int64_t x354 = 235780422LL;
	static int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MIN;

	t75 = ((x353+(x354%x355))*x356);

	if (t75 != 18441667672026231424LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x358 = -1;
	volatile int16_t x359 = INT16_MIN;
	int16_t x360 = -11861;
	volatile int32_t t76 = -3172964;

	t76 = ((x357+(x358%x359))*x360);

	if (t76 != -1103073) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x362 = INT32_MAX;
	int64_t x363 = INT64_MIN;
	uint8_t x364 = UINT8_MAX;
	volatile int64_t t77 = -5620347818048LL;

	t77 = ((x361+(x362%x363))*x364);

	if (t77 != 547608329220LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = INT16_MIN;
	volatile int8_t x370 = 0;
	uint64_t x371 = 260932411088543528LLU;
	uint16_t x372 = UINT16_MAX;
	uint64_t t78 = 548259194409738LLU;

	t78 = ((x369+(x370%x371))*x372);

	if (t78 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x373 = 380601822711LLU;
	static int64_t x374 = -17162706152LL;
	int32_t x375 = INT32_MAX;
	int64_t x376 = INT64_MIN;

	t79 = ((x373+(x374%x375))*x376);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x377 = 305;
	uint32_t x378 = 2U;
	uint32_t t80 = 993285U;

	t80 = ((x377+(x378%x379))*x380);

	if (t80 != 4294928000U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x381 = 3557U;
	int16_t x382 = INT16_MIN;
	int16_t x383 = 6;
	int32_t x384 = INT32_MAX;
	uint32_t t81 = 121U;

	t81 = ((x381+(x382%x383))*x384);

	if (t81 != 2147480093U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x385 = UINT64_MAX;
	uint8_t x386 = 0U;
	volatile uint64_t t82 = 19692330855870046LLU;

	t82 = ((x385+(x386%x387))*x388);

	if (t82 != 18446744073709502968LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x389 = INT32_MIN;
	volatile uint8_t x391 = 6U;
	uint8_t x392 = UINT8_MAX;
	int64_t t83 = 59747093760336LL;

	t83 = ((x389+(x390%x391))*x392);

	if (t83 != -547608330495LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x395 = -1;
	volatile uint8_t x396 = UINT8_MAX;

	t84 = ((x393+(x394%x395))*x396);

	if (t84 != -255LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x399 = INT32_MIN;
	uint64_t t85 = 7LLU;

	t85 = ((x397+(x398%x399))*x400);

	if (t85 != 18430635857204599308LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x401 = INT32_MAX;
	int64_t x402 = -1LL;
	volatile int32_t x403 = INT32_MIN;
	uint16_t x404 = UINT16_MAX;
	int64_t t86 = 186787522793LL;

	t86 = ((x401+(x402%x403))*x404);

	if (t86 != 140735340740610LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x405 = 2455617336614LL;
	int8_t x406 = INT8_MIN;
	int64_t x407 = -1LL;
	int64_t t87 = -20178857LL;

	t87 = ((x405+(x406%x407))*x408);

	if (t87 != 63846050751964LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x409 = 5299;
	static int16_t x410 = 487;
	uint16_t x411 = 421U;
	uint64_t x412 = UINT64_MAX;
	uint64_t t88 = 177914830178222LLU;

	t88 = ((x409+(x410%x411))*x412);

	if (t88 != 18446744073709546251LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = 23919;
	int64_t x414 = INT64_MIN;
	uint64_t t89 = 1952692760711LLU;

	t89 = ((x413+(x414%x415))*x416);

	if (t89 != 18446744073706489984LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = -1;
	uint32_t x422 = 34274297U;
	volatile int8_t x423 = -1;
	volatile int32_t x424 = INT32_MIN;

	t90 = ((x421+(x422%x423))*x424);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x426 = 2894700409LL;
	uint16_t x427 = UINT16_MAX;
	uint64_t x428 = 3769150944813737LLU;
	static uint64_t t91 = 1348722188379978LLU;

	t91 = ((x425+(x426%x427))*x428);

	if (t91 != 1027971482703959035LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x438 = 3U;
	volatile uint32_t x440 = UINT32_MAX;
	volatile uint32_t t92 = 2U;

	t92 = ((x437+(x438%x439))*x440);

	if (t92 != 190812127U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x445 = 757U;
	static int32_t x446 = -1;
	uint64_t x447 = UINT64_MAX;
	volatile int32_t x448 = INT32_MAX;
	volatile uint64_t t93 = 520532778LLU;

	t93 = ((x445+(x446%x447))*x448);

	if (t93 != 1625645120779LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x449 = 1;
	static int16_t x450 = 3;
	int64_t x451 = INT64_MAX;
	int16_t x452 = INT16_MAX;

	t94 = ((x449+(x450%x451))*x452);

	if (t94 != 131068LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x457 = INT32_MIN;
	volatile uint64_t x458 = UINT64_MAX;
	volatile int8_t x459 = INT8_MAX;
	int64_t x460 = INT64_MIN;
	uint64_t t95 = 126310178177452284LLU;

	t95 = ((x457+(x458%x459))*x460);

	if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x462 = 6001U;
	int32_t x463 = 420626809;
	static volatile int64_t x464 = -1989293LL;

	t96 = ((x461+(x462%x463))*x464);

	if (t96 != -11939736586LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x465 = INT8_MAX;
	volatile uint32_t x466 = UINT32_MAX;
	volatile uint64_t t97 = 255810847020889891LLU;

	t97 = ((x465+(x466%x467))*x468);

	if (t97 != 18446743523953721600LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x471 = UINT32_MAX;
	volatile uint32_t t98 = 0U;

	t98 = ((x469+(x470%x471))*x472);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x473 = INT32_MAX;
	uint32_t x474 = 535237U;
	static int8_t x475 = INT8_MAX;
	int8_t x476 = INT8_MAX;
	volatile uint32_t t99 = 923U;

	t99 = ((x473+(x474%x475))*x476);

	if (t99 != 2147491014U) { NG(); } else { ; }
	
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

