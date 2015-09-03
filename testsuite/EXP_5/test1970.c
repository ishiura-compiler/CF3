#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
uint8_t x5 = 49U;
int64_t x14 = INT64_MIN;
uint32_t x29 = 161U;
int32_t x31 = INT32_MAX;
int64_t x45 = 5245LL;
int16_t x47 = INT16_MIN;
int16_t x48 = 460;
int32_t x53 = INT32_MAX;
volatile uint16_t x57 = 161U;
int16_t x68 = INT16_MIN;
volatile int16_t x96 = -1;
uint8_t x101 = UINT8_MAX;
volatile int64_t x102 = 25346817LL;
volatile uint64_t x105 = 11595258LLU;
static int64_t x107 = -1LL;
volatile uint64_t t15 = 125400764LLU;
static int64_t t16 = 50LL;
volatile int16_t x121 = 1;
int64_t x129 = INT64_MAX;
uint64_t x144 = 58700222LLU;
uint64_t x148 = UINT64_MAX;
static uint32_t t20 = 19487U;
int64_t x151 = 919LL;
int32_t x156 = INT32_MIN;
static int32_t t22 = -3964;
static int32_t x159 = -128783;
uint8_t x169 = 3U;
int32_t t25 = -275642;
volatile int32_t t27 = INT32_MAX;
int64_t x202 = INT64_MAX;
int64_t x229 = 36LL;
int32_t x231 = INT32_MAX;
uint16_t x236 = UINT16_MAX;
int32_t x245 = INT32_MAX;
static int16_t x257 = INT16_MAX;
static int64_t x279 = -50742651277086804LL;
uint32_t x287 = 3210U;
volatile int8_t x291 = -1;
static uint64_t x305 = UINT64_MAX;
uint8_t x320 = UINT8_MAX;
int32_t t40 = 1;
uint16_t x333 = 1U;
static int8_t x334 = INT8_MIN;
static int64_t x336 = INT64_MAX;
volatile int32_t t43 = 2191215;
int8_t x342 = 2;
volatile int16_t x360 = 1;
volatile int16_t x368 = -2769;
int32_t t48 = 501851;
static volatile int16_t x389 = 27;
int16_t x396 = INT16_MAX;
uint8_t x397 = 2U;
static uint64_t x401 = 941446519598148264LLU;
volatile int64_t x402 = -17933536485LL;
int16_t x403 = INT16_MIN;
int64_t x423 = 722259726805726LL;
static volatile int32_t t57 = -3012534;
volatile int32_t x431 = -128247;
uint16_t x445 = UINT16_MAX;
volatile int64_t x451 = -1LL;
uint32_t x453 = 176188U;
int32_t x457 = INT32_MAX;
uint8_t x460 = 0U;
volatile int32_t t62 = INT32_MAX;
volatile int32_t t64 = -77990814;
volatile uint32_t t65 = 130975097U;
volatile int64_t x482 = INT64_MAX;
static volatile int64_t x489 = INT64_MAX;
volatile int64_t t67 = -9747004LL;
volatile uint64_t x493 = 1663917LLU;
static int16_t x497 = INT16_MAX;
uint16_t x498 = 52U;
int64_t x499 = INT64_MAX;
uint16_t x513 = 0U;
static int16_t x516 = INT16_MIN;
volatile int32_t t70 = -43;
volatile int16_t x517 = INT16_MAX;
static int32_t t71 = -275;
uint8_t x524 = 5U;
int32_t t72 = -6975;
int32_t t75 = 3748;
int64_t x542 = -1LL;
static volatile int8_t x544 = INT8_MIN;
volatile int16_t x565 = 12000;
volatile int32_t t77 = -168702443;
uint64_t t78 = 320072856225789085LLU;
int64_t x582 = 8475492LL;
uint32_t x618 = 619501U;
uint32_t x626 = 17699746U;
static int32_t x638 = INT32_MIN;
int8_t x643 = 0;
static int32_t t86 = -1;
uint64_t x653 = UINT64_MAX;
volatile uint32_t x656 = UINT32_MAX;
volatile int32_t t89 = -4183515;
volatile int32_t t92 = 247;
uint32_t t94 = 173156U;
int64_t x693 = INT64_MAX;
volatile int64_t x698 = -1LL;
uint32_t x699 = 332356U;
volatile uint32_t t98 = 1628372U;
static int32_t x713 = 4;


void f0(void) {
	static int32_t x2 = INT32_MAX;
	int8_t x3 = INT8_MAX;
	static int64_t x4 = -617961319805084LL;
	static int32_t t0 = INT32_MAX;

	t0 = (x1>>((x2|x3)<x4));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	static volatile int64_t x7 = -1LL;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = -69836;

	t1 = (x5>>((x6|x7)<x8));

	if (t1 != 49) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	int8_t x15 = INT8_MIN;
	int16_t x16 = -1;
	volatile uint32_t t2 = 6395935U;

	t2 = (x13>>((x14|x15)<x16));

	if (t2 != 2147483647U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 80;
	int32_t x18 = -1;
	int64_t x19 = INT64_MIN;
	volatile int8_t x20 = INT8_MIN;
	int32_t t3 = 55541828;

	t3 = (x17>>((x18|x19)<x20));

	if (t3 != 80) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x30 = INT8_MAX;
	uint64_t x32 = UINT64_MAX;
	uint32_t t4 = 1949U;

	t4 = (x29>>((x30|x31)<x32));

	if (t4 != 80U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = UINT8_MAX;
	volatile int32_t x34 = INT32_MIN;
	int8_t x35 = 15;
	volatile int32_t x36 = INT32_MAX;
	int32_t t5 = 990659;

	t5 = (x33>>((x34|x35)<x36));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x37 = 0U;
	int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MAX;
	int32_t x40 = INT32_MAX;
	int32_t t6 = 1;

	t6 = (x37>>((x38|x39)<x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x46 = -1054120LL;
	static int64_t t7 = 6996164921LL;

	t7 = (x45>>((x46|x47)<x48));

	if (t7 != 2622LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x54 = INT32_MAX;
	int8_t x55 = -2;
	int32_t x56 = INT32_MAX;
	volatile int32_t t8 = -104472;

	t8 = (x53>>((x54|x55)<x56));

	if (t8 != 1073741823) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x58 = INT32_MIN;
	uint32_t x59 = UINT32_MAX;
	int64_t x60 = -1LL;
	volatile int32_t t9 = -28612059;

	t9 = (x57>>((x58|x59)<x60));

	if (t9 != 161) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x61 = 7U;
	int64_t x62 = -324614125LL;
	volatile int32_t x63 = -195738004;
	volatile uint64_t x64 = UINT64_MAX;
	int32_t t10 = -153;

	t10 = (x61>>((x62|x63)<x64));

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x65 = INT32_MAX;
	int64_t x66 = -59059384579085LL;
	static uint64_t x67 = 631090265598089933LLU;
	int32_t t11 = -30;

	t11 = (x65>>((x66|x67)<x68));

	if (t11 != 1073741823) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = UINT16_MAX;
	int8_t x70 = 0;
	int64_t x71 = INT64_MIN;
	static int8_t x72 = INT8_MAX;
	volatile int32_t t12 = 28;

	t12 = (x69>>((x70|x71)<x72));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x93 = 8U;
	volatile uint64_t x94 = 703466LLU;
	int32_t x95 = -5;
	volatile int32_t t13 = 1563;

	t13 = (x93>>((x94|x95)<x96));

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x103 = -1;
	uint16_t x104 = 9U;
	static int32_t t14 = 3764634;

	t14 = (x101>>((x102|x103)<x104));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x106 = 408362394186055LL;
	int16_t x108 = 0;

	t15 = (x105>>((x106|x107)<x108));

	if (t15 != 5797629LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x117 = 3483131587885723800LL;
	int8_t x118 = 5;
	uint64_t x119 = UINT64_MAX;
	volatile uint64_t x120 = 0LLU;

	t16 = (x117>>((x118|x119)<x120));

	if (t16 != 3483131587885723800LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x122 = 1U;
	int16_t x123 = -1;
	uint64_t x124 = 18468310854184LLU;
	int32_t t17 = -361310;

	t17 = (x121>>((x122|x123)<x124));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x130 = 22;
	static int8_t x131 = INT8_MIN;
	static uint64_t x132 = 0LLU;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x129>>((x130|x131)<x132));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x141 = 305163414U;
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = INT64_MIN;
	volatile uint32_t t19 = 247205U;

	t19 = (x141>>((x142|x143)<x144));

	if (t19 != 305163414U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x145 = UINT32_MAX;
	int32_t x146 = -140;
	int8_t x147 = INT8_MIN;

	t20 = (x145>>((x146|x147)<x148));

	if (t20 != 2147483647U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x149 = UINT16_MAX;
	int64_t x150 = INT64_MAX;
	int8_t x152 = 1;
	int32_t t21 = 345;

	t21 = (x149>>((x150|x151)<x152));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x153 = 649U;
	int8_t x154 = 6;
	int64_t x155 = INT64_MIN;

	t22 = (x153>>((x154|x155)<x156));

	if (t22 != 324) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x157 = 25U;
	volatile int32_t x158 = INT32_MIN;
	int16_t x160 = 97;
	int32_t t23 = 2440612;

	t23 = (x157>>((x158|x159)<x160));

	if (t23 != 12) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x165 = INT32_MAX;
	static int16_t x166 = -1;
	uint8_t x167 = 4U;
	int16_t x168 = INT16_MIN;
	int32_t t24 = INT32_MAX;

	t24 = (x165>>((x166|x167)<x168));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x170 = -1;
	uint64_t x171 = 1413186390520LLU;
	static uint32_t x172 = 2512U;

	t25 = (x169>>((x170|x171)<x172));

	if (t25 != 3) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x181 = INT64_MAX;
	static int8_t x182 = INT8_MIN;
	static int32_t x183 = INT32_MIN;
	int8_t x184 = -1;
	int64_t t26 = 234678586557100LL;

	t26 = (x181>>((x182|x183)<x184));

	if (t26 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x185 = INT32_MAX;
	int16_t x186 = INT16_MAX;
	int8_t x187 = -1;
	volatile int64_t x188 = INT64_MIN;

	t27 = (x185>>((x186|x187)<x188));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x189 = 476;
	static uint8_t x190 = 3U;
	volatile int8_t x191 = INT8_MIN;
	static int8_t x192 = -1;
	volatile int32_t t28 = -363799;

	t28 = (x189>>((x190|x191)<x192));

	if (t28 != 238) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x197 = 3U;
	int16_t x198 = INT16_MAX;
	uint8_t x199 = 5U;
	int8_t x200 = -1;
	volatile int32_t t29 = -784495567;

	t29 = (x197>>((x198|x199)<x200));

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x201 = UINT64_MAX;
	uint16_t x203 = UINT16_MAX;
	uint32_t x204 = 3612U;
	static uint64_t t30 = UINT64_MAX;

	t30 = (x201>>((x202|x203)<x204));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x209 = 573U;
	uint64_t x210 = 148101LLU;
	int64_t x211 = INT64_MAX;
	int8_t x212 = -55;
	volatile int32_t t31 = 2163;

	t31 = (x209>>((x210|x211)<x212));

	if (t31 != 286) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x230 = INT64_MAX;
	static int16_t x232 = INT16_MIN;
	int64_t t32 = 1LL;

	t32 = (x229>>((x230|x231)<x232));

	if (t32 != 36LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x233 = INT8_MAX;
	int16_t x234 = -1;
	int64_t x235 = -1LL;
	volatile int32_t t33 = -133;

	t33 = (x233>>((x234|x235)<x236));

	if (t33 != 63) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x246 = 204;
	int8_t x247 = INT8_MIN;
	int64_t x248 = INT64_MIN;
	volatile int32_t t34 = INT32_MAX;

	t34 = (x245>>((x246|x247)<x248));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x258 = 52;
	uint32_t x259 = 55255U;
	static int32_t x260 = INT32_MIN;
	int32_t t35 = -197762159;

	t35 = (x257>>((x258|x259)<x260));

	if (t35 != 16383) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x277 = 15U;
	int16_t x278 = 25;
	uint16_t x280 = UINT16_MAX;
	int32_t t36 = -146349;

	t36 = (x277>>((x278|x279)<x280));

	if (t36 != 7) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x285 = 1;
	uint8_t x286 = 0U;
	uint8_t x288 = 11U;
	int32_t t37 = -300909;

	t37 = (x285>>((x286|x287)<x288));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x289 = 0;
	int16_t x290 = -1;
	uint64_t x292 = 478520369LLU;
	volatile int32_t t38 = -19;

	t38 = (x289>>((x290|x291)<x292));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x306 = UINT32_MAX;
	volatile int16_t x307 = INT16_MIN;
	volatile uint16_t x308 = 14538U;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (x305>>((x306|x307)<x308));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x317 = 15U;
	static volatile int32_t x318 = INT32_MIN;
	uint64_t x319 = 16876542520272668LLU;

	t40 = (x317>>((x318|x319)<x320));

	if (t40 != 15) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x321 = 1977U;
	volatile int8_t x322 = INT8_MIN;
	int64_t x323 = 23LL;
	uint64_t x324 = UINT64_MAX;
	int32_t t41 = 302;

	t41 = (x321>>((x322|x323)<x324));

	if (t41 != 988) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x325 = INT16_MAX;
	int16_t x326 = -1;
	uint32_t x327 = 3937367U;
	static int32_t x328 = INT32_MAX;
	static volatile int32_t t42 = -4;

	t42 = (x325>>((x326|x327)<x328));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x335 = UINT32_MAX;

	t43 = (x333>>((x334|x335)<x336));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x341 = 52;
	static int16_t x343 = -1;
	static volatile int16_t x344 = 1;
	static volatile int32_t t44 = -362798339;

	t44 = (x341>>((x342|x343)<x344));

	if (t44 != 26) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x345 = 9107286U;
	int16_t x346 = INT16_MIN;
	uint16_t x347 = 3U;
	int64_t x348 = INT64_MIN;
	static volatile uint32_t t45 = 1020U;

	t45 = (x345>>((x346|x347)<x348));

	if (t45 != 9107286U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x357 = 26U;
	uint8_t x358 = UINT8_MAX;
	int8_t x359 = 6;
	static uint32_t t46 = 6720U;

	t46 = (x357>>((x358|x359)<x360));

	if (t46 != 26U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x361 = 40;
	volatile int8_t x362 = INT8_MIN;
	int8_t x363 = -2;
	static int64_t x364 = INT64_MIN;
	static volatile int32_t t47 = 15245;

	t47 = (x361>>((x362|x363)<x364));

	if (t47 != 40) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x365 = 10;
	int16_t x366 = INT16_MIN;
	int64_t x367 = -1LL;

	t48 = (x365>>((x366|x367)<x368));

	if (t48 != 10) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x373 = 29U;
	int64_t x374 = -1LL;
	uint32_t x375 = 0U;
	int16_t x376 = -1;
	int32_t t49 = -57689059;

	t49 = (x373>>((x374|x375)<x376));

	if (t49 != 29) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x377 = UINT64_MAX;
	int16_t x378 = -1;
	static int8_t x379 = 17;
	int32_t x380 = INT32_MIN;
	static volatile uint64_t t50 = UINT64_MAX;

	t50 = (x377>>((x378|x379)<x380));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x390 = -1;
	uint64_t x391 = 472849540676773LLU;
	int64_t x392 = INT64_MAX;
	static volatile int32_t t51 = -3832;

	t51 = (x389>>((x390|x391)<x392));

	if (t51 != 27) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x393 = INT64_MAX;
	int64_t x394 = INT64_MIN;
	int8_t x395 = -1;
	volatile int64_t t52 = -1653196952959619221LL;

	t52 = (x393>>((x394|x395)<x396));

	if (t52 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x398 = 236U;
	int64_t x399 = INT64_MIN;
	int16_t x400 = -1;
	static int32_t t53 = -265;

	t53 = (x397>>((x398|x399)<x400));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x404 = UINT8_MAX;
	uint64_t t54 = 2042984696600617835LLU;

	t54 = (x401>>((x402|x403)<x404));

	if (t54 != 470723259799074132LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x413 = INT32_MAX;
	uint32_t x414 = UINT32_MAX;
	uint32_t x415 = UINT32_MAX;
	int32_t x416 = INT32_MIN;
	int32_t t55 = INT32_MAX;

	t55 = (x413>>((x414|x415)<x416));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x421 = UINT8_MAX;
	uint32_t x422 = 14691248U;
	int32_t x424 = INT32_MIN;
	int32_t t56 = -1426446;

	t56 = (x421>>((x422|x423)<x424));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x425 = 468U;
	int16_t x426 = INT16_MAX;
	int64_t x427 = -1LL;
	static uint16_t x428 = 6884U;

	t57 = (x425>>((x426|x427)<x428));

	if (t57 != 234) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x429 = UINT8_MAX;
	volatile uint16_t x430 = 2U;
	int64_t x432 = INT64_MIN;
	volatile int32_t t58 = -2073589;

	t58 = (x429>>((x430|x431)<x432));

	if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x446 = -13637LL;
	static int16_t x447 = 11;
	int64_t x448 = -1596324LL;
	int32_t t59 = -3440012;

	t59 = (x445>>((x446|x447)<x448));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x449 = 84935LL;
	volatile uint64_t x450 = 360631423751LLU;
	volatile uint64_t x452 = 98899127230973LLU;
	int64_t t60 = -460LL;

	t60 = (x449>>((x450|x451)<x452));

	if (t60 != 84935LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x454 = UINT8_MAX;
	volatile int32_t x455 = INT32_MIN;
	static volatile int8_t x456 = INT8_MIN;
	volatile uint32_t t61 = 1U;

	t61 = (x453>>((x454|x455)<x456));

	if (t61 != 88094U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x458 = -1;
	uint32_t x459 = 7U;

	t62 = (x457>>((x458|x459)<x460));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x461 = INT64_MAX;
	static int16_t x462 = INT16_MIN;
	uint8_t x463 = 4U;
	int8_t x464 = -53;
	int64_t t63 = 51LL;

	t63 = (x461>>((x462|x463)<x464));

	if (t63 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x469 = 196U;
	int8_t x470 = INT8_MAX;
	uint16_t x471 = 155U;
	static int64_t x472 = INT64_MIN;

	t64 = (x469>>((x470|x471)<x472));

	if (t64 != 196) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x473 = 1773091U;
	static volatile int32_t x474 = 59033509;
	static int16_t x475 = INT16_MIN;
	volatile int8_t x476 = INT8_MIN;

	t65 = (x473>>((x474|x475)<x476));

	if (t65 != 886545U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x481 = UINT16_MAX;
	uint32_t x483 = UINT32_MAX;
	static volatile uint8_t x484 = UINT8_MAX;
	int32_t t66 = -392485321;

	t66 = (x481>>((x482|x483)<x484));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x490 = -6698;
	static int16_t x491 = -1;
	uint16_t x492 = UINT16_MAX;

	t67 = (x489>>((x490|x491)<x492));

	if (t67 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x494 = 21U;
	volatile int64_t x495 = -1LL;
	volatile int32_t x496 = INT32_MIN;
	volatile uint64_t t68 = 3169666597386284LLU;

	t68 = (x493>>((x494|x495)<x496));

	if (t68 != 1663917LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x500 = 7LLU;
	int32_t t69 = 0;

	t69 = (x497>>((x498|x499)<x500));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x514 = 710861LLU;
	int8_t x515 = -1;

	t70 = (x513>>((x514|x515)<x516));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x518 = UINT8_MAX;
	volatile int32_t x519 = 101;
	int8_t x520 = INT8_MAX;

	t71 = (x517>>((x518|x519)<x520));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x521 = 27U;
	int8_t x522 = -1;
	int64_t x523 = INT64_MAX;

	t72 = (x521>>((x522|x523)<x524));

	if (t72 != 13) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x525 = INT8_MAX;
	int32_t x526 = 249534;
	static int8_t x527 = INT8_MIN;
	int8_t x528 = INT8_MIN;
	int32_t t73 = -4347139;

	t73 = (x525>>((x526|x527)<x528));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x529 = UINT8_MAX;
	static uint16_t x530 = 0U;
	volatile uint8_t x531 = 5U;
	int32_t x532 = -1;
	volatile int32_t t74 = 797536;

	t74 = (x529>>((x530|x531)<x532));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x537 = 10U;
	int64_t x538 = -24055412LL;
	int16_t x539 = INT16_MIN;
	int64_t x540 = INT64_MAX;

	t75 = (x537>>((x538|x539)<x540));

	if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x541 = 2U;
	int64_t x543 = 1488LL;
	int32_t t76 = -34492;

	t76 = (x541>>((x542|x543)<x544));

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x566 = -2;
	static int64_t x567 = INT64_MAX;
	int16_t x568 = INT16_MIN;

	t77 = (x565>>((x566|x567)<x568));

	if (t77 != 12000) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x573 = 381319LLU;
	int32_t x574 = 15;
	int8_t x575 = INT8_MIN;
	int8_t x576 = 58;

	t78 = (x573>>((x574|x575)<x576));

	if (t78 != 190659LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x577 = 1533U;
	static uint64_t x578 = UINT64_MAX;
	int8_t x579 = -52;
	int64_t x580 = 1264418458139306LL;
	volatile int32_t t79 = 7446234;

	t79 = (x577>>((x578|x579)<x580));

	if (t79 != 1533) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x581 = UINT32_MAX;
	int8_t x583 = -2;
	uint16_t x584 = 2U;
	uint32_t t80 = 7198U;

	t80 = (x581>>((x582|x583)<x584));

	if (t80 != 2147483647U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x585 = 746;
	static volatile int16_t x586 = INT16_MAX;
	int32_t x587 = 139809;
	int64_t x588 = INT64_MAX;
	int32_t t81 = -68632808;

	t81 = (x585>>((x586|x587)<x588));

	if (t81 != 373) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x593 = UINT8_MAX;
	static int8_t x594 = -1;
	volatile int16_t x595 = 12847;
	int64_t x596 = 226995LL;
	int32_t t82 = -4;

	t82 = (x593>>((x594|x595)<x596));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x617 = INT16_MAX;
	int32_t x619 = -1;
	int64_t x620 = INT64_MAX;
	static int32_t t83 = -24436;

	t83 = (x617>>((x618|x619)<x620));

	if (t83 != 16383) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x625 = UINT64_MAX;
	int32_t x627 = INT32_MIN;
	volatile int16_t x628 = -1;
	volatile uint64_t t84 = 2481364036LLU;

	t84 = (x625>>((x626|x627)<x628));

	if (t84 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x637 = 0;
	static int16_t x639 = INT16_MIN;
	uint8_t x640 = 10U;
	volatile int32_t t85 = 3577499;

	t85 = (x637>>((x638|x639)<x640));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x641 = 7;
	static int64_t x642 = INT64_MAX;
	int8_t x644 = -1;

	t86 = (x641>>((x642|x643)<x644));

	if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x649 = 40U;
	int16_t x650 = INT16_MIN;
	uint64_t x651 = 74398141LLU;
	uint64_t x652 = 1346LLU;
	uint32_t t87 = 141088U;

	t87 = (x649>>((x650|x651)<x652));

	if (t87 != 40U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x654 = UINT64_MAX;
	volatile int64_t x655 = -1169233237998206LL;
	uint64_t t88 = UINT64_MAX;

	t88 = (x653>>((x654|x655)<x656));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x657 = INT8_MAX;
	int8_t x658 = INT8_MIN;
	static int16_t x659 = 515;
	int16_t x660 = INT16_MIN;

	t89 = (x657>>((x658|x659)<x660));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x661 = 506126857724142LLU;
	volatile uint64_t x662 = 4176957753LLU;
	volatile uint16_t x663 = 7U;
	int32_t x664 = INT32_MAX;
	static volatile uint64_t t90 = 3161368835734LLU;

	t90 = (x661>>((x662|x663)<x664));

	if (t90 != 506126857724142LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x665 = INT16_MAX;
	static int64_t x666 = 380293217226LL;
	int64_t x667 = -1LL;
	volatile int64_t x668 = INT64_MAX;
	volatile int32_t t91 = 30555625;

	t91 = (x665>>((x666|x667)<x668));

	if (t91 != 16383) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x669 = 1U;
	int8_t x670 = -1;
	static volatile uint32_t x671 = 728149U;
	static uint8_t x672 = 1U;

	t92 = (x669>>((x670|x671)<x672));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x677 = 19789797418LL;
	static uint16_t x678 = 6U;
	uint32_t x679 = UINT32_MAX;
	int16_t x680 = 3;
	int64_t t93 = -69503LL;

	t93 = (x677>>((x678|x679)<x680));

	if (t93 != 19789797418LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x685 = 929U;
	int32_t x686 = INT32_MIN;
	volatile int32_t x687 = INT32_MIN;
	int64_t x688 = -320373LL;

	t94 = (x685>>((x686|x687)<x688));

	if (t94 != 464U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x694 = -1LL;
	uint8_t x695 = 2U;
	int16_t x696 = 2;
	static volatile int64_t t95 = -200646982421LL;

	t95 = (x693>>((x694|x695)<x696));

	if (t95 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x697 = 7212027532LL;
	volatile int16_t x700 = INT16_MAX;
	int64_t t96 = -59168813272258LL;

	t96 = (x697>>((x698|x699)<x700));

	if (t96 != 3606013766LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x701 = 258964678307816269LLU;
	uint16_t x702 = UINT16_MAX;
	int64_t x703 = INT64_MIN;
	uint64_t x704 = UINT64_MAX;
	uint64_t t97 = 6466780947973LLU;

	t97 = (x701>>((x702|x703)<x704));

	if (t97 != 129482339153908134LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x709 = 122692805U;
	int8_t x710 = 22;
	volatile uint16_t x711 = 533U;
	int32_t x712 = INT32_MIN;

	t98 = (x709>>((x710|x711)<x712));

	if (t98 != 122692805U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x714 = UINT8_MAX;
	int8_t x715 = INT8_MIN;
	int8_t x716 = INT8_MAX;
	static int32_t t99 = 5903627;

	t99 = (x713>>((x714|x715)<x716));

	if (t99 != 2) { NG(); } else { ; }
	
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

