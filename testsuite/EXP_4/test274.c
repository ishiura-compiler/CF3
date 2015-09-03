#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MAX;
int16_t x15 = -3;
uint8_t x19 = 0U;
volatile int32_t t3 = -1004;
volatile int32_t t4 = 1039693;
static int16_t x25 = INT16_MIN;
volatile uint64_t x26 = 5555222331948839LLU;
static volatile int32_t x48 = INT32_MAX;
int32_t x49 = 4107;
uint64_t x55 = 30599294224122LLU;
uint16_t x58 = 0U;
volatile uint32_t x60 = UINT32_MAX;
uint8_t x62 = UINT8_MAX;
int16_t x64 = 86;
int64_t x69 = 118218LL;
uint32_t x70 = 37554111U;
volatile int64_t t18 = -1937462605588811978LL;
int64_t t19 = INT64_MIN;
static uint16_t x102 = 17U;
static volatile uint16_t x105 = 1U;
int64_t x109 = INT64_MIN;
int32_t x110 = -1;
int64_t t22 = -2114199425LL;
int16_t x118 = INT16_MIN;
int8_t x119 = -6;
int32_t x125 = INT32_MIN;
uint16_t x126 = 1890U;
int64_t x153 = 295LL;
uint16_t x154 = 527U;
volatile int64_t x155 = -387004097LL;
static int8_t x160 = 5;
int8_t x166 = INT8_MIN;
int32_t t32 = 5879808;
static int64_t x169 = INT64_MIN;
uint32_t x174 = UINT32_MAX;
int32_t x175 = -6;
int64_t x178 = INT64_MAX;
static int64_t x179 = -885LL;
int16_t x181 = 3690;
int8_t x183 = -52;
static uint8_t x185 = 7U;
volatile uint64_t x187 = 46LLU;
volatile uint32_t x188 = UINT32_MAX;
int16_t x191 = -1;
int16_t x192 = -405;
int32_t x198 = INT32_MIN;
volatile int16_t x201 = INT16_MIN;
int32_t t41 = 27684;
uint32_t x210 = 501688373U;
int8_t x214 = INT8_MIN;
static int64_t x223 = 7356934320LL;
static volatile int32_t t45 = 37206762;
volatile int8_t x225 = INT8_MIN;
int64_t x226 = -2334LL;
uint32_t x227 = 0U;
int32_t t46 = 1048182;
volatile int32_t x236 = -359427;
int64_t x243 = -1LL;
uint32_t x244 = 0U;
int64_t t49 = -58216096362225LL;
int64_t x245 = -1LL;
volatile uint32_t x250 = UINT32_MAX;
static uint16_t x256 = UINT16_MAX;
int64_t x258 = -1LL;
uint64_t x264 = 16621514718880LLU;
int64_t x267 = 2513LL;
int32_t x269 = INT32_MIN;
static uint64_t x278 = 2770623183325497131LLU;
uint16_t x299 = UINT16_MAX;
uint32_t x304 = 31U;
int32_t x307 = INT32_MIN;
int16_t x315 = 2;
volatile int32_t t67 = 272;
int16_t x331 = -3;
volatile int32_t t68 = -247025;
int8_t x335 = -1;
static int16_t x338 = INT16_MIN;
volatile int16_t x340 = INT16_MIN;
int8_t x344 = INT8_MAX;
static int8_t x351 = INT8_MIN;
int32_t x352 = -15561;
volatile int8_t x355 = INT8_MAX;
volatile uint8_t x360 = 7U;
int32_t t76 = -135895239;
uint64_t x388 = UINT64_MAX;
volatile int64_t t77 = 4581948715062454246LL;
int16_t x390 = 5;
static volatile uint64_t x391 = UINT64_MAX;
int32_t x392 = 18595909;
int64_t x404 = INT64_MAX;
int8_t x407 = 0;
static uint32_t x413 = 2075624U;
int16_t x414 = -13;
volatile uint8_t x417 = 35U;
volatile uint64_t x418 = 5689130828LLU;
uint64_t x421 = 2843190419745426843LLU;
uint32_t x422 = 2U;
uint64_t t86 = 488LLU;
int32_t x429 = -1;
volatile int32_t t88 = -8204453;
int8_t x433 = 1;
uint64_t x441 = UINT64_MAX;
int16_t x445 = INT16_MIN;
int16_t x448 = 2138;
volatile int32_t t92 = -149884280;
int32_t x453 = INT32_MIN;
int8_t x455 = INT8_MAX;
int64_t x457 = -1LL;
volatile int64_t t95 = -5028927LL;
static int32_t x466 = 4;
int64_t t98 = 108640235459930LL;
int8_t x477 = INT8_MIN;
int8_t x480 = -1;


void f0(void) {
	int64_t x1 = 829299391129709060LL;
	int64_t x2 = 7LL;
	uint32_t x3 = UINT32_MAX;
	volatile int64_t t0 = 1348564914062778519LL;

	t0 = (x1+(x2<(x3-x4)));

	if (t0 != 829299391129709061LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 50778U;
	static int16_t x6 = INT16_MAX;
	int16_t x7 = INT16_MIN;
	volatile uint64_t x8 = 14032256254473666LLU;
	volatile uint32_t t1 = 362207515U;

	t1 = (x5+(x6<(x7-x8)));

	if (t1 != 50779U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 1U;
	int64_t x14 = INT64_MIN;
	uint8_t x16 = 8U;
	volatile int32_t t2 = 1;

	t2 = (x13+(x14<(x15-x16)));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	static uint64_t x18 = UINT64_MAX;
	int16_t x20 = INT16_MIN;

	t3 = (x17+(x18<(x19-x20)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 223U;
	int16_t x22 = 1354;
	static int64_t x23 = INT64_MAX;
	int8_t x24 = INT8_MAX;

	t4 = (x21+(x22<(x23-x24)));

	if (t4 != 224) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x27 = UINT16_MAX;
	int8_t x28 = -1;
	static volatile int32_t t5 = -1500050;

	t5 = (x25+(x26<(x27-x28)));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x37 = -1;
	int32_t x38 = 212690;
	int8_t x39 = INT8_MIN;
	volatile int64_t x40 = -1665915710767838408LL;
	int32_t t6 = -14;

	t6 = (x37+(x38<(x39-x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = -57;
	volatile int32_t x46 = -267;
	static int8_t x47 = -1;
	int32_t t7 = -75240112;

	t7 = (x45+(x46<(x47-x48)));

	if (t7 != -57) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x50 = 298U;
	int8_t x51 = -1;
	volatile int64_t x52 = INT64_MIN;
	volatile int32_t t8 = 45;

	t8 = (x49+(x50<(x51-x52)));

	if (t8 != 4108) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x53 = -1;
	uint16_t x54 = UINT16_MAX;
	volatile int8_t x56 = INT8_MAX;
	volatile int32_t t9 = -404;

	t9 = (x53+(x54<(x55-x56)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x57 = -38LL;
	uint64_t x59 = 1257438LLU;
	int64_t t10 = 95453LL;

	t10 = (x57+(x58<(x59-x60)));

	if (t10 != -37LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x61 = 6053027701196466LL;
	int8_t x63 = 0;
	int64_t t11 = -214682406LL;

	t11 = (x61+(x62<(x63-x64)));

	if (t11 != 6053027701196466LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x65 = 1LLU;
	int16_t x66 = INT16_MIN;
	int16_t x67 = -1;
	volatile int32_t x68 = INT32_MIN;
	uint64_t t12 = 29311438389LLU;

	t12 = (x65+(x66<(x67-x68)));

	if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x71 = -198715;
	int64_t x72 = INT64_MIN;
	volatile int64_t t13 = 1418373764889102LL;

	t13 = (x69+(x70<(x71-x72)));

	if (t13 != 118219LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MIN;
	static int64_t x74 = -197238658394522LL;
	volatile int32_t x75 = -1;
	uint16_t x76 = 12U;
	int32_t t14 = 113002;

	t14 = (x73+(x74<(x75-x76)));

	if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x77 = 165830292U;
	uint64_t x78 = 212896943193LLU;
	volatile uint64_t x79 = UINT64_MAX;
	static int64_t x80 = INT64_MIN;
	static volatile uint32_t t15 = 24020U;

	t15 = (x77+(x78<(x79-x80)));

	if (t15 != 165830293U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x85 = INT64_MIN;
	int64_t x86 = -1LL;
	volatile int64_t x87 = -1LL;
	uint32_t x88 = 323873527U;
	static volatile int64_t t16 = INT64_MIN;

	t16 = (x85+(x86<(x87-x88)));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = -7712113381552132LL;
	uint64_t x90 = 21670LLU;
	static int16_t x91 = INT16_MIN;
	int8_t x92 = -1;
	int64_t t17 = 6009LL;

	t17 = (x89+(x90<(x91-x92)));

	if (t17 != -7712113381552131LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x93 = -1LL;
	int16_t x94 = INT16_MIN;
	uint16_t x95 = 523U;
	int32_t x96 = 311409083;

	t18 = (x93+(x94<(x95-x96)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = INT64_MIN;
	uint64_t x98 = 11008590147316LLU;
	volatile uint8_t x99 = 1U;
	int8_t x100 = INT8_MIN;

	t19 = (x97+(x98<(x99-x100)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MIN;
	static int16_t x103 = INT16_MIN;
	int8_t x104 = -1;
	volatile int32_t t20 = 38;

	t20 = (x101+(x102<(x103-x104)));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x106 = -1207126416586LL;
	int64_t x107 = INT64_MIN;
	static uint64_t x108 = 117914260873366154LLU;
	volatile int32_t t21 = 10;

	t21 = (x105+(x106<(x107-x108)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x111 = -1;
	volatile int8_t x112 = -1;

	t22 = (x109+(x110<(x111-x112)));

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = INT32_MAX;
	static int32_t x114 = INT32_MAX;
	int8_t x115 = INT8_MIN;
	int64_t x116 = -12LL;
	volatile int32_t t23 = INT32_MAX;

	t23 = (x113+(x114<(x115-x116)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x117 = 1U;
	int32_t x120 = INT32_MIN;
	static volatile int32_t t24 = -233210455;

	t24 = (x117+(x118<(x119-x120)));

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x127 = INT16_MAX;
	int32_t x128 = INT32_MAX;
	volatile int32_t t25 = INT32_MIN;

	t25 = (x125+(x126<(x127-x128)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = 4591561301LL;
	int64_t x134 = -1LL;
	int64_t x135 = 192718LL;
	uint8_t x136 = 11U;
	volatile int64_t t26 = -211061941LL;

	t26 = (x133+(x134<(x135-x136)));

	if (t26 != 4591561302LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x141 = 419U;
	volatile uint16_t x142 = UINT16_MAX;
	volatile uint32_t x143 = 74U;
	uint16_t x144 = 14U;
	uint32_t t27 = 0U;

	t27 = (x141+(x142<(x143-x144)));

	if (t27 != 419U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = -1;
	int8_t x146 = 36;
	int8_t x147 = INT8_MAX;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t28 = -567780;

	t28 = (x145+(x146<(x147-x148)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = 517894;
	volatile uint8_t x151 = UINT8_MAX;
	int32_t x152 = 0;
	int32_t t29 = -915024;

	t29 = (x149+(x150<(x151-x152)));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x156 = -36LL;
	int64_t t30 = -15832429198448LL;

	t30 = (x153+(x154<(x155-x156)));

	if (t30 != 295LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x157 = -221;
	volatile uint16_t x158 = 126U;
	int32_t x159 = -1;
	volatile int32_t t31 = 36939;

	t31 = (x157+(x158<(x159-x160)));

	if (t31 != -221) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x165 = UINT16_MAX;
	uint8_t x167 = UINT8_MAX;
	uint8_t x168 = 3U;

	t32 = (x165+(x166<(x167-x168)));

	if (t32 != 65536) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x170 = INT16_MIN;
	uint32_t x171 = 95U;
	uint64_t x172 = UINT64_MAX;
	static volatile int64_t t33 = INT64_MIN;

	t33 = (x169+(x170<(x171-x172)));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x173 = 0U;
	int32_t x176 = INT32_MIN;
	volatile int32_t t34 = -7010880;

	t34 = (x173+(x174<(x175-x176)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = INT32_MAX;
	static volatile int32_t x180 = -1;
	int32_t t35 = INT32_MAX;

	t35 = (x177+(x178<(x179-x180)));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x182 = INT64_MAX;
	uint32_t x184 = 223806631U;
	int32_t t36 = -777240970;

	t36 = (x181+(x182<(x183-x184)));

	if (t36 != 3690) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x186 = 95U;
	volatile int32_t t37 = -11564664;

	t37 = (x185+(x186<(x187-x188)));

	if (t37 != 8) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x189 = -27;
	int16_t x190 = INT16_MIN;
	static int32_t t38 = 2320;

	t38 = (x189+(x190<(x191-x192)));

	if (t38 != -26) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x193 = 876768091U;
	volatile uint16_t x194 = UINT16_MAX;
	static int64_t x195 = INT64_MAX;
	uint16_t x196 = 7U;
	uint32_t t39 = 22472U;

	t39 = (x193+(x194<(x195-x196)));

	if (t39 != 876768092U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x197 = 59U;
	static int32_t x199 = -224546209;
	int8_t x200 = INT8_MAX;
	int32_t t40 = -230;

	t40 = (x197+(x198<(x199-x200)));

	if (t40 != 60) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x202 = -1;
	int64_t x203 = -457921137628421LL;
	volatile int8_t x204 = -1;

	t41 = (x201+(x202<(x203-x204)));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x209 = -1;
	volatile uint32_t x211 = 0U;
	static int64_t x212 = INT64_MAX;
	static volatile int32_t t42 = -21;

	t42 = (x209+(x210<(x211-x212)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x213 = 8781505;
	int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;
	int32_t t43 = 10;

	t43 = (x213+(x214<(x215-x216)));

	if (t43 != 8781506) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x217 = 17583556766367LLU;
	int8_t x218 = 1;
	int64_t x219 = INT64_MIN;
	int64_t x220 = -142002146514403108LL;
	static volatile uint64_t t44 = 640651168385LLU;

	t44 = (x217+(x218<(x219-x220)));

	if (t44 != 17583556766367LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x221 = 3U;
	int16_t x222 = INT16_MIN;
	int16_t x224 = INT16_MAX;

	t45 = (x221+(x222<(x223-x224)));

	if (t45 != 4) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x228 = -6984623867LL;

	t46 = (x225+(x226<(x227-x228)));

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x229 = INT64_MIN;
	uint64_t x230 = 14LLU;
	int32_t x231 = 0;
	static int16_t x232 = 649;
	volatile int64_t t47 = -6LL;

	t47 = (x229+(x230<(x231-x232)));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x234 = INT32_MIN;
	int8_t x235 = -1;
	uint32_t t48 = 1274282U;

	t48 = (x233+(x234<(x235-x236)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MIN;

	t49 = (x241+(x242<(x243-x244)));

	if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x246 = INT64_MIN;
	int64_t x247 = 0LL;
	int16_t x248 = -1;
	int64_t t50 = -18242329098LL;

	t50 = (x245+(x246<(x247-x248)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x249 = UINT8_MAX;
	int16_t x251 = INT16_MAX;
	int64_t x252 = INT64_MAX;
	static int32_t t51 = -1997397;

	t51 = (x249+(x250<(x251-x252)));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x253 = 0;
	int32_t x254 = 60;
	int8_t x255 = -1;
	volatile int32_t t52 = 4977846;

	t52 = (x253+(x254<(x255-x256)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x257 = 39U;
	int8_t x259 = INT8_MIN;
	volatile int8_t x260 = 1;
	volatile int32_t t53 = 1032048;

	t53 = (x257+(x258<(x259-x260)));

	if (t53 != 39) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x261 = INT64_MIN;
	volatile uint16_t x262 = UINT16_MAX;
	uint8_t x263 = 30U;
	volatile int64_t t54 = 7504738LL;

	t54 = (x261+(x262<(x263-x264)));

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x265 = UINT16_MAX;
	volatile int16_t x266 = -6;
	int8_t x268 = -39;
	static int32_t t55 = 1;

	t55 = (x265+(x266<(x267-x268)));

	if (t55 != 65536) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x270 = 853489630451133LLU;
	uint16_t x271 = UINT16_MAX;
	volatile int16_t x272 = 738;
	int32_t t56 = INT32_MIN;

	t56 = (x269+(x270<(x271-x272)));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x273 = 4327LLU;
	int8_t x274 = -1;
	uint32_t x275 = UINT32_MAX;
	int16_t x276 = 1110;
	uint64_t t57 = 6007030214LLU;

	t57 = (x273+(x274<(x275-x276)));

	if (t57 != 4327LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = INT64_MIN;
	int8_t x279 = INT8_MIN;
	static int16_t x280 = 0;
	static volatile int64_t t58 = 123443438LL;

	t58 = (x277+(x278<(x279-x280)));

	if (t58 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x281 = 1348651739359LLU;
	volatile int32_t x282 = INT32_MIN;
	int8_t x283 = INT8_MIN;
	int8_t x284 = INT8_MAX;
	volatile uint64_t t59 = 74LLU;

	t59 = (x281+(x282<(x283-x284)));

	if (t59 != 1348651739360LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x285 = INT8_MAX;
	uint64_t x286 = 231190041933319LLU;
	int16_t x287 = -1;
	int32_t x288 = 2908293;
	volatile int32_t t60 = 712707;

	t60 = (x285+(x286<(x287-x288)));

	if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x289 = -1;
	volatile int32_t x290 = -1;
	volatile int8_t x291 = -1;
	int32_t x292 = 20294655;
	int32_t t61 = 208370929;

	t61 = (x289+(x290<(x291-x292)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x297 = INT32_MIN;
	static volatile int32_t x298 = INT32_MIN;
	int16_t x300 = INT16_MIN;
	int32_t t62 = -19645944;

	t62 = (x297+(x298<(x299-x300)));

	if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x301 = -39;
	int64_t x302 = -775241313557LL;
	int32_t x303 = 1792364;
	volatile int32_t t63 = 0;

	t63 = (x301+(x302<(x303-x304)));

	if (t63 != -38) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x305 = 556;
	int8_t x306 = INT8_MAX;
	int64_t x308 = -1LL;
	volatile int32_t t64 = 7800;

	t64 = (x305+(x306<(x307-x308)));

	if (t64 != 556) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x309 = 17;
	uint16_t x310 = 12634U;
	int64_t x311 = -1LL;
	uint32_t x312 = 248094U;
	int32_t t65 = -1;

	t65 = (x309+(x310<(x311-x312)));

	if (t65 != 17) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x313 = 31U;
	int8_t x314 = INT8_MAX;
	int8_t x316 = -23;
	int32_t t66 = -123693;

	t66 = (x313+(x314<(x315-x316)));

	if (t66 != 31) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x317 = -11;
	static int64_t x318 = INT64_MIN;
	int32_t x319 = -64;
	static int16_t x320 = INT16_MIN;

	t67 = (x317+(x318<(x319-x320)));

	if (t67 != -10) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x329 = INT16_MIN;
	int64_t x330 = 272890812517LL;
	static volatile int16_t x332 = -1;

	t68 = (x329+(x330<(x331-x332)));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x333 = 1440;
	int8_t x334 = 4;
	static uint16_t x336 = 465U;
	volatile int32_t t69 = -1716885;

	t69 = (x333+(x334<(x335-x336)));

	if (t69 != 1440) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x337 = -6132812;
	uint64_t x339 = UINT64_MAX;
	volatile int32_t t70 = -598982;

	t70 = (x337+(x338<(x339-x340)));

	if (t70 != -6132812) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x341 = -16LL;
	int8_t x342 = -1;
	int8_t x343 = -27;
	int64_t t71 = 2175243319027459LL;

	t71 = (x341+(x342<(x343-x344)));

	if (t71 != -16LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x349 = INT64_MIN;
	static int64_t x350 = -122550341838LL;
	volatile int64_t t72 = -19717462907346LL;

	t72 = (x349+(x350<(x351-x352)));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x353 = INT64_MIN;
	volatile int8_t x354 = -1;
	int8_t x356 = 7;
	int64_t t73 = 18LL;

	t73 = (x353+(x354<(x355-x356)));

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x357 = 328012LLU;
	int16_t x358 = -11845;
	uint8_t x359 = 2U;
	uint64_t t74 = 210379051309LLU;

	t74 = (x357+(x358<(x359-x360)));

	if (t74 != 328013LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x365 = INT64_MIN;
	uint32_t x366 = 0U;
	uint32_t x367 = 449145374U;
	int8_t x368 = 1;
	int64_t t75 = -1193374789LL;

	t75 = (x365+(x366<(x367-x368)));

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x369 = -4;
	uint64_t x370 = 2320946727849668161LLU;
	int32_t x371 = -1;
	int32_t x372 = 52;

	t76 = (x369+(x370<(x371-x372)));

	if (t76 != -3) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x385 = INT64_MIN;
	volatile uint64_t x386 = 61834602LLU;
	static int8_t x387 = INT8_MIN;

	t77 = (x385+(x386<(x387-x388)));

	if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x389 = -1;
	int32_t t78 = 239;

	t78 = (x389+(x390<(x391-x392)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x393 = 2;
	volatile int32_t x394 = INT32_MIN;
	int8_t x395 = -1;
	int64_t x396 = INT64_MIN;
	static volatile int32_t t79 = 441954;

	t79 = (x393+(x394<(x395-x396)));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x397 = UINT32_MAX;
	int32_t x398 = 1143358;
	int8_t x399 = INT8_MIN;
	uint64_t x400 = 1196471458008349LLU;
	static volatile uint32_t t80 = 432762422U;

	t80 = (x397+(x398<(x399-x400)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x401 = 62930310U;
	int64_t x402 = 67988672050LL;
	int16_t x403 = INT16_MAX;
	static uint32_t t81 = 1U;

	t81 = (x401+(x402<(x403-x404)));

	if (t81 != 62930310U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x405 = INT16_MAX;
	static uint32_t x406 = 1571476U;
	int8_t x408 = INT8_MIN;
	static int32_t t82 = -978;

	t82 = (x405+(x406<(x407-x408)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x409 = 5U;
	int8_t x410 = INT8_MIN;
	volatile int32_t x411 = -1;
	int8_t x412 = -31;
	volatile int32_t t83 = 946;

	t83 = (x409+(x410<(x411-x412)));

	if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x415 = UINT64_MAX;
	int8_t x416 = 9;
	static volatile uint32_t t84 = 4U;

	t84 = (x413+(x414<(x415-x416)));

	if (t84 != 2075625U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x419 = -1LL;
	int8_t x420 = INT8_MIN;
	static int32_t t85 = -1;

	t85 = (x417+(x418<(x419-x420)));

	if (t85 != 35) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x423 = UINT32_MAX;
	int64_t x424 = 32243608LL;

	t86 = (x421+(x422<(x423-x424)));

	if (t86 != 2843190419745426844LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x425 = -3;
	int64_t x426 = -1LL;
	int64_t x427 = -7501362LL;
	int64_t x428 = 119541686888304LL;
	volatile int32_t t87 = -7789931;

	t87 = (x425+(x426<(x427-x428)));

	if (t87 != -3) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x430 = INT16_MIN;
	static volatile uint32_t x431 = 8386110U;
	static uint32_t x432 = 193603U;

	t88 = (x429+(x430<(x431-x432)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x434 = 27321797761909LLU;
	volatile int64_t x435 = 91248596379LL;
	int64_t x436 = 1979323582632718869LL;
	volatile int32_t t89 = -15195;

	t89 = (x433+(x434<(x435-x436)));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x437 = INT16_MIN;
	static uint64_t x438 = 10385283446LLU;
	int8_t x439 = -1;
	static int64_t x440 = 1751202143226209LL;
	int32_t t90 = 426738984;

	t90 = (x437+(x438<(x439-x440)));

	if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x442 = -6;
	uint16_t x443 = 5U;
	uint32_t x444 = 114217U;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (x441+(x442<(x443-x444)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x446 = INT8_MIN;
	int16_t x447 = INT16_MIN;

	t92 = (x445+(x446<(x447-x448)));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x449 = INT64_MIN;
	static int32_t x450 = INT32_MAX;
	static int64_t x451 = INT64_MAX;
	int8_t x452 = INT8_MAX;
	static volatile int64_t t93 = 57213143595LL;

	t93 = (x449+(x450<(x451-x452)));

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x454 = 606276577U;
	static uint32_t x456 = UINT32_MAX;
	volatile int32_t t94 = INT32_MIN;

	t94 = (x453+(x454<(x455-x456)));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x458 = INT8_MAX;
	int8_t x459 = 7;
	int64_t x460 = -1LL;

	t95 = (x457+(x458<(x459-x460)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x465 = INT64_MIN;
	int16_t x467 = INT16_MAX;
	int32_t x468 = -27;
	static volatile int64_t t96 = 488934414252311799LL;

	t96 = (x465+(x466<(x467-x468)));

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x469 = 2;
	int8_t x470 = 0;
	int16_t x471 = 1283;
	int32_t x472 = INT32_MAX;
	static volatile int32_t t97 = 1;

	t97 = (x469+(x470<(x471-x472)));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x473 = -18377327940405LL;
	static volatile int16_t x474 = INT16_MIN;
	volatile int8_t x475 = -1;
	int64_t x476 = 3725027332550208LL;

	t98 = (x473+(x474<(x475-x476)));

	if (t98 != -18377327940405LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x478 = UINT16_MAX;
	uint32_t x479 = 116U;
	int32_t t99 = -459;

	t99 = (x477+(x478<(x479-x480)));

	if (t99 != -128) { NG(); } else { ; }
	
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

