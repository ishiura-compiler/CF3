#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MIN;
int32_t x7 = INT32_MIN;
int64_t x8 = INT64_MIN;
static int32_t x10 = -25303;
static int64_t x12 = 1326762481LL;
volatile int8_t x14 = INT8_MIN;
volatile uint32_t x21 = 78U;
volatile uint64_t x22 = 1168588483586928LLU;
uint64_t t4 = 616414705166482LLU;
int16_t x30 = INT16_MAX;
static volatile int64_t t6 = 5503LL;
int32_t x47 = INT32_MIN;
static uint64_t t11 = 975279493LLU;
int16_t x74 = 12;
int64_t x75 = -4295110435661357LL;
int32_t x77 = INT32_MIN;
int16_t x79 = 54;
int8_t x80 = INT8_MIN;
int16_t x96 = -1;
int32_t t17 = 4033422;
int64_t x101 = INT64_MIN;
uint64_t x102 = 1136977609562455118LLU;
volatile uint32_t x106 = 1059996U;
int64_t x111 = -59866LL;
int32_t x113 = 3143;
int16_t x114 = 2738;
volatile int32_t t26 = -526790319;
uint16_t x138 = UINT16_MAX;
int16_t x144 = -1;
int16_t x146 = INT16_MIN;
uint32_t x153 = 1691590595U;
uint16_t x155 = 28754U;
static uint64_t x156 = UINT64_MAX;
static int8_t x158 = 21;
uint64_t x159 = UINT64_MAX;
int64_t t34 = -105838LL;
int64_t x170 = INT64_MIN;
int64_t x172 = INT64_MAX;
int16_t x174 = -1;
uint16_t x177 = UINT16_MAX;
uint64_t x179 = UINT64_MAX;
int8_t x188 = -11;
uint64_t t42 = 424465381LLU;
int32_t x209 = INT32_MAX;
uint8_t x218 = UINT8_MAX;
int16_t x224 = -1;
volatile int64_t t49 = -915882868536229701LL;
uint16_t x240 = UINT16_MAX;
int32_t x242 = -240;
int32_t x245 = -1;
int32_t x258 = INT32_MAX;
static volatile uint64_t x260 = UINT64_MAX;
uint16_t x262 = 12399U;
static volatile int16_t x270 = INT16_MAX;
volatile int8_t x277 = 1;
uint16_t x280 = UINT16_MAX;
volatile int32_t t61 = 95040492;
static int8_t x283 = -1;
int8_t x284 = -1;
int32_t x289 = INT32_MIN;
int16_t x291 = -8;
int16_t x296 = INT16_MIN;
volatile uint64_t t65 = 1874LLU;
volatile uint32_t x298 = UINT32_MAX;
int64_t x300 = -1LL;
int32_t x304 = -1;
volatile uint32_t t70 = 22U;
static int32_t x318 = INT32_MIN;
volatile int64_t x320 = 101045149256610640LL;
int8_t x326 = INT8_MIN;
volatile int64_t x330 = -1LL;
int64_t x332 = -1LL;
int32_t x333 = INT32_MIN;
int64_t t75 = -475202815LL;
volatile int64_t x344 = -164063214651079784LL;
int8_t x349 = 0;
static uint32_t x350 = UINT32_MAX;
int16_t x351 = -1;
static int64_t t79 = -197880674802LL;
static volatile uint64_t x358 = UINT64_MAX;
static volatile int16_t x359 = -1;
int32_t x361 = -1;
int16_t x363 = 3610;
static uint32_t t83 = 71U;
int8_t x376 = -62;
volatile uint64_t t84 = 839LLU;
uint32_t x384 = UINT32_MAX;
int32_t x389 = INT32_MIN;
int32_t x392 = INT32_MIN;
volatile int16_t x393 = INT16_MIN;
uint8_t x398 = 44U;
static uint16_t x399 = 1U;
static volatile int8_t x402 = INT8_MAX;
static int16_t x403 = 0;
static volatile int32_t t91 = 224824;
int16_t x405 = INT16_MIN;
int8_t x410 = -1;
volatile int16_t x416 = INT16_MAX;
volatile int64_t x418 = -1LL;
volatile int64_t x419 = INT64_MIN;
uint64_t x425 = 19924545829LLU;
static uint64_t t96 = 3970485448LLU;
int8_t x431 = -1;
int8_t x433 = INT8_MAX;
int32_t x434 = 52029698;
uint32_t x438 = 520167887U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint32_t x2 = 1642392723U;
	uint64_t x3 = 1058LLU;
	static volatile uint64_t t0 = 0LLU;

	t0 = (x1-(x2-(x3/x4)));

	if (t0 != 18446744072067158765LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int64_t x6 = -1LL;
	static volatile int64_t t1 = 27116368626562LL;

	t1 = (x5-(x6-(x7/x8)));

	if (t1 != 65536LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 48163579452413LL;
	int32_t x11 = -1;
	volatile int64_t t2 = -929LL;

	t2 = (x9-(x10-(x11/x12)));

	if (t2 != 48163579477716LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	uint16_t x15 = 22583U;
	uint32_t x16 = 1120133857U;
	volatile uint32_t t3 = 410U;

	t3 = (x13-(x14-(x15/x16)));

	if (t3 != 4294934656U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x23 = 2658686058514LLU;
	int64_t x24 = -2LL;

	t4 = (x21-(x22-(x23/x24)));

	if (t4 != 18445575485225964766LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MAX;
	static int64_t x31 = INT64_MAX;
	int8_t x32 = -26;
	static volatile int64_t t5 = 1894343030140065810LL;

	t5 = (x29-(x30-(x31/x32)));

	if (t5 != -354745078340568300LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = -1;
	int64_t x34 = 17813537167627065LL;
	int16_t x35 = -1606;
	int8_t x36 = -2;

	t6 = (x33-(x34-(x35/x36)));

	if (t6 != -17813537167626263LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = -7;
	int8_t x38 = -1;
	volatile uint64_t x39 = 105527959LLU;
	volatile int64_t x40 = -1LL;
	volatile uint64_t t7 = 453966269583661LLU;

	t7 = (x37-(x38-(x39/x40)));

	if (t7 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = 964LLU;
	int16_t x46 = INT16_MIN;
	int32_t x48 = -862;
	volatile uint64_t t8 = 1459232626657433514LLU;

	t8 = (x45-(x46-(x47/x48)));

	if (t8 != 2525012LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -3;
	int16_t x50 = INT16_MIN;
	uint8_t x51 = 3U;
	int16_t x52 = INT16_MIN;
	int32_t t9 = -5;

	t9 = (x49-(x50-(x51/x52)));

	if (t9 != 32765) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MIN;
	volatile uint16_t x54 = 158U;
	volatile int16_t x55 = -12;
	int32_t x56 = INT32_MAX;
	volatile int32_t t10 = -423;

	t10 = (x53-(x54-(x55/x56)));

	if (t10 != -32926) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = -1;
	uint8_t x58 = 1U;
	int64_t x59 = INT64_MIN;
	uint64_t x60 = 637088896LLU;

	t11 = (x57-(x58-(x59/x60)));

	if (t11 != 14477370573LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x73 = INT32_MIN;
	static uint8_t x76 = 2U;
	volatile int64_t t12 = 0LL;

	t12 = (x73-(x74-(x75/x76)));

	if (t12 != -2147557365314338LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x78 = INT16_MIN;
	volatile int32_t t13 = 255;

	t13 = (x77-(x78-(x79/x80)));

	if (t13 != -2147450880) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x81 = 94U;
	int64_t x82 = -1LL;
	uint32_t x83 = UINT32_MAX;
	static int8_t x84 = -1;
	volatile int64_t t14 = -206614698637298LL;

	t14 = (x81-(x82-(x83/x84)));

	if (t14 != 96LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = -42;
	static volatile int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MIN;
	uint32_t x88 = 553609445U;
	uint32_t t15 = 336103U;

	t15 = (x85-(x86-(x87/x88)));

	if (t15 != 32729U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = 25;
	int8_t x90 = INT8_MIN;
	uint32_t x91 = UINT32_MAX;
	volatile int32_t x92 = INT32_MIN;
	static uint32_t t16 = 894998U;

	t16 = (x89-(x90-(x91/x92)));

	if (t16 != 154U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = 18432950;
	int16_t x94 = -4;
	volatile int32_t x95 = -1;

	t17 = (x93-(x94-(x95/x96)));

	if (t17 != 18432955) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = 1LL;
	int64_t x98 = -1LL;
	static volatile int16_t x99 = INT16_MAX;
	static uint8_t x100 = UINT8_MAX;
	static int64_t t18 = 34LL;

	t18 = (x97-(x98-(x99/x100)));

	if (t18 != 130LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x103 = -1;
	int64_t x104 = -357114448086LL;
	volatile uint64_t t19 = 1516765155110733LLU;

	t19 = (x101-(x102-(x103/x104)));

	if (t19 != 8086394427292320690LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x105 = 6635207;
	volatile uint32_t x107 = 112022021U;
	int32_t x108 = INT32_MAX;
	uint32_t t20 = 242U;

	t20 = (x105-(x106-(x107/x108)));

	if (t20 != 5575211U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x109 = 0U;
	int32_t x110 = INT32_MAX;
	volatile int64_t x112 = -1284349743814583LL;
	int64_t t21 = 2280648497149660LL;

	t21 = (x109-(x110-(x111/x112)));

	if (t21 != -2147483647LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x115 = -1LL;
	int64_t x116 = -1LL;
	volatile int64_t t22 = 2996LL;

	t22 = (x113-(x114-(x115/x116)));

	if (t22 != 406LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x117 = INT8_MAX;
	uint32_t x118 = 28009861U;
	uint64_t x119 = 115836984LLU;
	uint32_t x120 = 4808496U;
	volatile uint64_t t23 = 353778630996LLU;

	t23 = (x117-(x118-(x119/x120)));

	if (t23 != 18446744073681541906LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x121 = 0;
	int8_t x122 = INT8_MAX;
	int8_t x123 = INT8_MIN;
	volatile uint64_t x124 = 8116795LLU;
	static uint64_t t24 = 1622910559927LLU;

	t24 = (x121-(x122-(x123/x124)));

	if (t24 != 2272663541789LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x125 = UINT32_MAX;
	int32_t x126 = 35;
	uint16_t x127 = 14228U;
	volatile int32_t x128 = 78;
	volatile uint32_t t25 = 12872654U;

	t25 = (x125-(x126-(x127/x128)));

	if (t25 != 146U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x129 = UINT16_MAX;
	int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MIN;
	int8_t x132 = -61;

	t26 = (x129-(x130-(x131/x132)));

	if (t26 != 98305) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = -109861579;
	static int32_t x134 = INT32_MAX;
	uint32_t x135 = UINT32_MAX;
	uint32_t x136 = 25U;
	static uint32_t t27 = 909U;

	t27 = (x133-(x134-(x135/x136)));

	if (t27 != 2209420761U) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x137 = -5455;
	static int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MAX;
	volatile int32_t t28 = 24;

	t28 = (x137-(x138-(x139/x140)));

	if (t28 != -70990) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x141 = 0U;
	uint32_t x142 = 424818393U;
	volatile int8_t x143 = INT8_MIN;
	uint32_t t29 = 7999264U;

	t29 = (x141-(x142-(x143/x144)));

	if (t29 != 3870149031U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x145 = INT64_MIN;
	int8_t x147 = 1;
	int32_t x148 = INT32_MIN;
	int64_t t30 = 34951043174LL;

	t30 = (x145-(x146-(x147/x148)));

	if (t30 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x149 = 1U;
	int32_t x150 = -949611892;
	static int32_t x151 = INT32_MIN;
	int64_t x152 = -1LL;
	int64_t t31 = -268912284745832LL;

	t31 = (x149-(x150-(x151/x152)));

	if (t31 != 3097095541LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x154 = 2U;
	static uint64_t t32 = 1041LLU;

	t32 = (x153-(x154-(x155/x156)));

	if (t32 != 1691590593LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = 952862826LL;
	int32_t x160 = -1;
	uint64_t t33 = 2119052051859124990LLU;

	t33 = (x157-(x158-(x159/x160)));

	if (t33 != 952862806LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = 0;
	volatile int64_t x162 = -1LL;
	static int64_t x163 = 5724280LL;
	uint32_t x164 = 1339068138U;

	t34 = (x161-(x162-(x163/x164)));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = INT64_MIN;
	int8_t x167 = -1;
	uint64_t x168 = 3LLU;
	volatile uint64_t t35 = 6LLU;

	t35 = (x165-(x166-(x167/x168)));

	if (t35 != 15372286725943809365LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = -1156;
	int8_t x171 = -1;
	volatile int64_t t36 = -208136LL;

	t36 = (x169-(x170-(x171/x172)));

	if (t36 != 9223372036854774652LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x173 = INT16_MIN;
	uint16_t x175 = 52U;
	static int16_t x176 = INT16_MIN;
	int32_t t37 = -67304696;

	t37 = (x173-(x174-(x175/x176)));

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x178 = -44;
	uint32_t x180 = UINT32_MAX;
	uint64_t t38 = 13LLU;

	t38 = (x177-(x178-(x179/x180)));

	if (t38 != 4295032876LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = INT16_MAX;
	static volatile uint8_t x182 = 1U;
	volatile int64_t x183 = 83698LL;
	uint32_t x184 = 4207965U;
	volatile int64_t t39 = -2704903964959LL;

	t39 = (x181-(x182-(x183/x184)));

	if (t39 != 32766LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x185 = 2U;
	int32_t x186 = INT32_MIN;
	int32_t x187 = INT32_MAX;
	volatile int32_t t40 = 1;

	t40 = (x185-(x186-(x187/x188)));

	if (t40 != 1952257864) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x193 = INT32_MIN;
	int16_t x194 = INT16_MIN;
	uint8_t x195 = 30U;
	uint16_t x196 = 1291U;
	volatile int32_t t41 = 519723;

	t41 = (x193-(x194-(x195/x196)));

	if (t41 != -2147450880) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x197 = UINT16_MAX;
	uint64_t x198 = UINT64_MAX;
	int64_t x199 = INT64_MIN;
	int64_t x200 = INT64_MIN;

	t42 = (x197-(x198-(x199/x200)));

	if (t42 != 65537LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = INT64_MIN;
	static int64_t x202 = INT64_MIN;
	static uint16_t x203 = UINT16_MAX;
	int64_t x204 = INT64_MIN;
	static int64_t t43 = -570447348538007371LL;

	t43 = (x201-(x202-(x203/x204)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	uint32_t x207 = 2067021U;
	volatile int32_t x208 = INT32_MIN;
	static uint32_t t44 = 831038U;

	t44 = (x205-(x206-(x207/x208)));

	if (t44 != 2147483520U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x210 = 30U;
	volatile int16_t x211 = INT16_MAX;
	int16_t x212 = INT16_MIN;
	uint32_t t45 = 767935835U;

	t45 = (x209-(x210-(x211/x212)));

	if (t45 != 2147483617U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = INT64_MAX;
	int16_t x214 = -1;
	int16_t x215 = INT16_MIN;
	int16_t x216 = INT16_MAX;
	volatile int64_t t46 = INT64_MAX;

	t46 = (x213-(x214-(x215/x216)));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x217 = 17U;
	static int16_t x219 = INT16_MIN;
	volatile int8_t x220 = -1;
	volatile int32_t t47 = -901578159;

	t47 = (x217-(x218-(x219/x220)));

	if (t47 != 32530) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x221 = INT8_MAX;
	int32_t x222 = INT32_MIN;
	volatile int16_t x223 = INT16_MAX;
	volatile int32_t t48 = 75;

	t48 = (x221-(x222-(x223/x224)));

	if (t48 != 2147451008) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = -1LL;
	uint8_t x226 = 57U;
	uint8_t x227 = UINT8_MAX;
	static volatile int16_t x228 = INT16_MIN;

	t49 = (x225-(x226-(x227/x228)));

	if (t49 != -58LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x229 = -1;
	static int64_t x230 = -1LL;
	volatile int16_t x231 = INT16_MIN;
	int64_t x232 = -1LL;
	int64_t t50 = -28267LL;

	t50 = (x229-(x230-(x231/x232)));

	if (t50 != 32768LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x233 = UINT32_MAX;
	int16_t x234 = -1;
	uint32_t x235 = 6180926U;
	static uint16_t x236 = UINT16_MAX;
	uint32_t t51 = 25088546U;

	t51 = (x233-(x234-(x235/x236)));

	if (t51 != 94U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x237 = -1;
	volatile int32_t x238 = INT32_MAX;
	int64_t x239 = 1LL;
	static int64_t t52 = -7LL;

	t52 = (x237-(x238-(x239/x240)));

	if (t52 != -2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x241 = UINT8_MAX;
	static int32_t x243 = INT32_MIN;
	static int64_t x244 = -332947223583LL;
	int64_t t53 = 257956312176603808LL;

	t53 = (x241-(x242-(x243/x244)));

	if (t53 != 495LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x246 = INT8_MAX;
	int8_t x247 = 3;
	int32_t x248 = -3801;
	volatile int32_t t54 = 1;

	t54 = (x245-(x246-(x247/x248)));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = INT16_MIN;
	int64_t x250 = -718231049618559LL;
	uint64_t x251 = 16120839LLU;
	int8_t x252 = INT8_MIN;
	volatile uint64_t t55 = 65476690732712021LLU;

	t55 = (x249-(x250-(x251/x252)));

	if (t55 != 718231049585791LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x253 = 106548921U;
	int8_t x254 = 3;
	int16_t x255 = -12959;
	int16_t x256 = INT16_MAX;
	uint32_t t56 = 28355U;

	t56 = (x253-(x254-(x255/x256)));

	if (t56 != 106548918U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = -926;
	uint64_t x259 = 23LLU;
	volatile uint64_t t57 = 942963706941LLU;

	t57 = (x257-(x258-(x259/x260)));

	if (t57 != 18446744071562067043LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x261 = INT8_MAX;
	volatile uint32_t x263 = 569745903U;
	volatile uint8_t x264 = 10U;
	static uint32_t t58 = 4U;

	t58 = (x261-(x262-(x263/x264)));

	if (t58 != 56962318U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x265 = 15U;
	volatile uint8_t x266 = 3U;
	int16_t x267 = -1;
	int16_t x268 = -2;
	int32_t t59 = -664382;

	t59 = (x265-(x266-(x267/x268)));

	if (t59 != 12) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MAX;
	static uint32_t x271 = 3318U;
	int64_t x272 = 336LL;
	volatile int64_t t60 = 6268697160191LL;

	t60 = (x269-(x270-(x271/x272)));

	if (t60 != 9LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x278 = 2;
	int32_t x279 = -166322328;

	t61 = (x277-(x278-(x279/x280)));

	if (t61 != -2538) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x281 = 31U;
	static uint64_t x282 = 49865975721155541LLU;
	volatile uint64_t t62 = 25011541847LLU;

	t62 = (x281-(x282-(x283/x284)));

	if (t62 != 18396878097988396107LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MAX;
	uint64_t x287 = 744044931020470LLU;
	static uint32_t x288 = 3U;
	volatile uint64_t t63 = 5LLU;

	t63 = (x285-(x286-(x287/x288)));

	if (t63 != 248012829523048LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x290 = 26;
	int64_t x292 = INT64_MIN;
	int64_t t64 = 132511141112502270LL;

	t64 = (x289-(x290-(x291/x292)));

	if (t64 != -2147483674LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x293 = -1;
	uint64_t x294 = 229131LLU;
	int32_t x295 = INT32_MIN;

	t65 = (x293-(x294-(x295/x296)));

	if (t65 != 18446744073709388020LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x297 = 1U;
	int32_t x299 = -461939484;
	int64_t t66 = -458933LL;

	t66 = (x297-(x298-(x299/x300)));

	if (t66 != -3833027810LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = 22316680LL;
	uint64_t x302 = UINT64_MAX;
	int64_t x303 = -1LL;
	uint64_t t67 = 455318342911LLU;

	t67 = (x301-(x302-(x303/x304)));

	if (t67 != 22316682LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x305 = 0;
	static volatile int8_t x306 = 7;
	uint64_t x307 = 312124901697331LLU;
	uint16_t x308 = 1U;
	uint64_t t68 = 24546907753878322LLU;

	t68 = (x305-(x306-(x307/x308)));

	if (t68 != 312124901697324LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = -1;
	static int16_t x310 = 2362;
	uint32_t x311 = UINT32_MAX;
	static uint8_t x312 = UINT8_MAX;
	volatile uint32_t t69 = 720U;

	t69 = (x309-(x310-(x311/x312)));

	if (t69 != 16840646U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x313 = 11175U;
	volatile uint8_t x314 = 39U;
	int32_t x315 = 1;
	int32_t x316 = INT32_MIN;

	t70 = (x313-(x314-(x315/x316)));

	if (t70 != 11136U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x317 = UINT32_MAX;
	static uint8_t x319 = 0U;
	volatile int64_t t71 = -1LL;

	t71 = (x317-(x318-(x319/x320)));

	if (t71 != 6442450943LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x321 = -1LL;
	int8_t x322 = INT8_MIN;
	static int32_t x323 = 150;
	volatile int64_t x324 = INT64_MAX;
	int64_t t72 = 64221403290783120LL;

	t72 = (x321-(x322-(x323/x324)));

	if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x325 = INT64_MIN;
	static int32_t x327 = INT32_MAX;
	volatile uint16_t x328 = UINT16_MAX;
	static int64_t t73 = -510095300699167857LL;

	t73 = (x325-(x326-(x327/x328)));

	if (t73 != -9223372036854742912LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x329 = UINT32_MAX;
	int32_t x331 = INT32_MIN;
	int64_t t74 = 58LL;

	t74 = (x329-(x330-(x331/x332)));

	if (t74 != 6442450944LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x334 = -1LL;
	volatile int64_t x335 = -1LL;
	uint8_t x336 = 47U;

	t75 = (x333-(x334-(x335/x336)));

	if (t75 != -2147483647LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x337 = -3;
	uint32_t x338 = 38354U;
	int16_t x339 = INT16_MAX;
	uint16_t x340 = 3U;
	uint32_t t76 = 133U;

	t76 = (x337-(x338-(x339/x340)));

	if (t76 != 4294939861U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = -2;
	uint16_t x342 = UINT16_MAX;
	uint64_t x343 = 129279136599076LLU;
	volatile uint64_t t77 = 307851LLU;

	t77 = (x341-(x342-(x343/x344)));

	if (t77 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = -1;
	int8_t x346 = INT8_MAX;
	int32_t x347 = INT32_MAX;
	int8_t x348 = INT8_MIN;
	static int32_t t78 = -2009;

	t78 = (x345-(x346-(x347/x348)));

	if (t78 != -16777343) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x352 = -869110672068LL;

	t79 = (x349-(x350-(x351/x352)));

	if (t79 != -4294967295LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x353 = 1034219978691009335LLU;
	uint32_t x354 = UINT32_MAX;
	uint16_t x355 = 30U;
	uint16_t x356 = UINT16_MAX;
	uint64_t t80 = 156730251778LLU;

	t80 = (x353-(x354-(x355/x356)));

	if (t80 != 1034219974396042040LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x357 = 18U;
	volatile uint64_t x360 = 64708092367317LLU;
	uint64_t t81 = 9020997991616654724LLU;

	t81 = (x357-(x358-(x359/x360)));

	if (t81 != 285095LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x362 = INT32_MAX;
	static uint64_t x364 = UINT64_MAX;
	uint64_t t82 = 0LLU;

	t82 = (x361-(x362-(x363/x364)));

	if (t82 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x369 = UINT16_MAX;
	static uint32_t x370 = UINT32_MAX;
	int8_t x371 = INT8_MAX;
	volatile int16_t x372 = INT16_MAX;

	t83 = (x369-(x370-(x371/x372)));

	if (t83 != 65536U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x373 = UINT32_MAX;
	int64_t x374 = INT64_MIN;
	uint64_t x375 = 5LLU;

	t84 = (x373-(x374-(x375/x376)));

	if (t84 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x377 = 2U;
	volatile int8_t x378 = INT8_MIN;
	static uint64_t x379 = 23128040885LLU;
	volatile uint16_t x380 = 143U;
	volatile uint64_t t85 = 8LLU;

	t85 = (x377-(x378-(x379/x380)));

	if (t85 != 161734681LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = INT16_MAX;
	static uint32_t x383 = 0U;
	volatile uint64_t t86 = 1LLU;

	t86 = (x381-(x382-(x383/x384)));

	if (t86 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x385 = INT8_MAX;
	int32_t x386 = 11;
	static int16_t x387 = 1;
	uint16_t x388 = 131U;
	volatile int32_t t87 = -766;

	t87 = (x385-(x386-(x387/x388)));

	if (t87 != 116) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x390 = 11LLU;
	volatile int16_t x391 = INT16_MIN;
	uint64_t t88 = 7LLU;

	t88 = (x389-(x390-(x391/x392)));

	if (t88 != 18446744071562067957LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x394 = UINT32_MAX;
	static int16_t x395 = -1;
	int8_t x396 = INT8_MAX;
	static volatile uint32_t t89 = 31211528U;

	t89 = (x393-(x394-(x395/x396)));

	if (t89 != 4294934529U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x397 = 1;
	int16_t x400 = INT16_MIN;
	int32_t t90 = 3642;

	t90 = (x397-(x398-(x399/x400)));

	if (t90 != -43) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x401 = -1;
	int32_t x404 = 221;

	t91 = (x401-(x402-(x403/x404)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x406 = INT32_MIN;
	int8_t x407 = 1;
	volatile uint8_t x408 = 124U;
	int32_t t92 = -1475;

	t92 = (x405-(x406-(x407/x408)));

	if (t92 != 2147450880) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x409 = INT16_MIN;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MIN;
	static volatile int32_t t93 = 5;

	t93 = (x409-(x410-(x411/x412)));

	if (t93 != -33278) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = -19;
	int8_t x414 = 24;
	int32_t x415 = INT32_MIN;
	int32_t t94 = -647;

	t94 = (x413-(x414-(x415/x416)));

	if (t94 != -65581) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x417 = 964209289173300LLU;
	int16_t x420 = 905;
	uint64_t t95 = 132029165614053697LLU;

	t95 = (x417-(x418-(x419/x420)));

	if (t95 != 18437516711687283176LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x426 = 1989U;
	int32_t x427 = 64171;
	uint64_t x428 = UINT64_MAX;

	t96 = (x425-(x426-(x427/x428)));

	if (t96 != 19924543840LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x429 = INT8_MIN;
	int16_t x430 = 0;
	uint32_t x432 = 274U;
	volatile uint32_t t97 = 1146111U;

	t97 = (x429-(x430-(x431/x432)));

	if (t97 != 15674935U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x435 = -1;
	uint64_t x436 = UINT64_MAX;
	uint64_t t98 = 31694LLU;

	t98 = (x433-(x434-(x435/x436)));

	if (t98 != 18446744073657522046LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x437 = 7U;
	uint8_t x439 = 2U;
	uint64_t x440 = UINT64_MAX;
	uint64_t t99 = 16832002623181LLU;

	t99 = (x437-(x438-(x439/x440)));

	if (t99 != 18446744073189383736LLU) { NG(); } else { ; }
	
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

