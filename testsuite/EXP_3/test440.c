#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x12 = INT32_MAX;
uint16_t x23 = 17U;
uint8_t x28 = 13U;
int32_t x29 = INT32_MIN;
static volatile int32_t t3 = -6;
int16_t x45 = INT16_MIN;
int32_t x48 = -1;
volatile uint16_t x50 = 560U;
static int64_t t11 = 1389594779367678808LL;
int64_t x73 = 52912232032913706LL;
static volatile int64_t x75 = 4780576828080LL;
volatile int8_t x91 = -1;
int32_t t14 = 0;
volatile uint64_t x93 = 25255037LLU;
static int32_t x95 = -742;
uint8_t x121 = UINT8_MAX;
volatile uint32_t t17 = 0U;
volatile int8_t x131 = 34;
uint64_t x132 = 2186077LLU;
int64_t x159 = INT64_MIN;
uint64_t x160 = 28065LLU;
static uint64_t t24 = 36LLU;
volatile int64_t x163 = 59LL;
volatile int64_t t25 = 12201323054288LL;
int32_t t26 = 58;
uint64_t t27 = 9743341220LLU;
uint8_t x180 = 1U;
static volatile int64_t x181 = -498804908590906420LL;
uint32_t x199 = UINT32_MAX;
static int16_t x202 = INT16_MAX;
uint64_t x211 = 861326951621LLU;
uint64_t t35 = 0LLU;
volatile uint16_t x216 = UINT16_MAX;
uint32_t x231 = UINT32_MAX;
volatile int64_t x241 = 1LL;
int64_t x245 = -1LL;
static uint8_t x246 = 70U;
static volatile uint64_t t44 = 297860481293170688LLU;
uint64_t t45 = 478322853287LLU;
volatile int32_t t46 = -1789966;
int16_t x265 = INT16_MAX;
volatile uint64_t x268 = 50LLU;
static uint64_t t47 = 1291474274672429802LLU;
int8_t x271 = INT8_MIN;
int16_t x274 = INT16_MAX;
int16_t x279 = INT16_MIN;
volatile int32_t t50 = 1;
int64_t x283 = -1LL;
volatile int64_t x286 = -4276372307551956685LL;
uint8_t x287 = 14U;
int8_t x288 = INT8_MIN;
volatile uint32_t x301 = 1935411214U;
int64_t x304 = -898LL;
uint32_t x305 = 0U;
static int64_t x306 = INT64_MIN;
int16_t x309 = INT16_MIN;
int16_t x311 = INT16_MIN;
int16_t x322 = INT16_MIN;
uint32_t t59 = 3U;
static uint8_t x350 = 31U;
static int8_t x354 = INT8_MAX;
int32_t x361 = INT32_MAX;
int64_t x376 = 612LL;
static volatile int64_t t65 = -3LL;
static volatile uint32_t x378 = 416U;
uint64_t x380 = 3122787282LLU;
uint16_t x381 = 2373U;
int16_t x395 = -1;
volatile uint8_t x397 = 1U;
static int8_t x398 = 1;
int32_t x399 = -1;
uint64_t x400 = 130750LLU;
int8_t x404 = INT8_MIN;
int32_t x411 = INT32_MIN;
uint64_t x412 = 3LLU;
uint64_t t73 = 5796654913LLU;
static volatile uint64_t x425 = UINT64_MAX;
uint32_t x428 = UINT32_MAX;
volatile uint32_t t76 = 2859846U;
uint64_t x429 = 373917010675LLU;
uint64_t x442 = UINT64_MAX;
uint64_t x444 = 1184907665804LLU;
uint64_t x458 = 50103599363LLU;
volatile uint32_t x459 = 736793U;
volatile int8_t x460 = 4;
int16_t x471 = -1;
static volatile int32_t x472 = 283;
int16_t x481 = 5058;
volatile uint64_t t89 = 89725091LLU;
volatile uint64_t x502 = 544057392967580LLU;
int16_t x505 = 2720;
volatile int64_t x518 = INT64_MAX;
static volatile int32_t t93 = -204608;
int64_t x521 = 1981952LL;
volatile uint32_t x522 = UINT32_MAX;
volatile int64_t t95 = 0LL;
static int64_t x553 = -6343528780744LL;
static int8_t x557 = INT8_MIN;


void f0(void) {
	int16_t x9 = INT16_MIN;
	int32_t x10 = -1;
	static volatile uint64_t x11 = UINT64_MAX;
	volatile uint64_t t0 = 1498801LLU;

	t0 = ((x9==x10)&(x11*x12));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x21 = INT32_MAX;
	int32_t x22 = INT32_MIN;
	static int8_t x24 = -1;
	static volatile int32_t t1 = 821034619;

	t1 = ((x21==x22)&(x23*x24));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = 24361752049478LL;
	int8_t x26 = 0;
	static int64_t x27 = 24302098600558385LL;
	int64_t t2 = 19696824609069627LL;

	t2 = ((x25==x26)&(x27*x28));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x30 = INT64_MAX;
	static int16_t x31 = -6851;
	static volatile int16_t x32 = -1;

	t3 = ((x29==x30)&(x31*x32));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x33 = -1;
	int8_t x34 = -1;
	volatile uint16_t x35 = 6762U;
	int8_t x36 = -1;
	static volatile int32_t t4 = -4632254;

	t4 = ((x33==x34)&(x35*x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x41 = 4407;
	int16_t x42 = INT16_MAX;
	uint8_t x43 = UINT8_MAX;
	static int32_t x44 = -1;
	int32_t t5 = 13230;

	t5 = ((x41==x42)&(x43*x44));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x46 = 20U;
	static uint64_t x47 = 10280LLU;
	uint64_t t6 = 155512498LLU;

	t6 = ((x45==x46)&(x47*x48));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = -1;
	uint64_t x51 = UINT64_MAX;
	uint16_t x52 = 0U;
	uint64_t t7 = 6400332LLU;

	t7 = ((x49==x50)&(x51*x52));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x53 = 1526502544LLU;
	uint64_t x54 = 20198LLU;
	uint8_t x55 = UINT8_MAX;
	volatile uint64_t x56 = UINT64_MAX;
	uint64_t t8 = 26LLU;

	t8 = ((x53==x54)&(x55*x56));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x57 = UINT64_MAX;
	volatile uint64_t x58 = UINT64_MAX;
	int8_t x59 = INT8_MIN;
	int32_t x60 = -1;
	volatile int32_t t9 = -2919;

	t9 = ((x57==x58)&(x59*x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x65 = 785;
	int64_t x66 = INT64_MAX;
	uint16_t x67 = UINT16_MAX;
	volatile uint64_t x68 = 13LLU;
	uint64_t t10 = 216311042331923LLU;

	t10 = ((x65==x66)&(x67*x68));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x69 = 122U;
	int8_t x70 = INT8_MIN;
	int64_t x71 = 127586LL;
	uint32_t x72 = 1555U;

	t11 = ((x69==x70)&(x71*x72));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x74 = -1;
	int16_t x76 = -1;
	int64_t t12 = 98418626919389LL;

	t12 = ((x73==x74)&(x75*x76));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x85 = -462LL;
	uint16_t x86 = 0U;
	static uint16_t x87 = UINT16_MAX;
	int8_t x88 = INT8_MIN;
	int32_t t13 = 12507962;

	t13 = ((x85==x86)&(x87*x88));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x89 = 2LLU;
	uint64_t x90 = 16000817LLU;
	int8_t x92 = -1;

	t14 = ((x89==x90)&(x91*x92));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x94 = -17393239;
	uint8_t x96 = 82U;
	volatile int32_t t15 = 73891685;

	t15 = ((x93==x94)&(x95*x96));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x101 = -4733;
	uint16_t x102 = 486U;
	int32_t x103 = 21726272;
	static uint32_t x104 = UINT32_MAX;
	static volatile uint32_t t16 = 491U;

	t16 = ((x101==x102)&(x103*x104));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x122 = -9707839482269LL;
	uint32_t x123 = UINT32_MAX;
	volatile int8_t x124 = INT8_MAX;

	t17 = ((x121==x122)&(x123*x124));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x129 = 0U;
	uint64_t x130 = 130836LLU;
	volatile uint64_t t18 = 1142794LLU;

	t18 = ((x129==x130)&(x131*x132));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x133 = -5;
	volatile uint64_t x134 = 14491448LLU;
	int64_t x135 = -1LL;
	volatile int8_t x136 = INT8_MIN;
	volatile int64_t t19 = -2046772LL;

	t19 = ((x133==x134)&(x135*x136));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x141 = UINT8_MAX;
	static uint16_t x142 = 16U;
	static uint16_t x143 = 63U;
	int8_t x144 = -1;
	static int32_t t20 = -1324943;

	t20 = ((x141==x142)&(x143*x144));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x145 = 1;
	int8_t x146 = INT8_MAX;
	int32_t x147 = INT32_MIN;
	uint64_t x148 = 1200453723LLU;
	uint64_t t21 = 2344722107LLU;

	t21 = ((x145==x146)&(x147*x148));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x149 = UINT64_MAX;
	volatile uint32_t x150 = UINT32_MAX;
	uint16_t x151 = 68U;
	uint16_t x152 = 0U;
	volatile int32_t t22 = -429364683;

	t22 = ((x149==x150)&(x151*x152));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x153 = -31883;
	volatile uint8_t x154 = 29U;
	volatile int8_t x155 = INT8_MAX;
	int16_t x156 = INT16_MAX;
	volatile int32_t t23 = -12;

	t23 = ((x153==x154)&(x155*x156));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x157 = INT8_MIN;
	static uint16_t x158 = 26U;

	t24 = ((x157==x158)&(x159*x160));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x161 = INT64_MIN;
	int16_t x162 = INT16_MIN;
	static int16_t x164 = -1;

	t25 = ((x161==x162)&(x163*x164));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x165 = -1LL;
	int16_t x166 = INT16_MAX;
	volatile int16_t x167 = INT16_MIN;
	static volatile int8_t x168 = -1;

	t26 = ((x165==x166)&(x167*x168));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x169 = -7346023LL;
	int8_t x170 = INT8_MAX;
	static int32_t x171 = INT32_MIN;
	volatile uint64_t x172 = UINT64_MAX;

	t27 = ((x169==x170)&(x171*x172));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x173 = INT8_MIN;
	int32_t x174 = INT32_MIN;
	static uint8_t x175 = 5U;
	volatile int16_t x176 = 0;
	volatile int32_t t28 = -18;

	t28 = ((x173==x174)&(x175*x176));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x177 = -1LL;
	int64_t x178 = 488LL;
	static uint64_t x179 = 67016887928798233LLU;
	volatile uint64_t t29 = 1450035450720337LLU;

	t29 = ((x177==x178)&(x179*x180));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x182 = INT32_MAX;
	uint8_t x183 = 2U;
	uint64_t x184 = 59LLU;
	uint64_t t30 = 155961509LLU;

	t30 = ((x181==x182)&(x183*x184));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x185 = INT16_MIN;
	static uint64_t x186 = 336226335792LLU;
	int16_t x187 = INT16_MIN;
	uint16_t x188 = 5309U;
	int32_t t31 = -51;

	t31 = ((x185==x186)&(x187*x188));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x193 = INT16_MIN;
	int8_t x194 = INT8_MIN;
	uint64_t x195 = 978884894LLU;
	int32_t x196 = INT32_MIN;
	volatile uint64_t t32 = 884LLU;

	t32 = ((x193==x194)&(x195*x196));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x197 = 15844U;
	int8_t x198 = 0;
	volatile int16_t x200 = 28;
	volatile uint32_t t33 = 9688U;

	t33 = ((x197==x198)&(x199*x200));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x201 = INT8_MAX;
	uint8_t x203 = UINT8_MAX;
	volatile uint64_t x204 = 415845297102322323LLU;
	uint64_t t34 = 67694521525LLU;

	t34 = ((x201==x202)&(x203*x204));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x209 = INT16_MIN;
	uint64_t x210 = 2451477162931816926LLU;
	int32_t x212 = INT32_MIN;

	t35 = ((x209==x210)&(x211*x212));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x213 = -1;
	static int8_t x214 = 0;
	int64_t x215 = -1LL;
	int64_t t36 = -2LL;

	t36 = ((x213==x214)&(x215*x216));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x225 = 11U;
	int64_t x226 = INT64_MIN;
	int64_t x227 = 1369043305315065555LL;
	uint64_t x228 = 2534LLU;
	uint64_t t37 = 6LLU;

	t37 = ((x225==x226)&(x227*x228));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x229 = INT8_MAX;
	int64_t x230 = INT64_MAX;
	int16_t x232 = INT16_MIN;
	uint32_t t38 = 12259334U;

	t38 = ((x229==x230)&(x231*x232));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x233 = 1565327U;
	volatile uint8_t x234 = UINT8_MAX;
	int32_t x235 = -1;
	int32_t x236 = 429481;
	volatile int32_t t39 = 1;

	t39 = ((x233==x234)&(x235*x236));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x237 = -1LL;
	static int16_t x238 = 0;
	uint32_t x239 = 34U;
	int32_t x240 = -1;
	volatile uint32_t t40 = 0U;

	t40 = ((x237==x238)&(x239*x240));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x242 = INT16_MAX;
	static int32_t x243 = -28;
	volatile int32_t x244 = -1;
	static int32_t t41 = -492845;

	t41 = ((x241==x242)&(x243*x244));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x247 = UINT16_MAX;
	volatile uint64_t x248 = 11488215911612LLU;
	uint64_t t42 = 851LLU;

	t42 = ((x245==x246)&(x247*x248));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x249 = INT16_MIN;
	volatile int8_t x250 = -1;
	uint32_t x251 = UINT32_MAX;
	uint64_t x252 = 154LLU;
	uint64_t t43 = 65360320407LLU;

	t43 = ((x249==x250)&(x251*x252));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x253 = UINT16_MAX;
	int16_t x254 = 1691;
	volatile int16_t x255 = -3;
	uint64_t x256 = UINT64_MAX;

	t44 = ((x253==x254)&(x255*x256));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x257 = INT16_MIN;
	uint32_t x258 = UINT32_MAX;
	int32_t x259 = INT32_MIN;
	uint64_t x260 = 167813638320LLU;

	t45 = ((x257==x258)&(x259*x260));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x261 = INT16_MAX;
	static int64_t x262 = -1LL;
	int8_t x263 = INT8_MIN;
	int8_t x264 = -1;

	t46 = ((x261==x262)&(x263*x264));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x266 = INT32_MAX;
	int64_t x267 = -2161470368479288LL;

	t47 = ((x265==x266)&(x267*x268));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x269 = UINT16_MAX;
	static int16_t x270 = INT16_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t48 = 6447420;

	t48 = ((x269==x270)&(x271*x272));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x273 = -2;
	uint16_t x275 = 16U;
	int16_t x276 = 17;
	static int32_t t49 = -1896;

	t49 = ((x273==x274)&(x275*x276));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x277 = 105U;
	int32_t x278 = INT32_MIN;
	static int8_t x280 = INT8_MAX;

	t50 = ((x277==x278)&(x279*x280));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x281 = 1541060;
	volatile int32_t x282 = 83;
	static int64_t x284 = INT64_MAX;
	int64_t t51 = 32146039414303LL;

	t51 = ((x281==x282)&(x283*x284));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x285 = INT8_MAX;
	static volatile int32_t t52 = 84;

	t52 = ((x285==x286)&(x287*x288));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x289 = -1;
	int8_t x290 = 22;
	volatile uint32_t x291 = UINT32_MAX;
	int8_t x292 = -1;
	uint32_t t53 = 2U;

	t53 = ((x289==x290)&(x291*x292));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x297 = 1407LLU;
	int64_t x298 = INT64_MIN;
	uint64_t x299 = 60942773994LLU;
	volatile int32_t x300 = INT32_MIN;
	uint64_t t54 = 1722019LLU;

	t54 = ((x297==x298)&(x299*x300));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x302 = INT8_MIN;
	int8_t x303 = 1;
	volatile int64_t t55 = 76306754934390767LL;

	t55 = ((x301==x302)&(x303*x304));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x307 = INT8_MIN;
	uint32_t x308 = 6U;
	uint32_t t56 = 1115765U;

	t56 = ((x305==x306)&(x307*x308));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x310 = 20366522;
	volatile uint8_t x312 = UINT8_MAX;
	volatile int32_t t57 = -838263319;

	t57 = ((x309==x310)&(x311*x312));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x313 = UINT8_MAX;
	volatile int16_t x314 = -44;
	static volatile int32_t x315 = -91798167;
	uint32_t x316 = 9U;
	volatile uint32_t t58 = 9963U;

	t58 = ((x313==x314)&(x315*x316));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x321 = 24U;
	uint16_t x323 = 24141U;
	volatile uint32_t x324 = 3991700U;

	t59 = ((x321==x322)&(x323*x324));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x329 = 0;
	uint8_t x330 = 0U;
	int64_t x331 = -7207437312537LL;
	uint16_t x332 = UINT16_MAX;
	static int64_t t60 = 0LL;

	t60 = ((x329==x330)&(x331*x332));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x341 = -1432790686475559LL;
	int16_t x342 = INT16_MIN;
	static uint8_t x343 = 1U;
	int32_t x344 = -90;
	int32_t t61 = 233011;

	t61 = ((x341==x342)&(x343*x344));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x349 = 7;
	volatile uint64_t x351 = UINT64_MAX;
	static volatile int32_t x352 = -1;
	uint64_t t62 = 0LLU;

	t62 = ((x349==x350)&(x351*x352));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x353 = 99LLU;
	int8_t x355 = INT8_MIN;
	int8_t x356 = 50;
	volatile int32_t t63 = 98647590;

	t63 = ((x353==x354)&(x355*x356));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x362 = -1;
	volatile uint64_t x363 = UINT64_MAX;
	int8_t x364 = 0;
	static uint64_t t64 = 0LLU;

	t64 = ((x361==x362)&(x363*x364));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x373 = -43755394284582367LL;
	int16_t x374 = INT16_MAX;
	static int16_t x375 = 0;

	t65 = ((x373==x374)&(x375*x376));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x377 = INT8_MIN;
	int16_t x379 = -1;
	volatile uint64_t t66 = 3139LLU;

	t66 = ((x377==x378)&(x379*x380));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x382 = INT64_MIN;
	int16_t x383 = 7835;
	int64_t x384 = -55007299LL;
	int64_t t67 = 1746LL;

	t67 = ((x381==x382)&(x383*x384));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x385 = 8356056U;
	static int16_t x386 = -3071;
	volatile int32_t x387 = -1;
	uint16_t x388 = 4858U;
	int32_t t68 = 705796;

	t68 = ((x385==x386)&(x387*x388));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x393 = -2;
	int32_t x394 = -1;
	int8_t x396 = -22;
	volatile int32_t t69 = -1;

	t69 = ((x393==x394)&(x395*x396));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t t70 = 748956773051539823LLU;

	t70 = ((x397==x398)&(x399*x400));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x401 = UINT32_MAX;
	int8_t x402 = INT8_MIN;
	uint16_t x403 = 2U;
	volatile int32_t t71 = -1;

	t71 = ((x401==x402)&(x403*x404));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x405 = 1429U;
	int64_t x406 = -1LL;
	int16_t x407 = -69;
	int8_t x408 = 0;
	int32_t t72 = 7;

	t72 = ((x405==x406)&(x407*x408));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x409 = 0U;
	int64_t x410 = INT64_MAX;

	t73 = ((x409==x410)&(x411*x412));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x413 = -3882128642LL;
	static int64_t x414 = INT64_MIN;
	static uint16_t x415 = 3U;
	uint32_t x416 = UINT32_MAX;
	volatile uint32_t t74 = 2U;

	t74 = ((x413==x414)&(x415*x416));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x421 = UINT8_MAX;
	static int64_t x422 = INT64_MAX;
	int32_t x423 = -64;
	static volatile int64_t x424 = 11364049232051LL;
	int64_t t75 = 10010806LL;

	t75 = ((x421==x422)&(x423*x424));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x426 = UINT64_MAX;
	uint16_t x427 = 77U;

	t76 = ((x425==x426)&(x427*x428));

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x430 = 47U;
	uint64_t x431 = 1LLU;
	static int8_t x432 = -1;
	volatile uint64_t t77 = 102647788459361437LLU;

	t77 = ((x429==x430)&(x431*x432));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x437 = -1LL;
	static uint16_t x438 = 16U;
	static int8_t x439 = -1;
	uint8_t x440 = 22U;
	volatile int32_t t78 = 9;

	t78 = ((x437==x438)&(x439*x440));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x441 = -14325LL;
	static int8_t x443 = INT8_MIN;
	uint64_t t79 = 14686346563LLU;

	t79 = ((x441==x442)&(x443*x444));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x445 = INT8_MIN;
	volatile int32_t x446 = -428;
	uint8_t x447 = UINT8_MAX;
	uint8_t x448 = UINT8_MAX;
	int32_t t80 = -1992861;

	t80 = ((x445==x446)&(x447*x448));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x449 = UINT64_MAX;
	int8_t x450 = INT8_MAX;
	static int16_t x451 = -1;
	int16_t x452 = INT16_MAX;
	int32_t t81 = 5354190;

	t81 = ((x449==x450)&(x451*x452));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x453 = UINT64_MAX;
	static uint32_t x454 = UINT32_MAX;
	uint64_t x455 = UINT64_MAX;
	int16_t x456 = 8221;
	uint64_t t82 = 19213LLU;

	t82 = ((x453==x454)&(x455*x456));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x457 = INT64_MIN;
	volatile uint32_t t83 = 10U;

	t83 = ((x457==x458)&(x459*x460));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x461 = INT64_MIN;
	int8_t x462 = INT8_MIN;
	volatile int32_t x463 = 1;
	uint64_t x464 = UINT64_MAX;
	volatile uint64_t t84 = 113012687242506LLU;

	t84 = ((x461==x462)&(x463*x464));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x469 = 243U;
	static uint64_t x470 = 986985LLU;
	static int32_t t85 = -1994;

	t85 = ((x469==x470)&(x471*x472));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x477 = 3U;
	volatile int8_t x478 = 39;
	volatile int16_t x479 = 33;
	uint16_t x480 = 813U;
	int32_t t86 = -23605;

	t86 = ((x477==x478)&(x479*x480));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x482 = 15002U;
	volatile int8_t x483 = -1;
	uint32_t x484 = 2674789U;
	static uint32_t t87 = 1U;

	t87 = ((x481==x482)&(x483*x484));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x493 = 21026594U;
	volatile int64_t x494 = -3126482421992255309LL;
	volatile int64_t x495 = 54813601038LL;
	uint16_t x496 = 15U;
	int64_t t88 = -30085750477LL;

	t88 = ((x493==x494)&(x495*x496));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x497 = INT64_MAX;
	int8_t x498 = 1;
	uint32_t x499 = 206873U;
	uint64_t x500 = 87831916404946262LLU;

	t89 = ((x497==x498)&(x499*x500));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x501 = INT64_MIN;
	uint32_t x503 = 136175531U;
	int16_t x504 = -7;
	uint32_t t90 = 25777742U;

	t90 = ((x501==x502)&(x503*x504));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x506 = 83480543349944625LL;
	uint16_t x507 = UINT16_MAX;
	int8_t x508 = INT8_MIN;
	static volatile int32_t t91 = 64;

	t91 = ((x505==x506)&(x507*x508));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x509 = 0U;
	volatile int16_t x510 = INT16_MAX;
	uint16_t x511 = UINT16_MAX;
	static int16_t x512 = 3463;
	int32_t t92 = 578963;

	t92 = ((x509==x510)&(x511*x512));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x517 = INT16_MIN;
	volatile int16_t x519 = 2;
	int8_t x520 = INT8_MIN;

	t93 = ((x517==x518)&(x519*x520));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x523 = UINT64_MAX;
	int16_t x524 = INT16_MIN;
	volatile uint64_t t94 = 86293LLU;

	t94 = ((x521==x522)&(x523*x524));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x525 = 110;
	static int8_t x526 = INT8_MIN;
	int64_t x527 = -1LL;
	static uint16_t x528 = UINT16_MAX;

	t95 = ((x525==x526)&(x527*x528));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x529 = INT8_MIN;
	int32_t x530 = INT32_MIN;
	static int64_t x531 = 1209LL;
	int16_t x532 = INT16_MIN;
	volatile int64_t t96 = -12847514066LL;

	t96 = ((x529==x530)&(x531*x532));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x537 = INT64_MIN;
	volatile int32_t x538 = INT32_MIN;
	volatile int8_t x539 = 3;
	static volatile uint32_t x540 = UINT32_MAX;
	uint32_t t97 = 990U;

	t97 = ((x537==x538)&(x539*x540));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x554 = UINT8_MAX;
	int32_t x555 = 2;
	uint8_t x556 = 6U;
	volatile int32_t t98 = -4660;

	t98 = ((x553==x554)&(x555*x556));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x558 = 1133U;
	uint32_t x559 = 25824580U;
	static uint32_t x560 = 31717309U;
	uint32_t t99 = 2886600U;

	t99 = ((x557==x558)&(x559*x560));

	if (t99 != 0U) { NG(); } else { ; }
	
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

