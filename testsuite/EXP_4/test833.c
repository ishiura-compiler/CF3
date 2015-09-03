#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 12429U;
int64_t x4 = INT64_MIN;
static uint8_t x9 = UINT8_MAX;
volatile int32_t t1 = 62;
volatile int16_t x16 = -1;
volatile int32_t x17 = 3;
uint64_t x26 = UINT64_MAX;
volatile uint64_t t4 = 15008863751LLU;
static int32_t x30 = 249;
static volatile int32_t t6 = -359;
volatile int64_t t7 = 334472LL;
int64_t x45 = -1LL;
static uint64_t t8 = 10231261187LLU;
volatile uint64_t x55 = UINT64_MAX;
uint16_t x58 = UINT16_MAX;
static int8_t x59 = INT8_MIN;
static volatile int16_t x60 = INT16_MIN;
static int16_t x61 = -1;
uint64_t x67 = 3LLU;
uint16_t x71 = 2U;
static int16_t x73 = INT16_MAX;
int16_t x75 = -1;
int64_t x76 = -53317090LL;
int64_t x90 = -459LL;
uint64_t x93 = UINT64_MAX;
volatile int8_t x95 = INT8_MIN;
static volatile uint64_t t19 = 4140544475521543257LLU;
uint64_t t20 = 36072964190969LLU;
static int32_t x113 = -236590;
volatile int64_t t23 = 2803982137972718LL;
static volatile uint64_t t24 = 517190851543717693LLU;
static int8_t x123 = -1;
uint64_t x135 = UINT64_MAX;
int16_t x142 = INT16_MAX;
int8_t x147 = INT8_MAX;
volatile int32_t t28 = 2510020;
static int8_t x155 = -41;
uint32_t x156 = UINT32_MAX;
int8_t x160 = INT8_MIN;
static volatile int64_t t31 = -520607455073LL;
uint16_t x167 = 732U;
int16_t x176 = INT16_MIN;
static uint32_t x177 = UINT32_MAX;
uint8_t x182 = 7U;
int8_t x185 = -1;
volatile int8_t x195 = 0;
volatile int32_t t40 = 227;
volatile uint64_t t41 = 155368LLU;
uint64_t x201 = 155468991917LLU;
volatile uint32_t x205 = 176U;
int32_t x221 = INT32_MAX;
volatile uint64_t t49 = 3596LLU;
static int64_t x233 = INT64_MAX;
uint8_t x237 = 72U;
int32_t x240 = -33162184;
int16_t x243 = INT16_MAX;
volatile uint32_t x245 = UINT32_MAX;
int8_t x248 = INT8_MIN;
uint8_t x258 = UINT8_MAX;
static int32_t t57 = -32;
int32_t x265 = INT32_MIN;
int8_t x279 = -28;
uint32_t x289 = UINT32_MAX;
volatile int32_t x290 = INT32_MIN;
static int8_t x291 = INT8_MIN;
static uint32_t x292 = UINT32_MAX;
volatile int64_t x293 = -1LL;
volatile uint8_t x298 = UINT8_MAX;
volatile int32_t t64 = 97;
int32_t x303 = -1;
int32_t x305 = INT32_MIN;
static uint16_t x308 = UINT16_MAX;
int32_t x314 = -1;
static uint32_t x316 = 1U;
volatile int32_t t70 = 178673866;
volatile int64_t x331 = 1LL;
int64_t t71 = 3710180786074653013LL;
int8_t x336 = INT8_MIN;
int64_t x345 = -272551297067542LL;
int32_t x353 = -736533699;
int16_t x354 = 4575;
uint8_t x356 = 30U;
static int32_t x359 = INT32_MAX;
int8_t x364 = INT8_MIN;
uint16_t x365 = 20099U;
int16_t x367 = INT16_MIN;
volatile int32_t x368 = INT32_MAX;
int32_t t79 = 255843;
uint16_t x374 = UINT16_MAX;
int64_t x376 = -1LL;
int8_t x393 = INT8_MIN;
static int16_t x394 = INT16_MAX;
static uint16_t x399 = 6U;
static int64_t x417 = -22922134293519851LL;
int64_t x421 = -2064421LL;
static volatile int16_t x428 = -2454;
uint64_t t94 = 15120350012LLU;
int8_t x435 = INT8_MAX;
int8_t x445 = -6;
volatile int32_t x447 = -1;
int32_t x457 = -14319376;
static volatile int16_t x458 = -86;
uint64_t t98 = 13594969LLU;
static int8_t x461 = INT8_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	volatile int8_t x2 = INT8_MIN;
	int64_t t0 = -536116912895812963LL;

	t0 = (x1+(x2^(x3%x4)));

	if (t0 != -12659LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x10 = -106;
	int32_t x11 = INT32_MAX;
	static volatile int32_t x12 = INT32_MIN;

	t1 = (x9+(x10^(x11%x12)));

	if (t1 != -2147483288) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	static uint32_t x14 = 176U;
	volatile int64_t x15 = INT64_MAX;
	volatile int64_t t2 = -551258234609207315LL;

	t2 = (x13+(x14^(x15%x16)));

	if (t2 != 175LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x18 = -1;
	volatile uint32_t x19 = 4239716U;
	int16_t x20 = INT16_MIN;
	volatile uint32_t t3 = 667666U;

	t3 = (x17+(x18^(x19%x20)));

	if (t3 != 4290727582U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = UINT64_MAX;
	static int32_t x27 = INT32_MIN;
	static int32_t x28 = -502966;

	t4 = (x25+(x26^(x27%x28)));

	if (t4 != 321792LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x29 = 312695710177603LLU;
	volatile int32_t x31 = 1;
	uint16_t x32 = 66U;
	uint64_t t5 = 319LLU;

	t5 = (x29+(x30^(x31%x32)));

	if (t5 != 312695710177851LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MIN;
	int16_t x34 = -1;
	int8_t x35 = INT8_MAX;
	uint8_t x36 = 19U;

	t6 = (x33+(x34^(x35%x36)));

	if (t6 != -142) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 49U;
	uint16_t x38 = 225U;
	int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;

	t7 = (x37+(x38^(x39%x40)));

	if (t7 != -2147483374LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x46 = 64U;
	int64_t x47 = -1LL;
	static uint64_t x48 = 109LLU;

	t8 = (x45+(x46^(x47%x48)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = -1;
	int32_t x50 = INT32_MAX;
	int8_t x51 = -1;
	int64_t x52 = 456825618996408LL;
	int64_t t9 = 101148090840263LL;

	t9 = (x49+(x50^(x51%x52)));

	if (t9 != -2147483649LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x53 = -1;
	static int32_t x54 = INT32_MAX;
	int64_t x56 = -1LL;
	volatile uint64_t t10 = 877LLU;

	t10 = (x53+(x54^(x55%x56)));

	if (t10 != 2147483646LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	volatile int32_t t11 = 26;

	t11 = (x57+(x58^(x59%x60)));

	if (t11 != -65537) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x62 = 1U;
	uint8_t x63 = UINT8_MAX;
	volatile uint16_t x64 = 2U;
	static int32_t t12 = 556069;

	t12 = (x61+(x62^(x63%x64)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = INT8_MAX;
	volatile uint8_t x66 = 11U;
	uint32_t x68 = 94U;
	uint64_t t13 = 13231117153LLU;

	t13 = (x65+(x66^(x67%x68)));

	if (t13 != 135LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MAX;
	int32_t x70 = -1;
	int16_t x72 = INT16_MIN;
	int64_t t14 = 19LL;

	t14 = (x69+(x70^(x71%x72)));

	if (t14 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x74 = 4;
	int64_t t15 = 78223986443LL;

	t15 = (x73+(x74^(x75%x76)));

	if (t15 != 32762LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x77 = INT32_MAX;
	uint16_t x78 = UINT16_MAX;
	static uint32_t x79 = UINT32_MAX;
	int64_t x80 = INT64_MIN;
	volatile int64_t t16 = 535LL;

	t16 = (x77+(x78^(x79%x80)));

	if (t16 != 6442385407LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x85 = UINT8_MAX;
	volatile int32_t x86 = -1;
	int8_t x87 = -1;
	int16_t x88 = INT16_MAX;
	volatile int32_t t17 = -6413147;

	t17 = (x85+(x86^(x87%x88)));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = -101;
	int32_t x91 = 0;
	uint16_t x92 = 218U;
	int64_t t18 = 25087559957408679LL;

	t18 = (x89+(x90^(x91%x92)));

	if (t18 != -560LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x94 = INT32_MIN;
	volatile int64_t x96 = INT64_MAX;

	t19 = (x93+(x94^(x95%x96)));

	if (t19 != 2147483519LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = -2;
	int8_t x98 = INT8_MIN;
	uint16_t x99 = UINT16_MAX;
	uint64_t x100 = 472367923679894310LLU;

	t20 = (x97+(x98^(x99%x100)));

	if (t20 != 18446744073709486205LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = INT8_MIN;
	uint64_t x102 = UINT64_MAX;
	int32_t x103 = INT32_MAX;
	static int32_t x104 = INT32_MIN;
	static uint64_t t21 = 67277440526LLU;

	t21 = (x101+(x102^(x103%x104)));

	if (t21 != 18446744071562067840LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = 62U;
	volatile int64_t x110 = -1LL;
	int32_t x111 = -1;
	uint32_t x112 = UINT32_MAX;
	int64_t t22 = 2162100174743732LL;

	t22 = (x109+(x110^(x111%x112)));

	if (t22 != 61LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x114 = UINT8_MAX;
	int32_t x115 = 323925;
	static int64_t x116 = INT64_MIN;

	t23 = (x113+(x114^(x115%x116)));

	if (t23 != 87420LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x118 = 35886148709051868LLU;
	int8_t x119 = -1;
	uint64_t x120 = 1841235399LLU;

	t24 = (x117+(x118^(x119%x120)));

	if (t24 != 9259258186017632853LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x121 = UINT8_MAX;
	int8_t x122 = -1;
	int16_t x124 = -12233;
	int32_t t25 = -2305;

	t25 = (x121+(x122^(x123%x124)));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = 65909558;
	int64_t x134 = 0LL;
	int64_t x136 = -1LL;
	volatile uint64_t t26 = 2124600250214260LLU;

	t26 = (x133+(x134^(x135%x136)));

	if (t26 != 65909558LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x141 = INT8_MAX;
	static int16_t x143 = INT16_MIN;
	static int8_t x144 = INT8_MIN;
	int32_t t27 = -1;

	t27 = (x141+(x142^(x143%x144)));

	if (t27 != 32894) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = INT16_MIN;
	static uint8_t x146 = 2U;
	int16_t x148 = INT16_MIN;

	t28 = (x145+(x146^(x147%x148)));

	if (t28 != -32643) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x149 = -1;
	int64_t x150 = INT64_MIN;
	volatile int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MIN;
	int64_t t29 = -2046974493691238827LL;

	t29 = (x149+(x150^(x151%x152)));

	if (t29 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x153 = 31831120147279LLU;
	int8_t x154 = INT8_MIN;
	uint64_t t30 = 208486LLU;

	t30 = (x153+(x154^(x155%x156)));

	if (t30 != 31831120147366LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = 122;
	int16_t x158 = 38;
	static int64_t x159 = INT64_MIN;

	t31 = (x157+(x158^(x159%x160)));

	if (t31 != 160LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x161 = INT16_MAX;
	static uint64_t x162 = 41627484LLU;
	static int32_t x163 = -1;
	uint64_t x164 = 70147321357605965LLU;
	uint64_t t32 = 1883101990486LLU;

	t32 = (x161+(x162^(x163%x164)));

	if (t32 != 68145878055167596LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x165 = -29;
	int16_t x166 = INT16_MIN;
	uint16_t x168 = 33U;
	int32_t t33 = 38495112;

	t33 = (x165+(x166^(x167%x168)));

	if (t33 != -32791) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x169 = 47U;
	int16_t x170 = 0;
	uint16_t x171 = 5552U;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t34 = 4;

	t34 = (x169+(x170^(x171%x172)));

	if (t34 != 244) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x173 = UINT16_MAX;
	int8_t x174 = -1;
	int32_t x175 = INT32_MIN;
	static int32_t t35 = -107158;

	t35 = (x173+(x174^(x175%x176)));

	if (t35 != 65534) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x178 = INT8_MAX;
	static int8_t x179 = INT8_MAX;
	int32_t x180 = INT32_MIN;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = (x177+(x178^(x179%x180)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x181 = INT64_MIN;
	int32_t x183 = INT32_MAX;
	int16_t x184 = -15951;
	int64_t t37 = 4233954656010401LL;

	t37 = (x181+(x182^(x183%x184)));

	if (t37 != -9223372036854775294LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x186 = -1LL;
	volatile int8_t x187 = -12;
	int64_t x188 = -392407098411261LL;
	int64_t t38 = -14431LL;

	t38 = (x185+(x186^(x187%x188)));

	if (t38 != 10LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x189 = UINT16_MAX;
	int16_t x190 = 3996;
	uint32_t x191 = 61U;
	int32_t x192 = -1237936;
	volatile uint32_t t39 = 20602718U;

	t39 = (x189+(x190^(x191%x192)));

	if (t39 != 69536U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = -1;
	static int8_t x194 = INT8_MIN;
	static int16_t x196 = -1;

	t40 = (x193+(x194^(x195%x196)));

	if (t40 != -129) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = 3269705328205014LLU;
	volatile int64_t x198 = INT64_MIN;
	int8_t x199 = INT8_MIN;
	static int8_t x200 = 1;

	t41 = (x197+(x198^(x199%x200)));

	if (t41 != 9226641742182980822LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x202 = INT64_MAX;
	uint32_t x203 = UINT32_MAX;
	volatile uint8_t x204 = 115U;
	uint64_t t42 = 9796944LLU;

	t42 = (x201+(x202^(x203%x204)));

	if (t42 != 9223372192323767644LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x206 = -1LL;
	volatile int32_t x207 = INT32_MIN;
	static uint64_t x208 = UINT64_MAX;
	volatile uint64_t t43 = 29963927LLU;

	t43 = (x205+(x206^(x207%x208)));

	if (t43 != 2147483823LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = INT32_MAX;
	int8_t x210 = -1;
	int64_t x211 = 317343379656655LL;
	static int8_t x212 = 1;
	static volatile int64_t t44 = 318972252612063LL;

	t44 = (x209+(x210^(x211%x212)));

	if (t44 != 2147483646LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x213 = 726973997874LLU;
	uint16_t x214 = 247U;
	int64_t x215 = INT64_MIN;
	static int16_t x216 = -1;
	static uint64_t t45 = 0LLU;

	t45 = (x213+(x214^(x215%x216)));

	if (t45 != 726973998121LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MAX;
	int32_t x219 = -1;
	int64_t x220 = -58982768341LL;
	static volatile int64_t t46 = 945LL;

	t46 = (x217+(x218^(x219%x220)));

	if (t46 != -256LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x222 = 431683686U;
	static int32_t x223 = -18;
	uint32_t x224 = UINT32_MAX;
	uint32_t t47 = 365U;

	t47 = (x221+(x222^(x223%x224)));

	if (t47 != 1715799943U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x225 = UINT16_MAX;
	int16_t x226 = INT16_MAX;
	int16_t x227 = -5;
	int32_t x228 = INT32_MAX;
	volatile int32_t t48 = -944575;

	t48 = (x225+(x226^(x227%x228)));

	if (t48 != 32771) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x229 = UINT64_MAX;
	int64_t x230 = 203LL;
	uint8_t x231 = 3U;
	static uint64_t x232 = 16844272284570LLU;

	t49 = (x229+(x230^(x231%x232)));

	if (t49 != 199LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x234 = -1748;
	volatile int64_t x235 = 0LL;
	uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t50 = 23254098608LLU;

	t50 = (x233+(x234^(x235%x236)));

	if (t50 != 9223372036854774059LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x238 = 43U;
	uint16_t x239 = 620U;
	int32_t t51 = -3;

	t51 = (x237+(x238^(x239%x240)));

	if (t51 != 655) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x241 = -6805733LL;
	int16_t x242 = INT16_MIN;
	int8_t x244 = 36;
	volatile int64_t t52 = 100501180178971LL;

	t52 = (x241+(x242^(x243%x244)));

	if (t52 != -6838494LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x246 = UINT16_MAX;
	volatile int8_t x247 = -1;
	static uint32_t t53 = 2313491U;

	t53 = (x245+(x246^(x247%x248)));

	if (t53 != 4294901759U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MAX;
	int32_t x251 = INT32_MIN;
	int64_t x252 = INT64_MAX;
	int64_t t54 = -329440LL;

	t54 = (x249+(x250^(x251%x252)));

	if (t54 != -2147483649LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = 12;
	int8_t x254 = 0;
	static int8_t x255 = 0;
	volatile int8_t x256 = INT8_MAX;
	volatile int32_t t55 = 1;

	t55 = (x253+(x254^(x255%x256)));

	if (t55 != 12) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x257 = INT32_MIN;
	volatile uint16_t x259 = 9670U;
	int8_t x260 = -1;
	static int32_t t56 = -7;

	t56 = (x257+(x258^(x259%x260)));

	if (t56 != -2147483393) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = -1;
	int16_t x262 = INT16_MIN;
	int16_t x263 = INT16_MIN;
	volatile uint16_t x264 = UINT16_MAX;

	t57 = (x261+(x262^(x263%x264)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x266 = INT16_MIN;
	uint8_t x267 = 14U;
	int64_t x268 = -11362036833697LL;
	volatile int64_t t58 = -25371795168621948LL;

	t58 = (x265+(x266^(x267%x268)));

	if (t58 != -2147516402LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MIN;
	static int64_t x275 = INT64_MAX;
	int64_t x276 = 100LL;
	volatile int64_t t59 = -206105231745LL;

	t59 = (x273+(x274^(x275%x276)));

	if (t59 != -2147516409LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x277 = INT8_MAX;
	uint32_t x278 = UINT32_MAX;
	volatile int8_t x280 = INT8_MIN;
	uint32_t t60 = 132U;

	t60 = (x277+(x278^(x279%x280)));

	if (t60 != 154U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = -1;
	int8_t x286 = -1;
	volatile int64_t x287 = INT64_MIN;
	int32_t x288 = INT32_MAX;
	volatile int64_t t61 = -8961LL;

	t61 = (x285+(x286^(x287%x288)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t t62 = 968325299U;

	t62 = (x289+(x290^(x291%x292)));

	if (t62 != 2147483519U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x294 = -1LL;
	volatile int16_t x295 = INT16_MIN;
	int16_t x296 = INT16_MIN;
	volatile int64_t t63 = -239971LL;

	t63 = (x293+(x294^(x295%x296)));

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x297 = INT8_MIN;
	uint8_t x299 = 5U;
	int16_t x300 = INT16_MAX;

	t64 = (x297+(x298^(x299%x300)));

	if (t64 != 122) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = INT16_MIN;
	static int32_t x302 = -55;
	int64_t x304 = -1LL;
	int64_t t65 = -701LL;

	t65 = (x301+(x302^(x303%x304)));

	if (t65 != -32823LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x306 = -1970033235LL;
	uint64_t x307 = 29992586LLU;
	volatile uint64_t t66 = 354285149358LLU;

	t66 = (x305+(x306^(x307%x308)));

	if (t66 != 18446744069591991806LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x309 = 887U;
	int8_t x310 = INT8_MAX;
	int32_t x311 = 16132;
	int8_t x312 = INT8_MIN;
	static uint32_t t67 = 6623077U;

	t67 = (x309+(x310^(x311%x312)));

	if (t67 != 1010U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x313 = 23U;
	int16_t x315 = 1;
	static volatile uint32_t t68 = 119540U;

	t68 = (x313+(x314^(x315%x316)));

	if (t68 != 22U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x317 = INT16_MAX;
	uint64_t x318 = UINT64_MAX;
	uint8_t x319 = 12U;
	int32_t x320 = -1;
	static uint64_t t69 = 2823880361855LLU;

	t69 = (x317+(x318^(x319%x320)));

	if (t69 != 32766LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x321 = -1;
	static int8_t x322 = -28;
	int8_t x323 = INT8_MIN;
	static int32_t x324 = -1;

	t70 = (x321+(x322^(x323%x324)));

	if (t70 != -29) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x329 = UINT16_MAX;
	static int16_t x330 = -1;
	int64_t x332 = INT64_MIN;

	t71 = (x329+(x330^(x331%x332)));

	if (t71 != 65533LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x333 = INT32_MIN;
	int32_t x334 = -1;
	int64_t x335 = INT64_MAX;
	static volatile int64_t t72 = -6734LL;

	t72 = (x333+(x334^(x335%x336)));

	if (t72 != -2147483776LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x337 = 873686484090LLU;
	volatile uint16_t x338 = UINT16_MAX;
	uint8_t x339 = 89U;
	int64_t x340 = 64567LL;
	uint64_t t73 = 46891582186984LLU;

	t73 = (x337+(x338^(x339%x340)));

	if (t73 != 873686549536LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x341 = -39;
	uint32_t x342 = UINT32_MAX;
	int64_t x343 = INT64_MAX;
	static int32_t x344 = INT32_MIN;
	volatile int64_t t74 = -115618LL;

	t74 = (x341+(x342^(x343%x344)));

	if (t74 != 2147483609LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x346 = -1;
	int8_t x347 = -7;
	int64_t x348 = INT64_MIN;
	volatile int64_t t75 = -4384856816260014113LL;

	t75 = (x345+(x346^(x347%x348)));

	if (t75 != -272551297067536LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x355 = INT32_MAX;
	int32_t t76 = -49;

	t76 = (x353+(x354^(x355%x356)));

	if (t76 != -736529131) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x357 = UINT8_MAX;
	int64_t x358 = INT64_MIN;
	int32_t x360 = 6407026;
	volatile int64_t t77 = 870399576213910637LL;

	t77 = (x357+(x358^(x359%x360)));

	if (t77 != -9223372036853645616LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = 12783;
	static int8_t x362 = -1;
	uint8_t x363 = 3U;
	static int32_t t78 = 56037634;

	t78 = (x361+(x362^(x363%x364)));

	if (t78 != 12779) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x366 = INT8_MIN;

	t79 = (x365+(x366^(x367%x368)));

	if (t79 != 52739) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x369 = 35360U;
	static int16_t x370 = INT16_MAX;
	int16_t x371 = -741;
	int32_t x372 = INT32_MAX;
	uint32_t t80 = 0U;

	t80 = (x369+(x370^(x371%x372)));

	if (t80 != 3332U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x373 = INT32_MIN;
	int16_t x375 = INT16_MAX;
	static int64_t t81 = 0LL;

	t81 = (x373+(x374^(x375%x376)));

	if (t81 != -2147418113LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x377 = INT64_MIN;
	uint32_t x378 = 5608846U;
	volatile int8_t x379 = INT8_MAX;
	int64_t x380 = INT64_MIN;
	static int64_t t82 = 22540534755991343LL;

	t82 = (x377+(x378^(x379%x380)));

	if (t82 != -9223372036849166863LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x381 = INT16_MAX;
	volatile int16_t x382 = 6357;
	int8_t x383 = INT8_MAX;
	int64_t x384 = 3942LL;
	volatile int64_t t83 = 412194295LL;

	t83 = (x381+(x382^(x383%x384)));

	if (t83 != 39081LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = -6013;
	uint32_t x386 = 83581684U;
	static int64_t x387 = INT64_MIN;
	static int64_t x388 = INT64_MIN;
	static int64_t t84 = 15966874829LL;

	t84 = (x385+(x386^(x387%x388)));

	if (t84 != 83575671LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x389 = INT16_MIN;
	int16_t x390 = INT16_MIN;
	int64_t x391 = -1LL;
	int8_t x392 = 4;
	int64_t t85 = 115532187780LL;

	t85 = (x389+(x390^(x391%x392)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x395 = UINT8_MAX;
	int32_t x396 = 3256;
	volatile int32_t t86 = 42978414;

	t86 = (x393+(x394^(x395%x396)));

	if (t86 != 32384) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = INT32_MIN;
	uint8_t x398 = 3U;
	uint32_t x400 = 524285217U;
	volatile uint32_t t87 = 21628U;

	t87 = (x397+(x398^(x399%x400)));

	if (t87 != 2147483653U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x405 = 2607U;
	static int16_t x406 = -2;
	uint16_t x407 = 414U;
	uint32_t x408 = UINT32_MAX;
	uint32_t t88 = 8874U;

	t88 = (x405+(x406^(x407%x408)));

	if (t88 != 2191U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x409 = -1;
	static int64_t x410 = -201LL;
	int8_t x411 = INT8_MAX;
	int8_t x412 = -3;
	volatile int64_t t89 = -353194713LL;

	t89 = (x409+(x410^(x411%x412)));

	if (t89 != -203LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x413 = INT16_MIN;
	uint32_t x414 = UINT32_MAX;
	volatile int8_t x415 = 3;
	static int16_t x416 = INT16_MIN;
	static volatile uint32_t t90 = 72418664U;

	t90 = (x413+(x414^(x415%x416)));

	if (t90 != 4294934524U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x418 = 5;
	volatile int8_t x419 = -1;
	volatile int32_t x420 = INT32_MAX;
	static volatile int64_t t91 = 250821053717903504LL;

	t91 = (x417+(x418^(x419%x420)));

	if (t91 != -22922134293519857LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x422 = UINT64_MAX;
	int16_t x423 = -1;
	uint16_t x424 = UINT16_MAX;
	uint64_t t92 = 2053225205168LLU;

	t92 = (x421+(x422^(x423%x424)));

	if (t92 != 18446744073707487195LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x425 = -4093;
	static int8_t x426 = INT8_MIN;
	int64_t x427 = INT64_MIN;
	static int64_t t93 = 6598LL;

	t93 = (x425+(x426^(x427%x428)));

	if (t93 != -2313LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x429 = 126000U;
	uint64_t x430 = 289798LLU;
	volatile int16_t x431 = INT16_MIN;
	int32_t x432 = INT32_MAX;

	t94 = (x429+(x430^(x431%x432)));

	if (t94 != 18446744073709410358LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x433 = -1;
	uint16_t x434 = 91U;
	int32_t x436 = INT32_MIN;
	static int32_t t95 = 144795;

	t95 = (x433+(x434^(x435%x436)));

	if (t95 != 35) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x446 = INT32_MIN;
	static int64_t x448 = INT64_MIN;
	volatile int64_t t96 = 26350563660179LL;

	t96 = (x445+(x446^(x447%x448)));

	if (t96 != 2147483641LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x453 = -1;
	int64_t x454 = -1LL;
	static int16_t x455 = INT16_MIN;
	int64_t x456 = 12028059080914LL;
	volatile int64_t t97 = 1LL;

	t97 = (x453+(x454^(x455%x456)));

	if (t97 != 32766LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x459 = -1;
	volatile uint64_t x460 = 39775LLU;

	t98 = (x457+(x458^(x459%x460)));

	if (t98 != 18446744073695227982LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x462 = INT16_MIN;
	int32_t x463 = INT32_MIN;
	uint16_t x464 = UINT16_MAX;
	int32_t t99 = 153727;

	t99 = (x461+(x462^(x463%x464)));

	if (t99 != 127) { NG(); } else { ; }
	
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

