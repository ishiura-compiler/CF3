#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 16376505U;
uint32_t x7 = UINT32_MAX;
int64_t x11 = 3465922925767044LL;
static int8_t x19 = 20;
static int32_t x21 = INT32_MIN;
int16_t x22 = 12;
volatile int32_t t5 = INT32_MIN;
int32_t x29 = 13111;
int16_t x33 = INT16_MAX;
int64_t x51 = -1512305LL;
int64_t x53 = INT64_MIN;
int64_t x57 = 17802LL;
int32_t x59 = 161;
static int8_t x60 = -30;
static volatile int32_t x64 = INT32_MIN;
static int32_t x66 = INT32_MIN;
volatile int64_t x68 = INT64_MIN;
int8_t x69 = -1;
int64_t x88 = INT64_MIN;
int8_t x89 = -1;
volatile int16_t x90 = INT16_MIN;
uint64_t x91 = UINT64_MAX;
int32_t x92 = 59910171;
volatile uint64_t t19 = 728799031808632282LLU;
uint16_t x99 = 1947U;
volatile int16_t x101 = 10;
int64_t x104 = INT64_MAX;
uint32_t x110 = 54U;
int16_t x143 = INT16_MIN;
uint8_t x153 = UINT8_MAX;
int16_t x154 = INT16_MIN;
uint32_t x160 = 990851851U;
int32_t x166 = -1;
int64_t t33 = -433390525516697326LL;
static volatile int16_t x176 = -1;
volatile int32_t t35 = 378284507;
int64_t x181 = 60LL;
static int64_t x192 = INT64_MIN;
int8_t x194 = -14;
static uint64_t x195 = 844896LLU;
volatile uint64_t t39 = 1764582121925614LLU;
int64_t x201 = INT64_MAX;
static volatile uint16_t x218 = UINT16_MAX;
volatile uint64_t x219 = 150097LLU;
uint64_t x223 = UINT64_MAX;
uint64_t t46 = 1888236820056729906LLU;
int8_t x229 = INT8_MIN;
static int64_t x231 = -2248900098377183204LL;
int64_t t48 = -3401811107075LL;
int16_t x234 = INT16_MIN;
int64_t x237 = INT64_MIN;
uint16_t x239 = UINT16_MAX;
int64_t x240 = 28467686754284149LL;
int64_t x242 = -1LL;
volatile uint64_t x243 = UINT64_MAX;
static uint16_t x244 = 14597U;
static uint64_t t51 = 67703835LLU;
static uint32_t x246 = UINT32_MAX;
int32_t x253 = 44294;
int64_t x256 = INT64_MIN;
int32_t x262 = -1;
int64_t t56 = -514700LL;
uint16_t x276 = 9614U;
int16_t x277 = INT16_MIN;
int32_t t61 = 0;
static volatile int8_t x301 = INT8_MIN;
volatile int8_t x304 = INT8_MAX;
volatile uint64_t t63 = 1480323497275498993LLU;
uint8_t x324 = 6U;
static volatile int32_t x325 = 478096164;
int32_t x327 = INT32_MIN;
int8_t x329 = -59;
uint16_t x331 = UINT16_MAX;
volatile int64_t x333 = INT64_MIN;
static uint32_t x336 = UINT32_MAX;
volatile int64_t t68 = -79130332665LL;
uint32_t x338 = UINT32_MAX;
int32_t x343 = 1690;
int16_t x350 = INT16_MAX;
static volatile uint32_t x351 = 516755U;
int16_t x355 = -7381;
static volatile uint64_t x366 = 2751065783660587357LLU;
static int8_t x371 = 36;
volatile uint32_t t76 = 3784738U;
int64_t x374 = INT64_MIN;
int8_t x376 = INT8_MAX;
int64_t x386 = INT64_MIN;
uint64_t x387 = 100579613934LLU;
int32_t x388 = -1;
int64_t t80 = -87LL;
int8_t x394 = INT8_MAX;
uint32_t x397 = 39221700U;
uint32_t x399 = UINT32_MAX;
int32_t x400 = -1;
static volatile uint32_t t82 = 1806U;
uint16_t x404 = 342U;
static int8_t x407 = -19;
int16_t x408 = -1;
uint64_t x417 = UINT64_MAX;
volatile uint64_t t87 = 95015774LLU;
volatile int64_t t92 = 223LL;
uint64_t x443 = UINT64_MAX;
static uint64_t t93 = 3LLU;
int8_t x445 = -1;
static uint64_t t94 = 268793262LLU;
int64_t x449 = INT64_MAX;
int8_t x450 = -1;
int64_t t95 = -699602LL;
volatile int8_t x453 = -1;
static volatile int32_t x456 = INT32_MIN;
volatile int32_t x459 = -1;
static int64_t x463 = 93036197LL;
int8_t x468 = -1;
volatile int32_t t99 = -1421011;


void f0(void) {
	int32_t x1 = 935;
	volatile int8_t x2 = 1;
	uint32_t x3 = 11542886U;
	static int32_t x4 = INT32_MIN;

	t0 = (x1^(x2*(x3%x4)));

	if (t0 != 11543233U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	int16_t x6 = 0;
	int8_t x8 = INT8_MIN;
	volatile uint32_t t1 = 2U;

	t1 = (x5^(x6*(x7%x8)));

	if (t1 != 32767U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 204260902;
	static uint16_t x10 = UINT16_MAX;
	int32_t x12 = INT32_MIN;
	static volatile int64_t t2 = 28106LL;

	t2 = (x9^(x10*(x11%x12)));

	if (t2 != 18481589784666LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	int8_t x14 = -15;
	uint32_t x15 = 2225U;
	uint64_t x16 = 4574523592997964127LLU;
	uint64_t t3 = 307775LLU;

	t3 = (x13^(x14*(x15%x16)));

	if (t3 != 33374LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 1868984075993897327LLU;
	uint32_t x18 = 1931396378U;
	int8_t x20 = -1;
	uint64_t t4 = 31431227LLU;

	t4 = (x17^(x18*(x19%x20)));

	if (t4 != 1868984075993897327LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x23 = INT8_MAX;
	int8_t x24 = 1;

	t5 = (x21^(x22*(x23%x24)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -14LL;
	static int8_t x26 = -1;
	uint32_t x27 = 3U;
	uint16_t x28 = 1339U;
	volatile int64_t t6 = 111400156368822LL;

	t6 = (x25^(x26*(x27%x28)));

	if (t6 != -4294967281LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x30 = UINT64_MAX;
	volatile int32_t x31 = INT32_MAX;
	volatile uint64_t x32 = 70186101104626529LLU;
	uint64_t t7 = 10670857LLU;

	t7 = (x29^(x30*(x31%x32)));

	if (t7 != 18446744071562081078LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = 99979377;
	int16_t x35 = -1;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 6;

	t8 = (x33^(x34*(x35%x36)));

	if (t8 != -100003728) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x41 = UINT32_MAX;
	uint32_t x42 = 348175277U;
	uint8_t x43 = UINT8_MAX;
	int32_t x44 = INT32_MIN;
	volatile uint32_t t9 = 934078251U;

	t9 = (x41^(x42*(x43%x44)));

	if (t9 != 1409617580U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 463574LLU;
	volatile int64_t x50 = INT64_MIN;
	int32_t x52 = -1;
	uint64_t t10 = 10870574496LLU;

	t10 = (x49^(x50*(x51%x52)));

	if (t10 != 463574LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x54 = -1;
	int16_t x55 = INT16_MAX;
	static int64_t x56 = -1LL;
	int64_t t11 = INT64_MIN;

	t11 = (x53^(x54*(x55%x56)));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x58 = 7U;
	static int64_t t12 = 198564173LL;

	t12 = (x57^(x58*(x59%x60)));

	if (t12 != 17863LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = -1LL;
	uint32_t x62 = 12411595U;
	int32_t x63 = -3;
	static int64_t t13 = -222LL;

	t13 = (x61^(x62*(x63%x64)));

	if (t13 != -4257732512LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -62;
	int16_t x67 = INT16_MIN;
	int64_t t14 = 507LL;

	t14 = (x65^(x66*(x67%x68)));

	if (t14 != -70368744177726LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x70 = -1LL;
	int32_t x71 = -1;
	int64_t x72 = INT64_MIN;
	static int64_t t15 = 931LL;

	t15 = (x69^(x70*(x71%x72)));

	if (t15 != -2LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = UINT16_MAX;
	uint64_t x78 = UINT64_MAX;
	uint16_t x79 = 0U;
	uint16_t x80 = UINT16_MAX;
	static uint64_t t16 = 7LLU;

	t16 = (x77^(x78*(x79%x80)));

	if (t16 != 65535LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x81 = -1LL;
	int32_t x82 = -145830;
	int16_t x83 = INT16_MAX;
	uint8_t x84 = UINT8_MAX;
	volatile int64_t t17 = -76LL;

	t17 = (x81^(x82*(x83%x84)));

	if (t17 != 18520409LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 1082126794LLU;
	int32_t x86 = -94157982;
	static volatile int16_t x87 = 0;
	volatile uint64_t t18 = 8LLU;

	t18 = (x85^(x86*(x87%x88)));

	if (t18 != 1082126794LLU) { NG(); } else { ; }
	
}

void f19(void) {


	t19 = (x89^(x90*(x91%x92)));

	if (t19 != 661815361535LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x93 = -1;
	volatile int16_t x94 = 3;
	volatile int8_t x95 = -63;
	volatile int32_t x96 = -1;
	volatile int32_t t20 = -4457;

	t20 = (x93^(x94*(x95%x96)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MAX;
	int16_t x98 = -2089;
	static int64_t x100 = 82765886564737LL;
	int64_t t21 = 117818051190LL;

	t21 = (x97^(x98*(x99%x100)));

	if (t21 != -4067246LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x102 = 333769788294LLU;
	uint64_t x103 = 1577LLU;
	volatile uint64_t t22 = 33184890554294442LLU;

	t22 = (x101^(x102*(x103%x104)));

	if (t22 != 526354956139644LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	int64_t x111 = -1LL;
	uint16_t x112 = 6418U;
	int64_t t23 = -220819939071084LL;

	t23 = (x109^(x110*(x111%x112)));

	if (t23 != 2147483594LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -1LL;
	int8_t x114 = INT8_MAX;
	static int8_t x115 = INT8_MIN;
	volatile int64_t x116 = INT64_MIN;
	volatile int64_t t24 = -261121259LL;

	t24 = (x113^(x114*(x115%x116)));

	if (t24 != 16255LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = 3763316;
	int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MIN;
	uint32_t x120 = 15837761U;
	uint32_t t25 = 13335930U;

	t25 = (x117^(x118*(x119%x120)));

	if (t25 != 2644438132U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x129 = UINT64_MAX;
	volatile uint32_t x130 = 27782U;
	static volatile uint16_t x131 = 787U;
	int32_t x132 = INT32_MAX;
	volatile uint64_t t26 = 1819LLU;

	t26 = (x129^(x130*(x131%x132)));

	if (t26 != 18446744073687687181LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = 0;
	int8_t x135 = -1;
	volatile int32_t x136 = INT32_MIN;
	volatile int32_t t27 = INT32_MIN;

	t27 = (x133^(x134*(x135%x136)));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x137 = UINT64_MAX;
	volatile int16_t x138 = -497;
	int8_t x139 = -52;
	static volatile int16_t x140 = INT16_MIN;
	static volatile uint64_t t28 = 32498947492907955LLU;

	t28 = (x137^(x138*(x139%x140)));

	if (t28 != 18446744073709525771LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x141 = UINT16_MAX;
	uint32_t x142 = 131956U;
	static uint16_t x144 = 113U;
	volatile uint32_t t29 = 17418160U;

	t29 = (x141^(x142*(x143%x144)));

	if (t29 != 4280319819U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x155 = -1;
	volatile int32_t x156 = 1;
	static int32_t t30 = -15823335;

	t30 = (x153^(x154*(x155%x156)));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint8_t x157 = 0U;
	uint64_t x158 = 8750976786780LLU;
	volatile int8_t x159 = INT8_MIN;
	volatile uint64_t t31 = 521307325301LLU;

	t31 = (x157^(x158*(x159%x160)));

	if (t31 != 5332978621855516208LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x161 = 81600011501524635LLU;
	int8_t x162 = INT8_MAX;
	int64_t x163 = INT64_MIN;
	volatile int32_t x164 = INT32_MIN;
	static uint64_t t32 = 4416546344303259LLU;

	t32 = (x161^(x162*(x163%x164)));

	if (t32 != 81600011501524635LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x165 = INT64_MAX;
	uint8_t x167 = 1U;
	static uint32_t x168 = 468296768U;

	t33 = (x165^(x166*(x167%x168)));

	if (t33 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x173 = 297U;
	int8_t x174 = 1;
	int64_t x175 = -1LL;
	int64_t t34 = -172LL;

	t34 = (x173^(x174*(x175%x176)));

	if (t34 != 297LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x177 = UINT16_MAX;
	int8_t x178 = -1;
	static volatile int8_t x179 = INT8_MIN;
	static uint8_t x180 = UINT8_MAX;

	t35 = (x177^(x178*(x179%x180)));

	if (t35 != 65407) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x182 = 6;
	uint32_t x183 = UINT32_MAX;
	volatile int64_t x184 = INT64_MAX;
	volatile int64_t t36 = -63366LL;

	t36 = (x181^(x182*(x183%x184)));

	if (t36 != 25769803718LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x185 = 77U;
	uint16_t x186 = UINT16_MAX;
	uint16_t x187 = UINT16_MAX;
	volatile uint16_t x188 = UINT16_MAX;
	volatile int32_t t37 = -10148;

	t37 = (x185^(x186*(x187%x188)));

	if (t37 != 77) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x189 = -1LL;
	int64_t x190 = -1LL;
	int8_t x191 = 39;
	static int64_t t38 = -3735510002LL;

	t38 = (x189^(x190*(x191%x192)));

	if (t38 != 38LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x193 = 1051345045192LL;
	int8_t x196 = 1;

	t39 = (x193^(x194*(x195%x196)));

	if (t39 != 1051345045192LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x197 = INT16_MIN;
	int32_t x198 = -131653;
	volatile int32_t x199 = -1;
	int64_t x200 = INT64_MIN;
	static volatile int64_t t40 = 18291045075767699LL;

	t40 = (x197^(x198*(x199%x200)));

	if (t40 != -163259LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x202 = 10U;
	uint8_t x203 = UINT8_MAX;
	static int32_t x204 = -1;
	int64_t t41 = INT64_MAX;

	t41 = (x201^(x202*(x203%x204)));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x205 = -371;
	int16_t x206 = -1;
	int64_t x207 = -1843LL;
	int16_t x208 = INT16_MIN;
	int64_t t42 = -2LL;

	t42 = (x205^(x206*(x207%x208)));

	if (t42 != -1602LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x209 = -1;
	int64_t x210 = -1LL;
	volatile uint64_t x211 = UINT64_MAX;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x209^(x210*(x211%x212)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x213 = 252832056114453503LLU;
	int64_t x214 = INT64_MIN;
	volatile uint32_t x215 = 865508306U;
	uint64_t x216 = 824416LLU;
	uint64_t t44 = 4LLU;

	t44 = (x213^(x214*(x215%x216)));

	if (t44 != 252832056114453503LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x217 = 174307675339309699LL;
	int64_t x220 = 1LL;
	uint64_t t45 = 300322510685LLU;

	t45 = (x217^(x218*(x219%x220)));

	if (t45 != 174307675339309699LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x221 = 2U;
	uint32_t x222 = 3824893U;
	int32_t x224 = -1;

	t46 = (x221^(x222*(x223%x224)));

	if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x225 = 407LL;
	static uint64_t x226 = 27370031889LLU;
	volatile uint64_t x227 = UINT64_MAX;
	static int32_t x228 = -1;
	volatile uint64_t t47 = 390148380659937037LLU;

	t47 = (x225^(x226*(x227%x228)));

	if (t47 != 407LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x230 = UINT8_MAX;
	uint16_t x232 = 10684U;

	t48 = (x229^(x230*(x231%x232)));

	if (t48 != 1961356LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x233 = 23U;
	uint8_t x235 = UINT8_MAX;
	uint64_t x236 = 369097537089LLU;
	uint64_t t49 = 5567911539LLU;

	t49 = (x233^(x234*(x235%x236)));

	if (t49 != 18446744073701195799LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x238 = UINT32_MAX;
	int64_t t50 = -95994LL;

	t50 = (x237^(x238*(x239%x240)));

	if (t50 != -9223090566173097983LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x241 = 29256233688143LLU;

	t51 = (x241^(x242*(x243%x244)));

	if (t51 != 18446714817475857198LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x245 = UINT8_MAX;
	int16_t x247 = -3;
	volatile int64_t x248 = 7223LL;
	volatile int64_t t52 = -18030938LL;

	t52 = (x245^(x246*(x247%x248)));

	if (t52 != -12884901636LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x249 = 510LLU;
	static volatile int32_t x250 = -129170066;
	int8_t x251 = 0;
	int16_t x252 = INT16_MIN;
	volatile uint64_t t53 = 251245912LLU;

	t53 = (x249^(x250*(x251%x252)));

	if (t53 != 510LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x254 = 4U;
	static uint8_t x255 = 15U;
	int64_t t54 = 400LL;

	t54 = (x253^(x254*(x255%x256)));

	if (t54 != 44346LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x257 = 5186726594LLU;
	int16_t x258 = INT16_MIN;
	volatile uint32_t x259 = 1U;
	int16_t x260 = 2;
	volatile uint64_t t55 = 5117832LLU;

	t55 = (x257^(x258*(x259%x260)));

	if (t55 != 7698164418LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = -177;
	int64_t x263 = -71929557LL;
	volatile int64_t x264 = INT64_MIN;

	t56 = (x261^(x262*(x263%x264)));

	if (t56 != -71929446LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x273 = UINT16_MAX;
	uint8_t x274 = 22U;
	int16_t x275 = -253;
	volatile int32_t t57 = 153;

	t57 = (x273^(x274*(x275%x276)));

	if (t57 != -59971) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x278 = UINT16_MAX;
	int32_t x279 = INT32_MIN;
	volatile uint16_t x280 = 61U;
	static volatile int32_t t58 = -155;

	t58 = (x277^(x278*(x279%x280)));

	if (t58 != 3833915) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x289 = INT8_MAX;
	static uint8_t x290 = UINT8_MAX;
	static uint32_t x291 = 29009U;
	int64_t x292 = INT64_MIN;
	volatile int64_t t59 = 0LL;

	t59 = (x289^(x290*(x291%x292)));

	if (t59 != 7397328LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x293 = 13837U;
	int64_t x294 = INT64_MAX;
	int8_t x295 = 13;
	static volatile uint64_t x296 = UINT64_MAX;
	volatile uint64_t t60 = 16861428874LLU;

	t60 = (x293^(x294*(x295%x296)));

	if (t60 != 9223372036854761982LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x297 = 37U;
	int8_t x298 = 0;
	int32_t x299 = INT32_MAX;
	uint16_t x300 = UINT16_MAX;

	t61 = (x297^(x298*(x299%x300)));

	if (t61 != 37) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x302 = 0;
	int32_t x303 = INT32_MAX;
	static volatile int32_t t62 = -2619474;

	t62 = (x301^(x302*(x303%x304)));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x305 = -1;
	volatile int64_t x306 = INT64_MAX;
	static uint64_t x307 = 1024366909LLU;
	volatile uint64_t x308 = UINT64_MAX;

	t63 = (x305^(x306*(x307%x308)));

	if (t63 != 9223372037879142716LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x313 = -13088;
	uint8_t x314 = UINT8_MAX;
	int32_t x315 = 5293;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t64 = 264362991115093LLU;

	t64 = (x313^(x314*(x315%x316)));

	if (t64 != 18446744073708197043LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x321 = UINT32_MAX;
	static int16_t x322 = INT16_MIN;
	uint64_t x323 = 8068LLU;
	volatile uint64_t t65 = 866350704392LLU;

	t65 = (x321^(x322*(x323%x324)));

	if (t65 != 18446744069414715391LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x326 = 3LLU;
	int16_t x328 = 99;
	volatile uint64_t t66 = 1443438LLU;

	t66 = (x325^(x326*(x327%x328)));

	if (t66 != 18446744073231455454LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x330 = 3U;
	uint64_t x332 = 16607561440794LLU;
	static uint64_t t67 = 320LLU;

	t67 = (x329^(x330*(x331%x332)));

	if (t67 != 18446744073709355064LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x334 = 72U;
	uint32_t x335 = 3623U;

	t68 = (x333^(x334*(x335%x336)));

	if (t68 != -9223372036854514952LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x337 = 46U;
	int64_t x339 = 1036768050584078LL;
	int16_t x340 = INT16_MIN;
	int64_t t69 = 389103LL;

	t69 = (x337^(x338*(x339%x340)));

	if (t69 != 28647431857628LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MIN;
	int16_t x344 = -1;
	int64_t t70 = -13830LL;

	t70 = (x341^(x342*(x343%x344)));

	if (t70 != -128LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x345 = 313426125U;
	static int32_t x346 = INT32_MAX;
	static int64_t x347 = -1LL;
	volatile uint32_t x348 = 38U;
	static int64_t t71 = -59782613750896LL;

	t71 = (x345^(x346*(x347%x348)));

	if (t71 != -1834057524LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x349 = -1LL;
	int32_t x352 = -1;
	static volatile int64_t t72 = 207754545060660LL;

	t72 = (x349^(x350*(x351%x352)));

	if (t72 != -4047609198LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x353 = 105;
	static volatile int8_t x354 = -1;
	static uint64_t x356 = 2557028849293LLU;
	uint64_t t73 = 177533052823033181LLU;

	t73 = (x353^(x354*(x355%x356)));

	if (t73 != 18446743646607815952LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x361 = 1850U;
	volatile int8_t x362 = INT8_MAX;
	static int8_t x363 = INT8_MIN;
	volatile uint32_t x364 = 251361U;
	static uint32_t t74 = 25358U;

	t74 = (x361^(x362*(x363%x364)));

	if (t74 != 27068228U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x365 = INT32_MAX;
	int16_t x367 = INT16_MIN;
	static volatile int8_t x368 = INT8_MIN;
	volatile uint64_t t75 = 4414708LLU;

	t75 = (x365^(x366*(x367%x368)));

	if (t75 != 2147483647LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x369 = UINT32_MAX;
	uint16_t x370 = 158U;
	int32_t x372 = INT32_MIN;

	t76 = (x369^(x370*(x371%x372)));

	if (t76 != 4294961607U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x373 = 11591;
	uint8_t x375 = UINT8_MAX;
	static int64_t t77 = 1471020088183704836LL;

	t77 = (x373^(x374*(x375%x376)));

	if (t77 != -9223372036854764217LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x377 = -4;
	static volatile int8_t x378 = -1;
	int16_t x379 = -1;
	int16_t x380 = -137;
	int32_t t78 = -17;

	t78 = (x377^(x378*(x379%x380)));

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x385 = INT16_MIN;
	volatile uint64_t t79 = 31750LLU;

	t79 = (x385^(x386*(x387%x388)));

	if (t79 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x389 = -1;
	volatile int8_t x390 = -1;
	uint16_t x391 = UINT16_MAX;
	int64_t x392 = -1LL;

	t80 = (x389^(x390*(x391%x392)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x393 = INT64_MAX;
	volatile int16_t x395 = INT16_MIN;
	int16_t x396 = INT16_MAX;
	volatile int64_t t81 = 0LL;

	t81 = (x393^(x394*(x395%x396)));

	if (t81 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x398 = -1;

	t82 = (x397^(x398*(x399%x400)));

	if (t82 != 39221700U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x401 = INT8_MIN;
	volatile uint32_t x402 = 13U;
	int16_t x403 = INT16_MAX;
	volatile uint32_t t83 = 10755U;

	t83 = (x401^(x402*(x403%x404)));

	if (t83 != 4294963601U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x405 = 38194264201114LL;
	int64_t x406 = INT64_MIN;
	volatile int64_t t84 = -1876791067LL;

	t84 = (x405^(x406*(x407%x408)));

	if (t84 != 38194264201114LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x409 = 2143537448LL;
	volatile uint16_t x410 = 253U;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MIN;
	int64_t t85 = 30LL;

	t85 = (x409^(x410*(x411%x412)));

	if (t85 != 2143532203LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x413 = 29650U;
	int64_t x414 = 113125994237245LL;
	uint8_t x415 = 99U;
	volatile int8_t x416 = INT8_MIN;
	volatile int64_t t86 = -219774910LL;

	t86 = (x413^(x414*(x415%x416)));

	if (t86 != 11199473429507397LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x418 = -1138;
	volatile int8_t x419 = 2;
	uint32_t x420 = 139893U;

	t87 = (x417^(x418*(x419%x420)));

	if (t87 != 18446744069414586595LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x421 = INT32_MIN;
	uint8_t x422 = 14U;
	static int32_t x423 = INT32_MAX;
	volatile uint32_t x424 = 3065749U;
	volatile uint32_t t88 = 932U;

	t88 = (x421^(x422*(x423%x424)));

	if (t88 != 2167914506U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x425 = INT32_MAX;
	int8_t x426 = INT8_MIN;
	volatile int16_t x427 = INT16_MAX;
	static uint16_t x428 = 120U;
	int32_t t89 = 1033459;

	t89 = (x425^(x426*(x427%x428)));

	if (t89 != -2147482753) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x429 = INT32_MIN;
	static int8_t x430 = -1;
	static int32_t x431 = -1;
	static int16_t x432 = INT16_MIN;
	int32_t t90 = 518;

	t90 = (x429^(x430*(x431%x432)));

	if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x433 = 1;
	int8_t x434 = 1;
	uint8_t x435 = 101U;
	int64_t x436 = -1LL;
	int64_t t91 = -314328635LL;

	t91 = (x433^(x434*(x435%x436)));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = -3478LL;
	int8_t x438 = INT8_MIN;
	static uint16_t x439 = 691U;
	uint32_t x440 = 649978U;

	t92 = (x437^(x438*(x439%x440)));

	if (t92 != -4294880022LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x441 = INT32_MAX;
	uint16_t x442 = UINT16_MAX;
	volatile int64_t x444 = INT64_MIN;

	t93 = (x441^(x442*(x443%x444)));

	if (t93 != 9223372034707357694LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x446 = INT16_MAX;
	uint64_t x447 = 486841912LLU;
	int64_t x448 = INT64_MAX;

	t94 = (x445^(x446*(x447%x448)));

	if (t94 != 18446728121360621111LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x451 = INT32_MAX;
	int32_t x452 = INT32_MIN;

	t95 = (x449^(x450*(x451%x452)));

	if (t95 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x454 = -138;
	int16_t x455 = 6;
	int32_t t96 = -624;

	t96 = (x453^(x454*(x455%x456)));

	if (t96 != 827) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x457 = INT64_MIN;
	uint32_t x458 = 35465U;
	int16_t x460 = INT16_MAX;
	volatile int64_t t97 = -669454114869222280LL;

	t97 = (x457^(x458*(x459%x460)));

	if (t97 != -9223372032559843977LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x461 = INT8_MAX;
	static uint16_t x462 = 2539U;
	uint64_t x464 = 8784070724599LLU;
	uint64_t t98 = 24864712702983LLU;

	t98 = (x461^(x462*(x463%x464)));

	if (t98 != 236218904072LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x465 = INT8_MIN;
	static int16_t x466 = -1;
	int32_t x467 = 438193582;

	t99 = (x465^(x466*(x467%x468)));

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

