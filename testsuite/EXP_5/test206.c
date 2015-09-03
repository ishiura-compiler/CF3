#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x12 = INT16_MIN;
uint32_t x14 = 388U;
int8_t x16 = -23;
static int16_t x19 = 1;
uint32_t x22 = 1146U;
uint64_t x24 = 103804345144745856LLU;
static uint64_t t4 = 32796LLU;
volatile int8_t x39 = -1;
int8_t x40 = INT8_MAX;
volatile int32_t t6 = -1517;
int8_t x69 = INT8_MAX;
volatile uint8_t x80 = 1U;
int8_t x95 = INT8_MAX;
int8_t x122 = INT8_MIN;
int32_t t20 = 14778356;
uint32_t x140 = 799993U;
uint16_t x150 = 101U;
static volatile int8_t x173 = INT8_MIN;
int64_t x178 = -1LL;
static int8_t x189 = INT8_MIN;
int64_t t29 = 101LL;
uint16_t x193 = 8117U;
int8_t x195 = INT8_MIN;
volatile uint8_t x201 = UINT8_MAX;
volatile int16_t x219 = INT16_MAX;
static int64_t x233 = -165161LL;
int64_t t36 = 2826609203342122101LL;
uint16_t x242 = 7U;
static uint32_t x250 = 23190U;
int32_t x252 = INT32_MIN;
static int8_t x260 = 5;
int8_t x279 = 53;
volatile int64_t t43 = 414975172592227LL;
volatile int32_t x289 = INT32_MAX;
uint64_t x299 = 6022893649LLU;
uint32_t x302 = 68720U;
static uint64_t x306 = 125LLU;
static uint8_t x308 = 108U;
static uint8_t x316 = UINT8_MAX;
int64_t x320 = INT64_MIN;
uint64_t x321 = 355623569983524129LLU;
volatile uint64_t t51 = 2LLU;
uint64_t x325 = 1055998959716LLU;
int8_t x341 = INT8_MAX;
int64_t x349 = -1LL;
int8_t x351 = -1;
static uint16_t x352 = 0U;
uint32_t x361 = UINT32_MAX;
int64_t x363 = 5069840302213523LL;
int8_t x364 = -1;
int32_t x367 = INT32_MAX;
static int16_t x384 = INT16_MAX;
uint8_t x392 = 29U;
uint32_t x393 = UINT32_MAX;
int8_t x396 = 1;
volatile int8_t x400 = -45;
uint32_t x405 = 1504U;
int16_t x423 = INT16_MIN;
uint64_t x425 = UINT64_MAX;
uint64_t x439 = UINT64_MAX;
uint16_t x443 = UINT16_MAX;
static uint16_t x444 = UINT16_MAX;
int8_t x449 = 22;
uint64_t x450 = UINT64_MAX;
int8_t x451 = 43;
volatile uint64_t t77 = 377LLU;
uint32_t x463 = 121493U;
int16_t x477 = 69;
uint8_t x480 = 11U;
volatile uint16_t x483 = 0U;
uint64_t t83 = 1907LLU;
int32_t x510 = INT32_MIN;
static volatile int64_t x511 = -63710389656LL;
static int32_t x519 = -1;
uint64_t x522 = 497120399LLU;
volatile uint32_t x523 = 119251086U;
static uint16_t x524 = 1184U;
uint8_t x530 = UINT8_MAX;
int32_t t90 = 21471;
int8_t x536 = 3;
volatile int64_t t91 = -223751740753353LL;
int64_t x545 = INT64_MIN;
int16_t x553 = -120;
volatile int16_t x556 = INT16_MIN;
uint16_t x558 = 1574U;
static volatile int64_t t95 = 45185719249441LL;
static int8_t x561 = -1;
volatile uint64_t t97 = 8259226LLU;
volatile uint32_t x577 = 116046360U;
uint64_t x579 = UINT64_MAX;
uint64_t t99 = 1435430803565760397LLU;


void f0(void) {
	uint32_t x9 = 47764U;
	uint32_t x10 = 31U;
	static int16_t x11 = INT16_MIN;
	uint32_t t0 = 15192U;

	t0 = (x9&((x10-x11)*x12));

	if (t0 != 32768U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MAX;
	volatile uint16_t x15 = 0U;
	volatile uint32_t t1 = 3327628U;

	t1 = (x13&((x14-x15)*x16));

	if (t1 != 2147474724U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MAX;
	static uint32_t x18 = UINT32_MAX;
	static int8_t x20 = INT8_MAX;
	volatile int64_t t2 = 14945080400LL;

	t2 = (x17&((x18-x19)*x20));

	if (t2 != 4294967042LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 10U;
	static volatile int8_t x23 = -8;
	volatile uint64_t t3 = 43731531655043409LLU;

	t3 = (x21&((x22-x23)*x24));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x25 = 25U;
	uint64_t x26 = 7375359947LLU;
	int16_t x27 = -1;
	static int8_t x28 = -1;

	t4 = (x25&((x26-x27)*x28));

	if (t4 != 16LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MAX;
	uint32_t x30 = 57697771U;
	uint64_t x31 = 11385LLU;
	static volatile int32_t x32 = 127;
	static volatile uint64_t t5 = 7039742360LLU;

	t5 = (x29&((x30-x31)*x32));

	if (t5 != 32654LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = 0;
	static volatile uint8_t x38 = 13U;

	t6 = (x37&((x38-x39)*x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x45 = -1;
	int32_t x46 = INT32_MAX;
	int32_t x47 = INT32_MAX;
	uint8_t x48 = 5U;
	volatile int32_t t7 = -14;

	t7 = (x45&((x46-x47)*x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x53 = 2U;
	int16_t x54 = INT16_MIN;
	uint32_t x55 = 27860477U;
	volatile int8_t x56 = -1;
	volatile uint32_t t8 = 108046U;

	t8 = (x53&((x54-x55)*x56));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x65 = -1;
	volatile uint64_t x66 = 827LLU;
	volatile uint8_t x67 = 1U;
	int16_t x68 = 1943;
	volatile uint64_t t9 = 567106521936163217LLU;

	t9 = (x65&((x66-x67)*x68));

	if (t9 != 1604918LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x70 = 38302U;
	uint64_t x71 = 443885696926910661LLU;
	int64_t x72 = -1LL;
	volatile uint64_t t10 = 19542104LLU;

	t10 = (x69&((x70-x71)*x72));

	if (t10 != 39LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x77 = 1U;
	static int64_t x78 = 191307946282404500LL;
	uint64_t x79 = 41LLU;
	volatile uint64_t t11 = 530405LLU;

	t11 = (x77&((x78-x79)*x80));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x81 = -1;
	uint8_t x82 = 31U;
	int16_t x83 = -1;
	volatile int8_t x84 = INT8_MIN;
	int32_t t12 = -1;

	t12 = (x81&((x82-x83)*x84));

	if (t12 != -4096) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = INT16_MIN;
	uint16_t x86 = 921U;
	static volatile uint64_t x87 = UINT64_MAX;
	int8_t x88 = -1;
	volatile uint64_t t13 = 12002547LLU;

	t13 = (x85&((x86-x87)*x88));

	if (t13 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x89 = INT16_MAX;
	uint64_t x90 = 1164288661127065LLU;
	int32_t x91 = INT32_MIN;
	volatile int8_t x92 = -1;
	uint64_t t14 = 23LLU;

	t14 = (x89&((x90-x91)*x92));

	if (t14 != 103LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x93 = 32U;
	volatile int8_t x94 = INT8_MAX;
	volatile int8_t x96 = INT8_MAX;
	volatile int32_t t15 = -1;

	t15 = (x93&((x94-x95)*x96));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x97 = -1;
	uint16_t x98 = 5U;
	uint64_t x99 = 138215296767606LLU;
	int16_t x100 = -1;
	uint64_t t16 = 205328LLU;

	t16 = (x97&((x98-x99)*x100));

	if (t16 != 138215296767601LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x109 = INT32_MIN;
	int64_t x110 = 2211044125081LL;
	int8_t x111 = INT8_MAX;
	static uint64_t x112 = UINT64_MAX;
	volatile uint64_t t17 = 3087LLU;

	t17 = (x109&((x110-x111)*x112));

	if (t17 != 18446741861801394176LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x121 = INT64_MIN;
	volatile int16_t x123 = -1;
	int64_t x124 = -1LL;
	int64_t t18 = 20LL;

	t18 = (x121&((x122-x123)*x124));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x125 = INT64_MAX;
	uint32_t x126 = 280U;
	static volatile int8_t x127 = 0;
	uint16_t x128 = UINT16_MAX;
	volatile int64_t t19 = -327389523LL;

	t19 = (x125&((x126-x127)*x128));

	if (t19 != 18349800LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x129 = INT8_MAX;
	uint8_t x130 = 0U;
	volatile int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MAX;

	t20 = (x129&((x130-x131)*x132));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x133 = 14LLU;
	uint32_t x134 = 6357U;
	volatile uint64_t x135 = UINT64_MAX;
	uint32_t x136 = 1047737508U;
	uint64_t t21 = 361008610350085LLU;

	t21 = (x133&((x134-x135)*x136));

	if (t21 != 8LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x137 = INT16_MIN;
	uint32_t x138 = UINT32_MAX;
	volatile int32_t x139 = INT32_MIN;
	uint32_t t22 = 3229U;

	t22 = (x137&((x138-x139)*x140));

	if (t22 != 2146664448U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x141 = INT16_MAX;
	uint64_t x142 = 7LLU;
	volatile int16_t x143 = -2550;
	static int64_t x144 = -261951847360LL;
	volatile uint64_t t23 = 73934068LLU;

	t23 = (x141&((x142-x143)*x144));

	if (t23 != 29504LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x149 = -3885866;
	static uint16_t x151 = UINT16_MAX;
	static uint8_t x152 = 3U;
	volatile int32_t t24 = 21205;

	t24 = (x149&((x150-x151)*x152));

	if (t24 != -3932142) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x153 = 97LLU;
	volatile int8_t x154 = -1;
	volatile uint16_t x155 = 2650U;
	int16_t x156 = INT16_MIN;
	static volatile uint64_t t25 = 217605990722893LLU;

	t25 = (x153&((x154-x155)*x156));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x174 = 2053165433848LL;
	int8_t x175 = 0;
	int64_t x176 = -74473LL;
	static int64_t t26 = 980762820LL;

	t26 = (x173&((x174-x175)*x176));

	if (t26 != -152905389354962176LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x177 = 0U;
	uint16_t x179 = 12U;
	uint64_t x180 = 1598671LLU;
	uint64_t t27 = 40LLU;

	t27 = (x177&((x178-x179)*x180));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x181 = -215341;
	static volatile int16_t x182 = 125;
	uint64_t x183 = UINT64_MAX;
	volatile uint16_t x184 = 447U;
	volatile uint64_t t28 = 4LLU;

	t28 = (x181&((x182-x183)*x184));

	if (t28 != 37890LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x190 = 241749LL;
	static int32_t x191 = INT32_MIN;
	int8_t x192 = -15;

	t29 = (x189&((x190-x191)*x192));

	if (t29 != -32215880960LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x194 = INT16_MIN;
	int64_t x196 = 12508356956LL;
	int64_t t30 = 18545607108LL;

	t30 = (x193&((x194-x195)*x196));

	if (t30 != 3584LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x197 = -15LL;
	static volatile uint8_t x198 = 0U;
	uint64_t x199 = 60642LLU;
	static uint8_t x200 = 0U;
	volatile uint64_t t31 = 5422816287LLU;

	t31 = (x197&((x198-x199)*x200));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x202 = INT8_MIN;
	volatile int8_t x203 = -1;
	int32_t x204 = -1;
	int32_t t32 = -521238092;

	t32 = (x201&((x202-x203)*x204));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x205 = -1414065LL;
	static uint8_t x206 = 0U;
	int32_t x207 = -1;
	uint8_t x208 = UINT8_MAX;
	int64_t t33 = -22063LL;

	t33 = (x205&((x206-x207)*x208));

	if (t33 != 79LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x217 = INT16_MIN;
	static uint32_t x218 = 0U;
	int16_t x220 = 48;
	volatile uint32_t t34 = 594582723U;

	t34 = (x217&((x218-x219)*x220));

	if (t34 != 4293394432U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x225 = INT16_MIN;
	static uint8_t x226 = UINT8_MAX;
	int64_t x227 = -29160461LL;
	uint64_t x228 = 62842490170769LLU;
	volatile uint64_t t35 = 23176LLU;

	t35 = (x225&((x226-x227)*x228));

	if (t35 != 6304345305340674048LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x234 = INT32_MIN;
	int64_t x235 = 0LL;
	uint8_t x236 = UINT8_MAX;

	t36 = (x233&((x234-x235)*x236));

	if (t36 != -547608330240LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x241 = -1;
	static int16_t x243 = INT16_MIN;
	volatile int8_t x244 = INT8_MAX;
	static int32_t t37 = -1;

	t37 = (x241&((x242-x243)*x244));

	if (t37 != 4162425) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x249 = INT64_MAX;
	int16_t x251 = INT16_MIN;
	volatile int64_t t38 = 5446692053641270LL;

	t38 = (x249&((x250-x251)*x252));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x253 = -1;
	int8_t x254 = -3;
	int32_t x255 = INT32_MIN;
	uint64_t x256 = UINT64_MAX;
	static uint64_t t39 = 28LLU;

	t39 = (x253&((x254-x255)*x256));

	if (t39 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x257 = -12543;
	static int8_t x258 = -45;
	uint64_t x259 = UINT64_MAX;
	uint64_t t40 = 15705034214LLU;

	t40 = (x257&((x258-x259)*x260));

	if (t40 != 18446744073709539072LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x261 = INT64_MAX;
	volatile uint16_t x262 = UINT16_MAX;
	static volatile int16_t x263 = -845;
	uint8_t x264 = UINT8_MAX;
	volatile int64_t t41 = -6LL;

	t41 = (x261&((x262-x263)*x264));

	if (t41 != 16926900LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x277 = INT32_MAX;
	uint32_t x278 = 996576U;
	int8_t x280 = 52;
	uint32_t t42 = 514U;

	t42 = (x277&((x278-x279)*x280));

	if (t42 != 51819196U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x285 = 25U;
	static int64_t x286 = -659208124LL;
	uint8_t x287 = 11U;
	int32_t x288 = INT32_MAX;

	t43 = (x285&((x286-x287)*x288));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x290 = 28;
	uint64_t x291 = 1998LLU;
	uint64_t x292 = 1387972819917324166LLU;
	uint64_t t44 = 6LLU;

	t44 = (x289&((x290-x291)*x292));

	if (t44 != 896281300LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x297 = UINT64_MAX;
	int8_t x298 = 2;
	int8_t x300 = INT8_MIN;
	static uint64_t t45 = 186751954429544233LLU;

	t45 = (x297&((x298-x299)*x300));

	if (t45 != 770930386816LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x301 = UINT16_MAX;
	static uint64_t x303 = UINT64_MAX;
	uint32_t x304 = 8829317U;
	uint64_t t46 = 7796068199410298LLU;

	t46 = (x301&((x302-x303)*x304));

	if (t46 != 8117LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x305 = -1;
	volatile int16_t x307 = -2;
	volatile uint64_t t47 = 23775943LLU;

	t47 = (x305&((x306-x307)*x308));

	if (t47 != 13716LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x309 = -1;
	int64_t x310 = -1LL;
	int32_t x311 = INT32_MIN;
	uint16_t x312 = UINT16_MAX;
	volatile int64_t t48 = -85439464697922LL;

	t48 = (x309&((x310-x311)*x312));

	if (t48 != 140735340806145LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x313 = 61;
	uint32_t x314 = UINT32_MAX;
	static int64_t x315 = 28242224025LL;
	volatile int64_t t49 = -226109964071537LL;

	t49 = (x313&((x314-x315)*x316));

	if (t49 != 24LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x317 = -1;
	uint64_t x318 = UINT64_MAX;
	int32_t x319 = INT32_MAX;
	static uint64_t t50 = 11095706138865LLU;

	t50 = (x317&((x318-x319)*x320));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x322 = INT8_MIN;
	static int32_t x323 = -117620;
	int16_t x324 = 39;

	t51 = (x321&((x322-x323)*x324));

	if (t51 != 379168LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x326 = INT64_MAX;
	volatile uint64_t x327 = UINT64_MAX;
	int16_t x328 = INT16_MIN;
	static volatile uint64_t t52 = 282LLU;

	t52 = (x325&((x326-x327)*x328));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x329 = -184LL;
	int16_t x330 = 7263;
	int16_t x331 = INT16_MIN;
	int8_t x332 = INT8_MIN;
	volatile int64_t t53 = -788453301176961797LL;

	t53 = (x329&((x330-x331)*x332));

	if (t53 != -5124096LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x333 = INT32_MIN;
	int32_t x334 = INT32_MIN;
	int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MAX;
	int64_t t54 = -2276406941932630562LL;

	t54 = (x333&((x334-x335)*x336));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x342 = UINT16_MAX;
	static uint16_t x343 = UINT16_MAX;
	int32_t x344 = -2688971;
	static volatile int32_t t55 = 3803;

	t55 = (x341&((x342-x343)*x344));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x345 = 1;
	static uint8_t x346 = 43U;
	static int8_t x347 = -1;
	uint8_t x348 = 0U;
	static int32_t t56 = 6242;

	t56 = (x345&((x346-x347)*x348));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x350 = INT64_MIN;
	int64_t t57 = 13912LL;

	t57 = (x349&((x350-x351)*x352));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x357 = INT32_MIN;
	int64_t x358 = -1LL;
	int8_t x359 = -1;
	volatile uint32_t x360 = 8168U;
	volatile int64_t t58 = -117201038LL;

	t58 = (x357&((x358-x359)*x360));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x362 = UINT8_MAX;
	int64_t t59 = -32903958LL;

	t59 = (x361&((x362-x363)*x364));

	if (t59 != 776472724LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x365 = 45;
	uint32_t x366 = 85928138U;
	volatile int16_t x368 = INT16_MIN;
	volatile uint32_t t60 = 901036U;

	t60 = (x365&((x366-x367)*x368));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x369 = 68U;
	int8_t x370 = INT8_MIN;
	uint8_t x371 = 28U;
	static volatile int16_t x372 = INT16_MAX;
	int32_t t61 = 1;

	t61 = (x369&((x370-x371)*x372));

	if (t61 != 4) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x373 = UINT16_MAX;
	static volatile int16_t x374 = -1;
	int8_t x375 = INT8_MIN;
	volatile int16_t x376 = 6;
	int32_t t62 = 126256;

	t62 = (x373&((x374-x375)*x376));

	if (t62 != 762) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x381 = 1;
	static int16_t x382 = INT16_MAX;
	uint64_t x383 = UINT64_MAX;
	volatile uint64_t t63 = 296LLU;

	t63 = (x381&((x382-x383)*x384));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x389 = INT32_MIN;
	uint32_t x390 = 875021U;
	uint8_t x391 = 29U;
	uint32_t t64 = 57U;

	t64 = (x389&((x390-x391)*x392));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x394 = 1U;
	static uint16_t x395 = 119U;
	static volatile uint32_t t65 = 21U;

	t65 = (x393&((x394-x395)*x396));

	if (t65 != 4294967178U) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x397 = INT8_MAX;
	static int8_t x398 = -1;
	int16_t x399 = 0;
	volatile int32_t t66 = 3;

	t66 = (x397&((x398-x399)*x400));

	if (t66 != 45) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x401 = -1;
	static int64_t x402 = -4832LL;
	int8_t x403 = INT8_MIN;
	int16_t x404 = INT16_MIN;
	int64_t t67 = 203LL;

	t67 = (x401&((x402-x403)*x404));

	if (t67 != 154140672LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x406 = 1805066561U;
	volatile int8_t x407 = INT8_MAX;
	static uint64_t x408 = 2727083LLU;
	static uint64_t t68 = 1195918230226917919LLU;

	t68 = (x405&((x406-x407)*x408));

	if (t68 != 384LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x421 = 240317LLU;
	int32_t x422 = INT32_MIN;
	static volatile int32_t x424 = -1;
	volatile uint64_t t69 = 145134974LLU;

	t69 = (x421&((x422-x423)*x424));

	if (t69 != 229376LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x426 = UINT64_MAX;
	int8_t x427 = -53;
	uint64_t x428 = 57466314730LLU;
	uint64_t t70 = 30786868044LLU;

	t70 = (x425&((x426-x427)*x428));

	if (t70 != 2988248365960LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x429 = UINT8_MAX;
	int16_t x430 = INT16_MIN;
	uint64_t x431 = UINT64_MAX;
	volatile uint32_t x432 = 442601544U;
	uint64_t t71 = 1218194250LLU;

	t71 = (x429&((x430-x431)*x432));

	if (t71 != 72LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x437 = 487U;
	int32_t x438 = -1;
	volatile int16_t x440 = INT16_MIN;
	volatile uint64_t t72 = 145274309306LLU;

	t72 = (x437&((x438-x439)*x440));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x441 = 14572LLU;
	volatile uint64_t x442 = UINT64_MAX;
	uint64_t t73 = 511706635676613841LLU;

	t73 = (x441&((x442-x443)*x444));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x445 = -1;
	static uint32_t x446 = UINT32_MAX;
	static volatile int16_t x447 = -1;
	uint32_t x448 = UINT32_MAX;
	volatile uint32_t t74 = 1U;

	t74 = (x445&((x446-x447)*x448));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x452 = UINT64_MAX;
	volatile uint64_t t75 = 750LLU;

	t75 = (x449&((x450-x451)*x452));

	if (t75 != 4LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x453 = -1;
	uint64_t x454 = 3640904759LLU;
	int32_t x455 = -1;
	volatile uint32_t x456 = 356U;
	uint64_t t76 = 83287802LLU;

	t76 = (x453&((x454-x455)*x456));

	if (t76 != 1296162094560LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x457 = 3023376LLU;
	static uint64_t x458 = 6856LLU;
	int32_t x459 = -68141;
	uint32_t x460 = UINT32_MAX;

	t77 = (x457&((x458-x459)*x460));

	if (t77 != 3015168LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x461 = UINT32_MAX;
	uint32_t x462 = UINT32_MAX;
	int32_t x464 = INT32_MIN;
	volatile uint32_t t78 = 80U;

	t78 = (x461&((x462-x463)*x464));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x465 = 90LLU;
	static uint64_t x466 = 1016304582726983445LLU;
	int8_t x467 = -1;
	static int16_t x468 = -342;
	static uint64_t t79 = 205506230LLU;

	t79 = (x465&((x466-x467)*x468));

	if (t79 != 24LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x469 = 222U;
	static int32_t x470 = INT32_MIN;
	int32_t x471 = INT32_MIN;
	volatile uint16_t x472 = 22U;
	static int32_t t80 = -421445;

	t80 = (x469&((x470-x471)*x472));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x478 = 1280U;
	uint64_t x479 = UINT64_MAX;
	static uint64_t t81 = 410051166939LLU;

	t81 = (x477&((x478-x479)*x480));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x481 = INT16_MIN;
	static int8_t x482 = -2;
	volatile int8_t x484 = INT8_MIN;
	volatile int32_t t82 = 51077569;

	t82 = (x481&((x482-x483)*x484));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x485 = 31478486;
	uint64_t x486 = 103107661LLU;
	volatile uint32_t x487 = UINT32_MAX;
	static uint8_t x488 = 3U;

	t83 = (x485&((x486-x487)*x488));

	if (t83 != 6308034LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x489 = 4866741225070LLU;
	uint32_t x490 = UINT32_MAX;
	uint16_t x491 = UINT16_MAX;
	static volatile int8_t x492 = -3;
	volatile uint64_t t84 = 4516717519LLU;

	t84 = (x489&((x490-x491)*x492));

	if (t84 != 65536LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x501 = -1LL;
	int16_t x502 = INT16_MAX;
	int32_t x503 = -432356;
	int8_t x504 = INT8_MIN;
	int64_t t85 = -39550750100062LL;

	t85 = (x501&((x502-x503)*x504));

	if (t85 != -59535744LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x505 = 121004357786LL;
	uint64_t x506 = 925748278LLU;
	uint8_t x507 = 39U;
	int64_t x508 = INT64_MIN;
	static uint64_t t86 = 2943364817917134888LLU;

	t86 = (x505&((x506-x507)*x508));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x509 = INT8_MIN;
	int16_t x512 = -1;
	volatile int64_t t87 = 868002494100LL;

	t87 = (x509&((x510-x511)*x512));

	if (t87 != -61562906112LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x517 = 1U;
	int64_t x518 = -366077402195826LL;
	static uint8_t x520 = 35U;
	static volatile int64_t t88 = -116756236LL;

	t88 = (x517&((x518-x519)*x520));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x521 = -28;
	volatile uint64_t t89 = 253LLU;

	t89 = (x521&((x522-x523)*x524));

	if (t89 != 447397266592LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x529 = -12;
	int16_t x531 = -1;
	uint16_t x532 = 1450U;

	t90 = (x529&((x530-x531)*x532));

	if (t90 != 371200) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x533 = INT32_MAX;
	int16_t x534 = INT16_MAX;
	int64_t x535 = -7752741LL;

	t91 = (x533&((x534-x535)*x536));

	if (t91 != 23356524LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x541 = INT16_MIN;
	volatile int16_t x542 = -12;
	static volatile int16_t x543 = INT16_MIN;
	volatile int16_t x544 = INT16_MIN;
	volatile int32_t t92 = -3;

	t92 = (x541&((x542-x543)*x544));

	if (t92 != -1073348608) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x546 = INT16_MIN;
	volatile int8_t x547 = -1;
	volatile uint32_t x548 = 1032539U;
	volatile int64_t t93 = 3664721880LL;

	t93 = (x545&((x546-x547)*x548));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x554 = 804;
	volatile int8_t x555 = -6;
	int32_t t94 = -27031994;

	t94 = (x553&((x554-x555)*x556));

	if (t94 != -26542080) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x557 = INT32_MIN;
	int16_t x559 = INT16_MAX;
	int64_t x560 = -1LL;

	t95 = (x557&((x558-x559)*x560));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x562 = INT32_MIN;
	static int64_t x563 = -1LL;
	volatile uint16_t x564 = UINT16_MAX;
	volatile int64_t t96 = -39857120273LL;

	t96 = (x561&((x562-x563)*x564));

	if (t96 != -140735340806145LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x565 = 45U;
	uint16_t x566 = 785U;
	uint64_t x567 = UINT64_MAX;
	static volatile uint16_t x568 = 0U;

	t97 = (x565&((x566-x567)*x568));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x573 = INT8_MIN;
	uint16_t x574 = UINT16_MAX;
	static int16_t x575 = -1;
	int64_t x576 = -1LL;
	int64_t t98 = -107712115302075991LL;

	t98 = (x573&((x574-x575)*x576));

	if (t98 != -65536LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x578 = INT16_MAX;
	int8_t x580 = 0;

	t99 = (x577&((x578-x579)*x580));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

